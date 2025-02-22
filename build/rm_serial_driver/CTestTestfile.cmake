# CMake generated Testfile for 
# Source directory: /home/xwz/1_fyt01/FYT2024_vision-main/src/rm_hardware_driver/rm_serial_driver
# Build directory: /home/xwz/1_fyt01/FYT2024_vision-main/build/rm_serial_driver
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(test_fixed_packet_tool "/usr/bin/python3" "-u" "/opt/ros/humble/share/ament_cmake_test/cmake/run_test.py" "/home/xwz/1_fyt01/FYT2024_vision-main/build/rm_serial_driver/test_results/rm_serial_driver/test_fixed_packet_tool.gtest.xml" "--package-name" "rm_serial_driver" "--output-file" "/home/xwz/1_fyt01/FYT2024_vision-main/build/rm_serial_driver/ament_cmake_gtest/test_fixed_packet_tool.txt" "--command" "/home/xwz/1_fyt01/FYT2024_vision-main/build/rm_serial_driver/test_fixed_packet_tool" "--gtest_output=xml:/home/xwz/1_fyt01/FYT2024_vision-main/build/rm_serial_driver/test_results/rm_serial_driver/test_fixed_packet_tool.gtest.xml")
set_tests_properties(test_fixed_packet_tool PROPERTIES  LABELS "gtest" REQUIRED_FILES "/home/xwz/1_fyt01/FYT2024_vision-main/build/rm_serial_driver/test_fixed_packet_tool" TIMEOUT "60" WORKING_DIRECTORY "/home/xwz/1_fyt01/FYT2024_vision-main/build/rm_serial_driver" _BACKTRACE_TRIPLES "/opt/ros/humble/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/humble/share/ament_cmake_gtest/cmake/ament_add_gtest_test.cmake;86;ament_add_test;/opt/ros/humble/share/ament_cmake_gtest/cmake/ament_add_gtest.cmake;93;ament_add_gtest_test;/home/xwz/1_fyt01/FYT2024_vision-main/src/rm_hardware_driver/rm_serial_driver/CMakeLists.txt;56;ament_add_gtest;/home/xwz/1_fyt01/FYT2024_vision-main/src/rm_hardware_driver/rm_serial_driver/CMakeLists.txt;0;")
add_test(cppcheck "/usr/bin/python3" "-u" "/opt/ros/humble/share/ament_cmake_test/cmake/run_test.py" "/home/xwz/1_fyt01/FYT2024_vision-main/build/rm_serial_driver/test_results/rm_serial_driver/cppcheck.xunit.xml" "--package-name" "rm_serial_driver" "--output-file" "/home/xwz/1_fyt01/FYT2024_vision-main/build/rm_serial_driver/ament_cppcheck/cppcheck.txt" "--command" "/opt/ros/humble/bin/ament_cppcheck" "--xunit-file" "/home/xwz/1_fyt01/FYT2024_vision-main/build/rm_serial_driver/test_results/rm_serial_driver/cppcheck.xunit.xml" "--include_dirs" "/home/xwz/1_fyt01/FYT2024_vision-main/src/rm_hardware_driver/rm_serial_driver/include")
set_tests_properties(cppcheck PROPERTIES  LABELS "cppcheck;linter" TIMEOUT "300" WORKING_DIRECTORY "/home/xwz/1_fyt01/FYT2024_vision-main/src/rm_hardware_driver/rm_serial_driver" _BACKTRACE_TRIPLES "/opt/ros/humble/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/humble/share/ament_cmake_cppcheck/cmake/ament_cppcheck.cmake;66;ament_add_test;/opt/ros/humble/share/ament_cmake_cppcheck/cmake/ament_cmake_cppcheck_lint_hook.cmake;87;ament_cppcheck;/opt/ros/humble/share/ament_cmake_cppcheck/cmake/ament_cmake_cppcheck_lint_hook.cmake;0;;/opt/ros/humble/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/humble/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/opt/ros/humble/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/opt/ros/humble/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/humble/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/opt/ros/humble/share/ament_cmake_auto/cmake/ament_auto_package.cmake;102;ament_package;/home/xwz/1_fyt01/FYT2024_vision-main/src/rm_hardware_driver/rm_serial_driver/CMakeLists.txt;64;ament_auto_package;/home/xwz/1_fyt01/FYT2024_vision-main/src/rm_hardware_driver/rm_serial_driver/CMakeLists.txt;0;")
add_test(lint_cmake "/usr/bin/python3" "-u" "/opt/ros/humble/share/ament_cmake_test/cmake/run_test.py" "/home/xwz/1_fyt01/FYT2024_vision-main/build/rm_serial_driver/test_results/rm_serial_driver/lint_cmake.xunit.xml" "--package-name" "rm_serial_driver" "--output-file" "/home/xwz/1_fyt01/FYT2024_vision-main/build/rm_serial_driver/ament_lint_cmake/lint_cmake.txt" "--command" "/opt/ros/humble/bin/ament_lint_cmake" "--xunit-file" "/home/xwz/1_fyt01/FYT2024_vision-main/build/rm_serial_driver/test_results/rm_serial_driver/lint_cmake.xunit.xml")
set_tests_properties(lint_cmake PROPERTIES  LABELS "lint_cmake;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/xwz/1_fyt01/FYT2024_vision-main/src/rm_hardware_driver/rm_serial_driver" _BACKTRACE_TRIPLES "/opt/ros/humble/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/humble/share/ament_cmake_lint_cmake/cmake/ament_lint_cmake.cmake;47;ament_add_test;/opt/ros/humble/share/ament_cmake_lint_cmake/cmake/ament_cmake_lint_cmake_lint_hook.cmake;21;ament_lint_cmake;/opt/ros/humble/share/ament_cmake_lint_cmake/cmake/ament_cmake_lint_cmake_lint_hook.cmake;0;;/opt/ros/humble/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/humble/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/opt/ros/humble/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/opt/ros/humble/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/humble/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/opt/ros/humble/share/ament_cmake_auto/cmake/ament_auto_package.cmake;102;ament_package;/home/xwz/1_fyt01/FYT2024_vision-main/src/rm_hardware_driver/rm_serial_driver/CMakeLists.txt;64;ament_auto_package;/home/xwz/1_fyt01/FYT2024_vision-main/src/rm_hardware_driver/rm_serial_driver/CMakeLists.txt;0;")
add_test(xmllint "/usr/bin/python3" "-u" "/opt/ros/humble/share/ament_cmake_test/cmake/run_test.py" "/home/xwz/1_fyt01/FYT2024_vision-main/build/rm_serial_driver/test_results/rm_serial_driver/xmllint.xunit.xml" "--package-name" "rm_serial_driver" "--output-file" "/home/xwz/1_fyt01/FYT2024_vision-main/build/rm_serial_driver/ament_xmllint/xmllint.txt" "--command" "/opt/ros/humble/bin/ament_xmllint" "--xunit-file" "/home/xwz/1_fyt01/FYT2024_vision-main/build/rm_serial_driver/test_results/rm_serial_driver/xmllint.xunit.xml")
set_tests_properties(xmllint PROPERTIES  LABELS "xmllint;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/xwz/1_fyt01/FYT2024_vision-main/src/rm_hardware_driver/rm_serial_driver" _BACKTRACE_TRIPLES "/opt/ros/humble/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/humble/share/ament_cmake_xmllint/cmake/ament_xmllint.cmake;50;ament_add_test;/opt/ros/humble/share/ament_cmake_xmllint/cmake/ament_cmake_xmllint_lint_hook.cmake;18;ament_xmllint;/opt/ros/humble/share/ament_cmake_xmllint/cmake/ament_cmake_xmllint_lint_hook.cmake;0;;/opt/ros/humble/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/humble/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/opt/ros/humble/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/opt/ros/humble/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/humble/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/opt/ros/humble/share/ament_cmake_auto/cmake/ament_auto_package.cmake;102;ament_package;/home/xwz/1_fyt01/FYT2024_vision-main/src/rm_hardware_driver/rm_serial_driver/CMakeLists.txt;64;ament_auto_package;/home/xwz/1_fyt01/FYT2024_vision-main/src/rm_hardware_driver/rm_serial_driver/CMakeLists.txt;0;")
subdirs("gtest")
