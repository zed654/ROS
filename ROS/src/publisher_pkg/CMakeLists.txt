cmake_minimum_required(VERSION 2.8.3)
project(publisher_pkg)

## Compile as C++11, supported in ROS Kinetic and newer
# add_compile_options(-std=c++11)
find_package(catkin REQUIRED COMPONENTS
  roscpp
  std_msgs
  msg_pkg
)


catkin_package(
#  INCLUDE_DIRS include
  LIBRARIES publisher_pkg
  CATKIN_DEPENDS roscpp std_msgs
  DEPENDS system_lib
)

include_directories(
 include
  ${catkin_INCLUDE_DIRS}
)

add_executable(publisher_pkg_exe src/publisher.cpp)
target_link_libraries(publisher_pkg_exe ${catkin_LIBRARIES})
