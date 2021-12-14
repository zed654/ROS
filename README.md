
----------------------------
	ROS Tutorial
----------------------------

	각각의 폴더에 들어간 후, $ catkin_make 로 src폴더 내의 Package폴더들을 make해주고 테스트.

	각 폴더의 build, devel은 $ catkin_make 의 결과로 생성됨. $ catkin_make 명령 전 삭제하고 수행.

	Package를 시작하기 전, source ~/.../devel/setup.bash 작업 필수



	1. pub_sub_ws

		Publisher - MSG - Subscriber 통신 예제 코드.


----------------------------
	ROS2 Tutorial
----------------------------

	Version. 
		eloquent

	Build.

		colcon build
		colcon build --cmake-arg -CMAKE_BUILD_TYPE=Release
		colcon build --packages-select [project name]

	ros2_communication_ws

		Ros2 	Publisher - MSG - Subscriber 및 launch / parameter setup 예제 코드
