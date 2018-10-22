cmake_minimum_required(VERSION 2.8.3)
project(subscriber_pkg)

find_package(catkin REQUIRED COMPONENTS
  roscpp
  std_msgs
  msg_pkg
)

#add_message_files(FILES msg_data.msg)

catkin_package(
  INCLUDE_DIRS include
  LIBRARIES subscriber_pkg
  CATKIN_DEPENDS roscpp std_msgs
  DEPENDS system_lib
)


include_directories(
  include
  ${catkin_INCLUDE_DIRS}
)

add_executable(subscriber_pkg_exe src/subscriber.cpp)
target_link_libraries(subscriber_pkg_exe ${catkin_LIBRARIES})

