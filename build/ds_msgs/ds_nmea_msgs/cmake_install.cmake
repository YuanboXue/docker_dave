# Install script for directory: /root/uuv_ws/src/ds_msgs/ds_nmea_msgs

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ds_nmea_msgs/msg" TYPE FILE FILES
    "/root/uuv_ws/src/ds_msgs/ds_nmea_msgs/msg/Hdt.msg"
    "/root/uuv_ws/src/ds_msgs/ds_nmea_msgs/msg/Gga.msg"
    "/root/uuv_ws/src/ds_msgs/ds_nmea_msgs/msg/Gll.msg"
    "/root/uuv_ws/src/ds_msgs/ds_nmea_msgs/msg/PixseAtitud.msg"
    "/root/uuv_ws/src/ds_msgs/ds_nmea_msgs/msg/PixsePositi.msg"
    "/root/uuv_ws/src/ds_msgs/ds_nmea_msgs/msg/PixseSpeed.msg"
    "/root/uuv_ws/src/ds_msgs/ds_nmea_msgs/msg/PixseUtmwgs.msg"
    "/root/uuv_ws/src/ds_msgs/ds_nmea_msgs/msg/PixseHeave.msg"
    "/root/uuv_ws/src/ds_msgs/ds_nmea_msgs/msg/PixseStdhrp.msg"
    "/root/uuv_ws/src/ds_msgs/ds_nmea_msgs/msg/PixseStdspd.msg"
    "/root/uuv_ws/src/ds_msgs/ds_nmea_msgs/msg/PixseStdpos.msg"
    "/root/uuv_ws/src/ds_msgs/ds_nmea_msgs/msg/PixseAlgsts.msg"
    "/root/uuv_ws/src/ds_msgs/ds_nmea_msgs/msg/PixseStatus.msg"
    "/root/uuv_ws/src/ds_msgs/ds_nmea_msgs/msg/PixseHtsts.msg"
    "/root/uuv_ws/src/ds_msgs/ds_nmea_msgs/msg/PixseHspos.msg"
    "/root/uuv_ws/src/ds_msgs/ds_nmea_msgs/msg/Vtg.msg"
    "/root/uuv_ws/src/ds_msgs/ds_nmea_msgs/msg/Zda.msg"
    "/root/uuv_ws/src/ds_msgs/ds_nmea_msgs/msg/Tro.msg"
    "/root/uuv_ws/src/ds_msgs/ds_nmea_msgs/msg/Inf.msg"
    "/root/uuv_ws/src/ds_msgs/ds_nmea_msgs/msg/PixseAccest.msg"
    "/root/uuv_ws/src/ds_msgs/ds_nmea_msgs/msg/PixseFogest.msg"
    "/root/uuv_ws/src/ds_msgs/ds_nmea_msgs/msg/PixseConfig1Int.msg"
    "/root/uuv_ws/src/ds_msgs/ds_nmea_msgs/msg/PixseConfig2Int.msg"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ds_nmea_msgs/cmake" TYPE FILE FILES "/root/uuv_ws/build/ds_msgs/ds_nmea_msgs/catkin_generated/installspace/ds_nmea_msgs-msg-paths.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY FILES "/root/uuv_ws/devel/include/ds_nmea_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roseus/ros" TYPE DIRECTORY FILES "/root/uuv_ws/devel/share/roseus/ros/ds_nmea_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/common-lisp/ros" TYPE DIRECTORY FILES "/root/uuv_ws/devel/share/common-lisp/ros/ds_nmea_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/gennodejs/ros" TYPE DIRECTORY FILES "/root/uuv_ws/devel/share/gennodejs/ros/ds_nmea_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND "/usr/bin/python3" -m compileall "/root/uuv_ws/devel/lib/python3/dist-packages/ds_nmea_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3/dist-packages" TYPE DIRECTORY FILES "/root/uuv_ws/devel/lib/python3/dist-packages/ds_nmea_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/root/uuv_ws/build/ds_msgs/ds_nmea_msgs/catkin_generated/installspace/ds_nmea_msgs.pc")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ds_nmea_msgs/cmake" TYPE FILE FILES "/root/uuv_ws/build/ds_msgs/ds_nmea_msgs/catkin_generated/installspace/ds_nmea_msgs-msg-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ds_nmea_msgs/cmake" TYPE FILE FILES
    "/root/uuv_ws/build/ds_msgs/ds_nmea_msgs/catkin_generated/installspace/ds_nmea_msgsConfig.cmake"
    "/root/uuv_ws/build/ds_msgs/ds_nmea_msgs/catkin_generated/installspace/ds_nmea_msgsConfig-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ds_nmea_msgs" TYPE FILE FILES "/root/uuv_ws/src/ds_msgs/ds_nmea_msgs/package.xml")
endif()

