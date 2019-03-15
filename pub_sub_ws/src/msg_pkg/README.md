
	catkin_create_pkg publisher_node_msg std_msgs message_generation message_runtime 로 패키지 생성.

	catkin_create_pkg의 의존성에 roscpp를 넣으면 안됨!


	1. CMakeLists.txt

		add_message_files로 message 파일을 추가해준다.

		catkin_package는 CATKIN_DEPENDS 쪽만 주석해제하면 됨.

		add_executable은 하면 안됨!

	2. package.xml

		message_generation과 message_runtime을 <build_export_depend>, <build_depend> 적어주면 됨.
