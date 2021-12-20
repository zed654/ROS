#include <memory>

#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"
#include "ex_msg_srv/msg/num.hpp"

class MinimalSubscriber : public rclcpp::Node
{
public:
  MinimalSubscriber()
      : Node("minimal_subscriber_node")
  {
    subscription_ = this->create_subscription<ex_msg_srv::msg::Num>(
        "/ping_pong_topic", 1, std::bind(&MinimalSubscriber::topic_callback, this, std::placeholders::_1));
  }

private:
  void topic_callback(const ex_msg_srv::msg::Num::SharedPtr msg) const
  {
    std::cout << "[Sub Callback] : " << msg->num << std::endl;
    // RCLCPP_INFO(this->get_logger(), "I heard: '%s'", msg->data.c_str());
    // std::cout << "ㅇㅇㅇ" << std::endl;
  }
  rclcpp::Subscription<ex_msg_srv::msg::Num>::SharedPtr subscription_;
};

int main(int argc, char *argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<MinimalSubscriber>());
  rclcpp::shutdown();
  return 0;
}
