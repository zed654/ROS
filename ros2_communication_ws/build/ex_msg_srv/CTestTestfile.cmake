# CMake generated Testfile for 
# Source directory: /home/neubility/ROS/ros2_communication_ws/src/ex_msg_srv_pkg
# Build directory: /home/neubility/ROS/ros2_communication_ws/build/ex_msg_srv
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(lint_cmake "/usr/bin/python3" "-u" "/opt/ros/eloquent/share/ament_cmake_test/cmake/run_test.py" "/home/neubility/ROS/ros2_communication_ws/build/ex_msg_srv/test_results/ex_msg_srv/lint_cmake.xunit.xml" "--package-name" "ex_msg_srv" "--output-file" "/home/neubility/ROS/ros2_communication_ws/build/ex_msg_srv/ament_lint_cmake/lint_cmake.txt" "--command" "/opt/ros/eloquent/bin/ament_lint_cmake" "--xunit-file" "/home/neubility/ROS/ros2_communication_ws/build/ex_msg_srv/test_results/ex_msg_srv/lint_cmake.xunit.xml")
set_tests_properties(lint_cmake PROPERTIES  LABELS "lint_cmake;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/neubility/ROS/ros2_communication_ws/src/ex_msg_srv_pkg")
add_test(xmllint "/usr/bin/python3" "-u" "/opt/ros/eloquent/share/ament_cmake_test/cmake/run_test.py" "/home/neubility/ROS/ros2_communication_ws/build/ex_msg_srv/test_results/ex_msg_srv/xmllint.xunit.xml" "--package-name" "ex_msg_srv" "--output-file" "/home/neubility/ROS/ros2_communication_ws/build/ex_msg_srv/ament_xmllint/xmllint.txt" "--command" "/opt/ros/eloquent/bin/ament_xmllint" "--xunit-file" "/home/neubility/ROS/ros2_communication_ws/build/ex_msg_srv/test_results/ex_msg_srv/xmllint.xunit.xml")
set_tests_properties(xmllint PROPERTIES  LABELS "xmllint;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/neubility/ROS/ros2_communication_ws/src/ex_msg_srv_pkg")
subdirs("ex_msg_srv__py")
