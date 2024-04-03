# Install script for directory: /root/uuv_ws/src/ds_msgs/ds_ocomms_msgs

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ds_ocomms_msgs/msg" TYPE FILE FILES
    "/root/uuv_ws/src/ds_msgs/ds_ocomms_msgs/msg/EmitterStatus.msg"
    "/root/uuv_ws/src/ds_msgs/ds_ocomms_msgs/msg/EnvStatus.msg"
    "/root/uuv_ws/src/ds_msgs/ds_ocomms_msgs/msg/ModemSettings.msg"
    "/root/uuv_ws/src/ds_msgs/ds_ocomms_msgs/msg/ModemStatus.msg"
    "/root/uuv_ws/src/ds_msgs/ds_ocomms_msgs/msg/XfrStatus.msg"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ds_ocomms_msgs/srv" TYPE FILE FILES
    "/root/uuv_ws/src/ds_msgs/ds_ocomms_msgs/srv/PingCmd.srv"
    "/root/uuv_ws/src/ds_msgs/ds_ocomms_msgs/srv/PwrCmd.srv"
    "/root/uuv_ws/src/ds_msgs/ds_ocomms_msgs/srv/QueryCmd.srv"
    "/root/uuv_ws/src/ds_msgs/ds_ocomms_msgs/srv/SettingsCmd.srv"
    "/root/uuv_ws/src/ds_msgs/ds_ocomms_msgs/srv/TransferCmd.srv"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ds_ocomms_msgs/cmake" TYPE FILE FILES "/root/uuv_ws/build/ds_msgs/ds_ocomms_msgs/catkin_generated/installspace/ds_ocomms_msgs-msg-paths.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY FILES "/root/uuv_ws/devel/include/ds_ocomms_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roseus/ros" TYPE DIRECTORY FILES "/root/uuv_ws/devel/share/roseus/ros/ds_ocomms_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/common-lisp/ros" TYPE DIRECTORY FILES "/root/uuv_ws/devel/share/common-lisp/ros/ds_ocomms_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/gennodejs/ros" TYPE DIRECTORY FILES "/root/uuv_ws/devel/share/gennodejs/ros/ds_ocomms_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND "/usr/bin/python3" -m compileall "/root/uuv_ws/devel/lib/python3/dist-packages/ds_ocomms_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3/dist-packages" TYPE DIRECTORY FILES "/root/uuv_ws/devel/lib/python3/dist-packages/ds_ocomms_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/root/uuv_ws/build/ds_msgs/ds_ocomms_msgs/catkin_generated/installspace/ds_ocomms_msgs.pc")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ds_ocomms_msgs/cmake" TYPE FILE FILES "/root/uuv_ws/build/ds_msgs/ds_ocomms_msgs/catkin_generated/installspace/ds_ocomms_msgs-msg-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ds_ocomms_msgs/cmake" TYPE FILE FILES
    "/root/uuv_ws/build/ds_msgs/ds_ocomms_msgs/catkin_generated/installspace/ds_ocomms_msgsConfig.cmake"
    "/root/uuv_ws/build/ds_msgs/ds_ocomms_msgs/catkin_generated/installspace/ds_ocomms_msgsConfig-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ds_ocomms_msgs" TYPE FILE FILES "/root/uuv_ws/src/ds_msgs/ds_ocomms_msgs/package.xml")
endif()

