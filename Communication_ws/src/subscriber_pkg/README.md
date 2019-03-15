
	CMakeLists.txt

		msg_pkg 패키지를 추가하는것이 핵심


	package.xml

		<build_depend>와 <run_depend>에 msg_pkg를 추가하는것이 핵심.

		코드가 꼭 <run_depend>가 아니어도 됨. <exec_depend>로 해도 됨. 이땐 <package>가 <package Format ="2">가 됨
