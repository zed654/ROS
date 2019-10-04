< 개념 >

메시지를 사용하는 경우 반드시 package.xml에서 
		'message_generation'을 build dependency로, 
		'message_runtime'을 runtime dependency로 
추가해 주셔야 합니다. 또한 후술할 catkin_package() 내에 message_runtime이 반드시 포함되어 있어야 합니다.
	
	
	catkin_create_pkg publisher_node_msg std_msgs message_generation message_runtime 로 패키지 생성.

	catkin_create_pkg의 의존성에 roscpp를 넣으면 안됨!


	1. CMakeLists.txt

		add_message_files로 message 파일을 추가해준다.

		catkin_package{ ... } 는 적어야하되 안에있는 내용은 지워야함!

		add_executable은 하면 안됨!

	2. package.xml

		가만히 납두면 됨



	-> pacakge.xml에서 message_generation, message_runtime을 따로 적어주면 (catkin_create_pkg msg_pkg std_msgs message_generation message_runtime 외에) CMakeLists.txt에서 catkin_package{ ... }의 아래 두 개에 주석을 풀어줘야함. 만약 package.xml을 그대로 쓴다면 catkin_package{ ... } 는 쓰되 안의 내용은 지워야함.
