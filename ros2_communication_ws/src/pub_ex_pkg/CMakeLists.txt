cmake_minimum_required(VERSION 3.5)
project(pub_ex)

# Default to C++14
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()

# CMake build 의 빌드 옵션 정의. 가령, -o3 같은 optimization 적용 가능.
if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# dependency 가 있는 package 를 찾아 적용 ... (A)
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)
find_package(ex_msg_srv REQUIRED)

# executable 에 쓰인 ~.cpp 의 헤더파일들의 기준 폴더를 정의.
include_directories(
    include
)

# ${PROJECT_NAME} 이라는 executable 생성
add_executable(${PROJECT_NAME} src/main.cpp)

# ${PROJECT_NAME} 이라는 executable 에 dependency 가 있는 packages 를 적어준다.
# 해당 packages 는 find_package ... (A) 에 기술된 packages 다.
ament_target_dependencies(${PROJECT_NAME} rclcpp std_msgs ex_msg_srv)

install(TARGETS
	${PROJECT_NAME}
	DESTINATION
	lib/${PROJECT_NAME})
install(DIRECTORY
	launch
	DESTINATION
	share/${PROJECT_NAME}) # To launch, this line shoudl be writen

ament_package()
