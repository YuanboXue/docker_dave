# Install script for directory: /root/uuv_ws/src/ds_msgs/ds_control_msgs

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/root/uuv_ws/install")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ds_control_msgs/msg" TYPE FILE FILES
    "/root/uuv_ws/src/ds_msgs/ds_control_msgs/msg/BottomFollow1D.msg"
    "/root/uuv_ws/src/ds_msgs/ds_control_msgs/msg/GoalLegState.msg"
    "/root/uuv_ws/src/ds_msgs/ds_control_msgs/msg/GoalLegLatLon.msg"
    "/root/uuv_ws/src/ds_msgs/ds_control_msgs/msg/ExternalBottomFollowAlarm.msg"
    "/root/uuv_ws/src/ds_msgs/ds_control_msgs/msg/ExternalBottomFollowTimedOverride.msg"
    "/root/uuv_ws/src/ds_msgs/ds_control_msgs/msg/RovAutoState.msg"
    "/root/uuv_ws/src/ds_msgs/ds_control_msgs/msg/RovControllerState.msg"
    "/root/uuv_ws/src/ds_msgs/ds_control_msgs/msg/RovControlGoal.msg"
    "/root/uuv_ws/src/ds_msgs/ds_control_msgs/msg/ActuatorInputs.msg"
    "/root/uuv_ws/src/ds_msgs/ds_control_msgs/msg/ControllerEnum.msg"
    "/root/uuv_ws/src/ds_msgs/ds_control_msgs/msg/JoystickEnum.msg"
    "/root/uuv_ws/src/ds_msgs/ds_control_msgs/msg/PidSettings.msg"
    "/root/uuv_ws/src/ds_msgs/ds_control_msgs/msg/RovAllocationEnum.msg"
    "/root/uuv_ws/src/ds_msgs/ds_control_msgs/msg/RovSwitchState.msg"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ds_control_msgs/srv" TYPE FILE FILES "/root/uuv_ws/src/ds_msgs/ds_control_msgs/srv/RovAutoCommand.srv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ds_control_msgs/cmake" TYPE FILE FILES "/root/uuv_ws/build/ds_msgs/ds_control_msgs/catkin_generated/installspace/ds_control_msgs-msg-paths.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY FILES "/root/uuv_ws/devel/include/ds_control_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roseus/ros" TYPE DIRECTORY FILES "/root/uuv_ws/devel/share/roseus/ros/ds_control_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/common-lisp/ros" TYPE DIRECTORY FILES "/root/uuv_ws/devel/share/common-lisp/ros/ds_control_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/gennodejs/ros" TYPE DIRECTORY FILES "/root/uuv_ws/devel/share/gennodejs/ros/ds_control_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND "/usr/bin/python3" -m compileall "/root/uuv_ws/devel/lib/python3/dist-packages/ds_control_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3/dist-packages" TYPE DIRECTORY FILES "/root/uuv_ws/devel/lib/python3/dist-packages/ds_control_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/root/uuv_ws/build/ds_msgs/ds_control_msgs/catkin_generated/installspace/ds_control_msgs.pc")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ds_control_msgs/cmake" TYPE FILE FILES "/root/uuv_ws/build/ds_msgs/ds_control_msgs/catkin_generated/installspace/ds_control_msgs-msg-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ds_control_msgs/cmake" TYPE FILE FILES
    "/root/uuv_ws/build/ds_msgs/ds_control_msgs/catkin_generated/installspace/ds_control_msgsConfig.cmake"
    "/root/uuv_ws/build/ds_msgs/ds_control_msgs/catkin_generated/installspace/ds_control_msgsConfig-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ds_control_msgs" TYPE FILE FILES "/root/uuv_ws/src/ds_msgs/ds_control_msgs/package.xml")
endif()

