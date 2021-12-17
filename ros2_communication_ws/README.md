----------------------------

	< ROS2 .msg / .srv 생성 >

	src/ex_msg_srv_pkg
		msg(Num.msg) 및 srv(AddThreeInts.srv) 작성

----------------------------

----------------------------

	< ROS2 Pub/Sub >

	src/pub_ex_pkg
		ROS2 Publisher 작성
		ROS2 ex_msg_srv_pkg 의 msg 수신
		ROS2 Parameter C-Code Level 작성
		ROS2 Launch 작성
			launch_node_ex_method_1.launch ... ROS Param 추가
			launch_node_ex_method_2.launch ... node_namespace 추가 / Pub, Sub 모두 동작
			launch_executeprocess_ex.launch ... ExecuteProcess( ) 기반 기본 패키지 실행

	src/sub_ex_pkg
		ROS2 Subscriber 작성

----------------------------

----------------------------

	< ROS2 Service >

	Client 에서 Server 로 AddThreeInts.srv 에 기술된 request 에 대한 변수를 보내주면, response 에 대한 변수를 Client 로 던져준다. 말 그대로 두 패키지 사이의 Handshakes 를 위함.

	src/srv_server_pkg
		ROS2 service server 작성

	src/srv_server_pkg
		ROS2 service client 작성

	Service Terminal Command
		ros2 service call <service_name> <service_type> "<arguments>"
		
		main.cpp 코드 중 node->create_service<ex_msg_srv::srv::AddThreeInts>("add_three_ints", &add); 의 "add_three_ints" 가 <service_name> 에 해당.
		ex. ros2 service call add_three_ints ex_msg_srv/srv/AddThreeInts "{a: 1, b: 2, c: 3}"

----------------------------


----------------------------
	< ROS2 Practice Code >

	src/practive_code_pkg
		ROS2 Test Code
----------------------------

----------------------------
	.vscode
		VSCode ROS2 Env Setup
			0. Install colcon extension
			1. Setup c_cpp_properties.json script
			2. Setup launch.json script
			3. Setup settings.json script
			4. Setup tasks.json script

----------------------------
