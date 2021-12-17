#include <chrono>
#include <functional>
#include <memory>
#include <string>

#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"
#include "ex_msg_srv/msg/num.hpp"
#include "ex_msg_srv/srv/add_three_ints.hpp"

#include "time_checker.h"
#include "opencv2/opencv.hpp"

using namespace std::chrono_literals;

/* This example creates a subclass of Node and uses std::bind() to register a
* member function as a callback from the timer. */

class MinimalPublisher : public rclcpp::Node
{
public:
    MinimalPublisher()
        : Node("minimal_publisher_node"), count_(0)
    {
        this->declare_parameter<std::string>("param_1", "world");                                    // ROS Paramters 를 사용하기 위해서 필수적으로 정의 필요.
        this->declare_parameter<double>("param_2", 1.3);                                             // ROS Paramters 를 사용하기 위해서 필수적으로 정의 필요.
        publisher_ = this->create_publisher<ex_msg_srv::msg::Num>("/ping_pong_topic", 1);            // ROS Topic 정의
        timer_ = this->create_wall_timer(500ms, std::bind(&MinimalPublisher::timer_callback, this)); // Thread 를 생성하여 Callback 방식으로 함수 호출
    }

private:
    void timer_callback()
    {
        double tc_calc_time = tc.LoopTimeCalc();
        std::cout << tc_calc_time << std::endl;
        ex_msg_srv::msg::Num message;
        // auto message = ex_msg_srv::msg::Num();
        this->get_parameter("param_1", param_string_);
        this->get_parameter("param_2", param_double_);
        message.num = tc_calc_time;
        // message.data = "Hello, world! " + std::to_string(count_++);
        // RCLCPP_INFO(this->get_logger(), "Publishing: '%s', '%s' ", message.data.c_str(), param_string_);
        // std::cout << param_string_ << "\t\t" << param_double_ << std::endl;
        publisher_->publish(message);
    }
    TimeChecker tc;
    rclcpp::TimerBase::SharedPtr timer_;
    rclcpp::Publisher<ex_msg_srv::msg::Num>::SharedPtr publisher_;
    std::string param_string_;
    double param_double_;
    size_t count_;
};

#include <pthread.h>
class CuteNB
{
public:
    CuteNB()
    {
        std::cout << "Hello Cute NB" << std::endl;
    }
    virtual ~CuteNB()
    {
        std::cout << "GoodBye Cute NB" << std::endl;
    }
private:
};

class Localization
{
public:
    // void get_lat() { return this->lat; }
    // void get_lon() { return this->lon; }

private:
    double lat;
    double lon;
    Localization() : lat(0), lon(0) {  }
    virtual ~Localization() {  }
    void UpdatePosData()
    {
        this->lat = 3;
        this->lon = 2;
    }
};

pthread_mutex_t mutex_lock;
void *ThreadNB(void *param)
{
    std::cout << "Cute Node Thread" << std::endl;
}
int main(int argc, char *argv[])
{
    pthread_mutex_init(&mutex_lock, NULL);
    CuteNB cute_nb;
    pthread_t p_thread[3];
    pthread_create(&p_thread[0], NULL, &ThreadNB, &cute_nb);
    // rclcpp::Node fdsfds("minimal_publisher_node");
    // fdsfds->declear_parameter<std::string>("param_1", "world");
    cv::Mat test_img(500, 500, CV_8UC3);
    while(1)
    {
        cv::imshow("test", test_img);
        if(cv::waitKey(10) == 'q')
            break;
    }

    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<MinimalPublisher>());
    rclcpp::shutdown();

    for(int i = 0; i < 3; i++)
    {
        pthread_detach(p_thread[i]);
    }
    return 0;
}
