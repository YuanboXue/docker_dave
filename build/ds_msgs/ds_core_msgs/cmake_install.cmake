# Install script for directory: /root/uuv_ws/src/ds_msgs/ds_core_msgs

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ds_core_msgs/msg" TYPE FILE FILES
    "/root/uuv_ws/src/ds_msgs/ds_core_msgs/msg/Abort.msg"
    "/root/uuv_ws/src/ds_msgs/ds_core_msgs/msg/Diag.msg"
    "/root/uuv_ws/src/ds_msgs/ds_core_msgs/msg/DsHeader.msg"
    "/root/uuv_ws/src/ds_msgs/ds_core_msgs/msg/KeyBool.msg"
    "/root/uuv_ws/src/ds_msgs/ds_core_msgs/msg/KeyInt.msg"
    "/root/uuv_ws/src/ds_msgs/ds_core_msgs/msg/KeyFloat.msg"
    "/root/uuv_ws/src/ds_msgs/ds_core_msgs/msg/KeyDouble.msg"
    "/root/uuv_ws/src/ds_msgs/ds_core_msgs/msg/KeyString.msg"
    "/root/uuv_ws/src/ds_msgs/ds_core_msgs/msg/ParamDescription.msg"
    "/root/uuv_ws/src/ds_msgs/ds_core_msgs/msg/ParamUpdate.msg"
    "/root/uuv_ws/src/ds_msgs/ds_core_msgs/msg/Status.msg"
    "/root/uuv_ws/src/ds_msgs/ds_core_msgs/msg/RawData.msg"
    "/root/uuv_ws/src/ds_msgs/ds_core_msgs/msg/ByteSequence.msg"
    "/root/uuv_ws/src/ds_msgs/ds_core_msgs/msg/IoCommand.msg"
    "/root/uuv_ws/src/ds_msgs/ds_core_msgs/msg/IoCommandList.msg"
    "/root/uuv_ws/src/ds_msgs/ds_core_msgs/msg/IoSMQueues.msg"
    "/root/uuv_ws/src/ds_msgs/ds_core_msgs/msg/CriticalProcess.msg"
    "/root/uuv_ws/src/ds_msgs/ds_core_msgs/msg/Countdown.msg"
    "/root/uuv_ws/src/ds_msgs/ds_core_msgs/msg/CountdownMonitor.msg"
    "/root/uuv_ws/src/ds_msgs/ds_core_msgs/msg/StringStamped.msg"
    "/root/uuv_ws/src/ds_msgs/ds_core_msgs/msg/ClockOffset.msg"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ds_core_msgs/srv" TYPE FILE FILES
    "/root/uuv_ws/src/ds_msgs/ds_core_msgs/srv/VoidCmd.srv"
    "/root/uuv_ws/src/ds_msgs/ds_core_msgs/srv/IoSMcommand.srv"
    "/root/uuv_ws/src/ds_msgs/ds_core_msgs/srv/StringCmd.srv"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ds_core_msgs/cmake" TYPE FILE FILES "/root/uuv_ws/build/ds_msgs/ds_core_msgs/catkin_generated/installspace/ds_core_msgs-msg-paths.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY FILES "/root/uuv_ws/devel/include/ds_core_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roseus/ros" TYPE DIRECTORY FILES "/root/uuv_ws/devel/share/roseus/ros/ds_core_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/common-lisp/ros" TYPE DIRECTORY FILES "/root/uuv_ws/devel/share/common-lisp/ros/ds_core_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/gennodejs/ros" TYPE DIRECTORY FILES "/root/uuv_ws/devel/share/gennodejs/ros/ds_core_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND "/usr/bin/python3" -m compileall "/root/uuv_ws/devel/lib/python3/dist-packages/ds_core_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3/dist-packages" TYPE DIRECTORY FILES "/root/uuv_ws/devel/lib/python3/dist-packages/ds_core_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/root/uuv_ws/build/ds_msgs/ds_core_msgs/catkin_generated/installspace/ds_core_msgs.pc")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ds_core_msgs/cmake" TYPE FILE FILES "/root/uuv_ws/build/ds_msgs/ds_core_msgs/catkin_generated/installspace/ds_core_msgs-msg-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ds_core_msgs/cmake" TYPE FILE FILES
    "/root/uuv_ws/build/ds_msgs/ds_core_msgs/catkin_generated/installspace/ds_core_msgsConfig.cmake"
    "/root/uuv_ws/build/ds_msgs/ds_core_msgs/catkin_generated/installspace/ds_core_msgsConfig-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ds_core_msgs" TYPE FILE FILES "/root/uuv_ws/src/ds_msgs/ds_core_msgs/package.xml")
endif()

