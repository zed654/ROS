#include "ros/ros.h"                                    // ROS 기본 헤더파일 
#include "msg_pkg/msg_data.h"            // msg_pkg 메시지 파일 헤더 (빌드후 자동 생성됨)

int main(int argc, char **argv)                         // 노드 메인 함수
{
  ros::init(argc, argv, "publisher_node");  // 노드명 초기화
  ros::NodeHandle nh;                                   // ROS 시스템과 통신을 위한 노드 핸들 선언

  // 발행자 선언, msg_pkg 패키지의 msg_data.msg 메시지 파일을 이용한
  // 발행자 ros_publisher 를 작성한다. 토픽명은 "ros_publisher_tn" 이며,
  // 발행자 큐(queue) 사이즈를 100개로 설정한다는 것이다
  ros::Publisher ros_publisher = nh.advertise<msg_pkg::msg_data>("ros_publisher_tn", 100);

  // 루프 주기를 설정한다. "10" 이라는 것은 10Hz를 말하는 것으로 0.1초 간격으로 반복된다
  ros::Rate loop_rate(10); 

  int count = 0;    // 메시지에 사용될 변수 선언

  while (ros::ok())
  {
    msg_pkg::msg_data msg;      // msg_data 메시지 파일 형식으로 msg 라는 메시지를 선언
    msg.data1 = count;                   // count 라는 변수를 이용하여 메시지 값을 정한다
    msg.data2 = count+1000;

    ROS_INFO("send msg = %d", count);   // ROS_INFO 라는 ROS 함수를 이용하여 count 변수를 표시한다

    ros_publisher.publish(msg);      // 메시지를 발행한다. 약 0.1초 간격으로 발행된다

    loop_rate.sleep();                  // 위에서 정한 루프 주기에 따라 슬립에 들어간다

    ++count;                            // count 변수 1씩 증가
  }

  return 0;
}
