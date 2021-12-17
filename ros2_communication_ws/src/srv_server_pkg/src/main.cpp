#include "rclcpp/rclcpp.hpp"
#include "ex_msg_srv/srv/add_three_ints.hpp"

#include <memory>

/*
AddThreeInts.srv
   int64 a
   int64 b
   int64 c
   ---
   int64 sum
*/
void add(const std::shared_ptr<ex_msg_srv::srv::AddThreeInts::Request> request,
         std::shared_ptr<ex_msg_srv::srv::AddThreeInts::Response> response)
{
  response->sum = request->a + request->b + request->c;
  // RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Incoming request\na: %ld"
  //                                           " b: %ld"
  //                                           " c: %ld",
  //             request->a, request->b, request->c);
  // RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "sending back response: [%ld]", (long int)response->sum);
  std::cout << "sum, a, b, c" << response->sum << ", " << request->a << ", " << request->b << ", " << request->c << std::endl;
}

int main(int argc, char **argv)
{
  rclcpp::init(argc, argv);

  std::shared_ptr<rclcpp::Node> node = rclcpp::Node::make_shared("add_three_ints_server");

  rclcpp::Service<ex_msg_srv::srv::AddThreeInts>::SharedPtr service =
      node->create_service<ex_msg_srv::srv::AddThreeInts>("add_three_ints", &add); // service_name -> "add_three_ints"

  RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Ready to add three ints.");

  rclcpp::spin(node);
  rclcpp::shutdown();
}
