# Install script for directory: /root/uuv_ws/src/ds_msgs/ds_hotel_msgs

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ds_hotel_msgs/msg" TYPE FILE FILES
    "/root/uuv_ws/src/ds_msgs/ds_hotel_msgs/msg/Charge.msg"
    "/root/uuv_ws/src/ds_msgs/ds_hotel_msgs/msg/PowerSupply.msg"
    "/root/uuv_ws/src/ds_msgs/ds_hotel_msgs/msg/HTP.msg"
    "/root/uuv_ws/src/ds_msgs/ds_hotel_msgs/msg/HTPGL.msg"
    "/root/uuv_ws/src/ds_msgs/ds_hotel_msgs/msg/BatMan.msg"
    "/root/uuv_ws/src/ds_msgs/ds_hotel_msgs/msg/Battery.msg"
    "/root/uuv_ws/src/ds_msgs/ds_hotel_msgs/msg/ClioBattery.msg"
    "/root/uuv_ws/src/ds_msgs/ds_hotel_msgs/msg/ClioBatteryPack.msg"
    "/root/uuv_ws/src/ds_msgs/ds_hotel_msgs/msg/PWRdevice.msg"
    "/root/uuv_ws/src/ds_msgs/ds_hotel_msgs/msg/PWR.msg"
    "/root/uuv_ws/src/ds_msgs/ds_hotel_msgs/msg/PwrSwitch.msg"
    "/root/uuv_ws/src/ds_msgs/ds_hotel_msgs/msg/PwrSwitchDevices.msg"
    "/root/uuv_ws/src/ds_msgs/ds_hotel_msgs/msg/PwrSwitchDeviceStatus.msg"
    "/root/uuv_ws/src/ds_msgs/ds_hotel_msgs/msg/TriggerChannelConfig.msg"
    "/root/uuv_ws/src/ds_msgs/ds_hotel_msgs/msg/PwrSwitchDeviceCmd.msg"
    "/root/uuv_ws/src/ds_msgs/ds_hotel_msgs/msg/XR.msg"
    "/root/uuv_ws/src/ds_msgs/ds_hotel_msgs/msg/XrSimState.msg"
    "/root/uuv_ws/src/ds_msgs/ds_hotel_msgs/msg/A2D2.msg"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ds_hotel_msgs/srv" TYPE FILE FILES
    "/root/uuv_ws/src/ds_msgs/ds_hotel_msgs/srv/AbortCmd.srv"
    "/root/uuv_ws/src/ds_msgs/ds_hotel_msgs/srv/BatteryCmd.srv"
    "/root/uuv_ws/src/ds_msgs/ds_hotel_msgs/srv/PowerCmd.srv"
    "/root/uuv_ws/src/ds_msgs/ds_hotel_msgs/srv/PowerSupplyCommand.srv"
    "/root/uuv_ws/src/ds_msgs/ds_hotel_msgs/srv/PwrSwitchCmd.srv"
    "/root/uuv_ws/src/ds_msgs/ds_hotel_msgs/srv/ChargeCmd.srv"
    "/root/uuv_ws/src/ds_msgs/ds_hotel_msgs/srv/ClioChgCmd.srv"
    "/root/uuv_ws/src/ds_msgs/ds_hotel_msgs/srv/TrigPrmCtrlCmd.srv"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ds_hotel_msgs/cmake" TYPE FILE FILES "/root/uuv_ws/build/ds_msgs/ds_hotel_msgs/catkin_generated/installspace/ds_hotel_msgs-msg-paths.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY FILES "/root/uuv_ws/devel/include/ds_hotel_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roseus/ros" TYPE DIRECTORY FILES "/root/uuv_ws/devel/share/roseus/ros/ds_hotel_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/common-lisp/ros" TYPE DIRECTORY FILES "/root/uuv_ws/devel/share/common-lisp/ros/ds_hotel_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/gennodejs/ros" TYPE DIRECTORY FILES "/root/uuv_ws/devel/share/gennodejs/ros/ds_hotel_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND "/usr/bin/python3" -m compileall "/root/uuv_ws/devel/lib/python3/dist-packages/ds_hotel_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3/dist-packages" TYPE DIRECTORY FILES "/root/uuv_ws/devel/lib/python3/dist-packages/ds_hotel_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/root/uuv_ws/build/ds_msgs/ds_hotel_msgs/catkin_generated/installspace/ds_hotel_msgs.pc")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ds_hotel_msgs/cmake" TYPE FILE FILES "/root/uuv_ws/build/ds_msgs/ds_hotel_msgs/catkin_generated/installspace/ds_hotel_msgs-msg-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ds_hotel_msgs/cmake" TYPE FILE FILES
    "/root/uuv_ws/build/ds_msgs/ds_hotel_msgs/catkin_generated/installspace/ds_hotel_msgsConfig.cmake"
    "/root/uuv_ws/build/ds_msgs/ds_hotel_msgs/catkin_generated/installspace/ds_hotel_msgsConfig-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ds_hotel_msgs" TYPE FILE FILES "/root/uuv_ws/src/ds_msgs/ds_hotel_msgs/package.xml")
endif()

