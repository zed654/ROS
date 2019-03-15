cmake_minimum_required(VERSION 2.8.3)
project(msg_pkg)

find_package(catkin REQUIRED COMPONENTS
  message_generation
  message_runtime
  std_msgs
)

 add_message_files(
   FILES
   msg_data.msg
#   Message2.msg
 )


## Generate added messages and services with any dependencies listed here
 generate_messages(
   DEPENDENCIES
   std_msgs
 )


catkin_package(
#  INCLUDE_DIRS include
#  LIBRARIES publisher_node_msg
#  CATKIN_DEPENDS message_generation message_runtime std_msgs
#  DEPENDS system_lib
)

include_directories(
# include
  ${catkin_INCLUDE_DIRS}
)

