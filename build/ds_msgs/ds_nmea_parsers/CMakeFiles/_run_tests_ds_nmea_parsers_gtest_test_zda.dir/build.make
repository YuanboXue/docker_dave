# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /root/uuv_ws/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /root/uuv_ws/build

# Utility rule file for _run_tests_ds_nmea_parsers_gtest_test_zda.

# Include the progress variables for this target.
include ds_msgs/ds_nmea_parsers/CMakeFiles/_run_tests_ds_nmea_parsers_gtest_test_zda.dir/progress.make

ds_msgs/ds_nmea_parsers/CMakeFiles/_run_tests_ds_nmea_parsers_gtest_test_zda:
	cd /root/uuv_ws/build/ds_msgs/ds_nmea_parsers && ../../catkin_generated/env_cached.sh /usr/bin/python3 /opt/ros/noetic/share/catkin/cmake/test/run_tests.py /root/uuv_ws/build/test_results/ds_nmea_parsers/gtest-test_zda.xml "/root/uuv_ws/devel/lib/ds_nmea_parsers/test_zda --gtest_output=xml:/root/uuv_ws/build/test_results/ds_nmea_parsers/gtest-test_zda.xml"

_run_tests_ds_nmea_parsers_gtest_test_zda: ds_msgs/ds_nmea_parsers/CMakeFiles/_run_tests_ds_nmea_parsers_gtest_test_zda
_run_tests_ds_nmea_parsers_gtest_test_zda: ds_msgs/ds_nmea_parsers/CMakeFiles/_run_tests_ds_nmea_parsers_gtest_test_zda.dir/build.make

.PHONY : _run_tests_ds_nmea_parsers_gtest_test_zda

# Rule to build all files generated by this target.
ds_msgs/ds_nmea_parsers/CMakeFiles/_run_tests_ds_nmea_parsers_gtest_test_zda.dir/build: _run_tests_ds_nmea_parsers_gtest_test_zda

.PHONY : ds_msgs/ds_nmea_parsers/CMakeFiles/_run_tests_ds_nmea_parsers_gtest_test_zda.dir/build

ds_msgs/ds_nmea_parsers/CMakeFiles/_run_tests_ds_nmea_parsers_gtest_test_zda.dir/clean:
	cd /root/uuv_ws/build/ds_msgs/ds_nmea_parsers && $(CMAKE_COMMAND) -P CMakeFiles/_run_tests_ds_nmea_parsers_gtest_test_zda.dir/cmake_clean.cmake
.PHONY : ds_msgs/ds_nmea_parsers/CMakeFiles/_run_tests_ds_nmea_parsers_gtest_test_zda.dir/clean

ds_msgs/ds_nmea_parsers/CMakeFiles/_run_tests_ds_nmea_parsers_gtest_test_zda.dir/depend:
	cd /root/uuv_ws/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /root/uuv_ws/src /root/uuv_ws/src/ds_msgs/ds_nmea_parsers /root/uuv_ws/build /root/uuv_ws/build/ds_msgs/ds_nmea_parsers /root/uuv_ws/build/ds_msgs/ds_nmea_parsers/CMakeFiles/_run_tests_ds_nmea_parsers_gtest_test_zda.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : ds_msgs/ds_nmea_parsers/CMakeFiles/_run_tests_ds_nmea_parsers_gtest_test_zda.dir/depend

