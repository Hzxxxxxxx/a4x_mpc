# CMake generated Testfile for 
# Source directory: /home/a4x/hezixiang/ws_rm_robot/src/moveit2/moveit_planners/pilz_industrial_motion_planner_testutils
# Build directory: /home/a4x/hezixiang/ws_rm_robot/build/pilz_industrial_motion_planner_testutils
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test([=[cppcheck]=] "/usr/bin/python3" "-u" "/opt/ros/humble/share/ament_cmake_test/cmake/run_test.py" "/home/a4x/hezixiang/ws_rm_robot/build/pilz_industrial_motion_planner_testutils/test_results/pilz_industrial_motion_planner_testutils/cppcheck.xunit.xml" "--package-name" "pilz_industrial_motion_planner_testutils" "--output-file" "/home/a4x/hezixiang/ws_rm_robot/build/pilz_industrial_motion_planner_testutils/ament_cppcheck/cppcheck.txt" "--command" "/opt/ros/humble/bin/ament_cppcheck" "--xunit-file" "/home/a4x/hezixiang/ws_rm_robot/build/pilz_industrial_motion_planner_testutils/test_results/pilz_industrial_motion_planner_testutils/cppcheck.xunit.xml" "--include_dirs" "/home/a4x/hezixiang/ws_rm_robot/src/moveit2/moveit_planners/pilz_industrial_motion_planner_testutils/include")
set_tests_properties([=[cppcheck]=] PROPERTIES  LABELS "cppcheck;linter" TIMEOUT "300" WORKING_DIRECTORY "/home/a4x/hezixiang/ws_rm_robot/src/moveit2/moveit_planners/pilz_industrial_motion_planner_testutils" _BACKTRACE_TRIPLES "/opt/ros/humble/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/humble/share/ament_cmake_cppcheck/cmake/ament_cppcheck.cmake;66;ament_add_test;/opt/ros/humble/share/ament_cmake_cppcheck/cmake/ament_cmake_cppcheck_lint_hook.cmake;87;ament_cppcheck;/opt/ros/humble/share/ament_cmake_cppcheck/cmake/ament_cmake_cppcheck_lint_hook.cmake;0;;/opt/ros/humble/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/humble/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/opt/ros/humble/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/opt/ros/humble/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/humble/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/home/a4x/hezixiang/ws_rm_robot/src/moveit2/moveit_planners/pilz_industrial_motion_planner_testutils/CMakeLists.txt;77;ament_package;/home/a4x/hezixiang/ws_rm_robot/src/moveit2/moveit_planners/pilz_industrial_motion_planner_testutils/CMakeLists.txt;0;")
add_test([=[xmllint]=] "/usr/bin/python3" "-u" "/opt/ros/humble/share/ament_cmake_test/cmake/run_test.py" "/home/a4x/hezixiang/ws_rm_robot/build/pilz_industrial_motion_planner_testutils/test_results/pilz_industrial_motion_planner_testutils/xmllint.xunit.xml" "--package-name" "pilz_industrial_motion_planner_testutils" "--output-file" "/home/a4x/hezixiang/ws_rm_robot/build/pilz_industrial_motion_planner_testutils/ament_xmllint/xmllint.txt" "--command" "/opt/ros/humble/bin/ament_xmllint" "--xunit-file" "/home/a4x/hezixiang/ws_rm_robot/build/pilz_industrial_motion_planner_testutils/test_results/pilz_industrial_motion_planner_testutils/xmllint.xunit.xml")
set_tests_properties([=[xmllint]=] PROPERTIES  LABELS "xmllint;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/a4x/hezixiang/ws_rm_robot/src/moveit2/moveit_planners/pilz_industrial_motion_planner_testutils" _BACKTRACE_TRIPLES "/opt/ros/humble/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/humble/share/ament_cmake_xmllint/cmake/ament_xmllint.cmake;50;ament_add_test;/opt/ros/humble/share/ament_cmake_xmllint/cmake/ament_cmake_xmllint_lint_hook.cmake;18;ament_xmllint;/opt/ros/humble/share/ament_cmake_xmllint/cmake/ament_cmake_xmllint_lint_hook.cmake;0;;/opt/ros/humble/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/humble/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/opt/ros/humble/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/opt/ros/humble/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/humble/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/home/a4x/hezixiang/ws_rm_robot/src/moveit2/moveit_planners/pilz_industrial_motion_planner_testutils/CMakeLists.txt;77;ament_package;/home/a4x/hezixiang/ws_rm_robot/src/moveit2/moveit_planners/pilz_industrial_motion_planner_testutils/CMakeLists.txt;0;")
