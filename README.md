
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

	Build.

		colcon build
		colcon build --cmake-arg -CMAKE_BUILD_TYPE=Release
		colcon build --packages-select [project name]

	ros2_communication_ws

		Ros2 	1. Publish/Subscribe 통신 예제 코드.
			2. Launch Example Code (Node based / Executeprocess based)
			3. Param setting is not completed
			4. MSG Generation / SRV Generation (ex_msg_srv_pkg)

				find_package(msg_name, REQUIRED)
				ament_target_dependencies(msg name)
