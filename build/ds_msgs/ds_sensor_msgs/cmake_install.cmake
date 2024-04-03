# Install script for directory: /root/uuv_ws/src/ds_msgs/ds_sensor_msgs

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ds_sensor_msgs/msg" TYPE FILE FILES
    "/root/uuv_ws/src/ds_msgs/ds_sensor_msgs/msg/AcousticCurrentProfile.msg"
    "/root/uuv_ws/src/ds_msgs/ds_sensor_msgs/msg/Adcp.msg"
    "/root/uuv_ws/src/ds_msgs/ds_sensor_msgs/msg/Compass.msg"
    "/root/uuv_ws/src/ds_msgs/ds_sensor_msgs/msg/Ctd.msg"
    "/root/uuv_ws/src/ds_msgs/ds_sensor_msgs/msg/DepthPressure.msg"
    "/root/uuv_ws/src/ds_msgs/ds_sensor_msgs/msg/Dvl.msg"
    "/root/uuv_ws/src/ds_msgs/ds_sensor_msgs/msg/Gyro.msg"
    "/root/uuv_ws/src/ds_msgs/ds_sensor_msgs/msg/Ins.msg"
    "/root/uuv_ws/src/ds_msgs/ds_sensor_msgs/msg/MemsImu.msg"
    "/root/uuv_ws/src/ds_msgs/ds_sensor_msgs/msg/NortekDF21.msg"
    "/root/uuv_ws/src/ds_msgs/ds_sensor_msgs/msg/OxygenConcentration.msg"
    "/root/uuv_ws/src/ds_msgs/ds_sensor_msgs/msg/PhinsStandard.msg"
    "/root/uuv_ws/src/ds_msgs/ds_sensor_msgs/msg/RdiPD0.msg"
    "/root/uuv_ws/src/ds_msgs/ds_sensor_msgs/msg/SoundSpeed.msg"
    "/root/uuv_ws/src/ds_msgs/ds_sensor_msgs/msg/VectorMagneticField.msg"
    "/root/uuv_ws/src/ds_msgs/ds_sensor_msgs/msg/Range3D.msg"
    "/root/uuv_ws/src/ds_msgs/ds_sensor_msgs/msg/Ranges3D.msg"
    "/root/uuv_ws/src/ds_msgs/ds_sensor_msgs/msg/ForwardLookingStatus.msg"
    "/root/uuv_ws/src/ds_msgs/ds_sensor_msgs/msg/Velocity3D.msg"
    "/root/uuv_ws/src/ds_msgs/ds_sensor_msgs/msg/NortekVectorSystem.msg"
    "/root/uuv_ws/src/ds_msgs/ds_sensor_msgs/msg/Frequency.msg"
    "/root/uuv_ws/src/ds_msgs/ds_sensor_msgs/msg/PhinsStatus.msg"
    "/root/uuv_ws/src/ds_msgs/ds_sensor_msgs/msg/PhinsStdbin3.msg"
    "/root/uuv_ws/src/ds_msgs/ds_sensor_msgs/msg/UbloxNav.msg"
    "/root/uuv_ws/src/ds_msgs/ds_sensor_msgs/msg/UbloxSignal.msg"
    "/root/uuv_ws/src/ds_msgs/ds_sensor_msgs/msg/UbloxSignals.msg"
    "/root/uuv_ws/src/ds_msgs/ds_sensor_msgs/msg/UbloxSatellite.msg"
    "/root/uuv_ws/src/ds_msgs/ds_sensor_msgs/msg/UbloxSatellites.msg"
    "/root/uuv_ws/src/ds_msgs/ds_sensor_msgs/msg/UbloxSurveyIn.msg"
    "/root/uuv_ws/src/ds_msgs/ds_sensor_msgs/msg/RdiPD5.msg"
    "/root/uuv_ws/src/ds_msgs/ds_sensor_msgs/msg/WaterCurrentProfile.msg"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ds_sensor_msgs/cmake" TYPE FILE FILES "/root/uuv_ws/build/ds_msgs/ds_sensor_msgs/catkin_generated/installspace/ds_sensor_msgs-msg-paths.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY FILES "/root/uuv_ws/devel/include/ds_sensor_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roseus/ros" TYPE DIRECTORY FILES "/root/uuv_ws/devel/share/roseus/ros/ds_sensor_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/common-lisp/ros" TYPE DIRECTORY FILES "/root/uuv_ws/devel/share/common-lisp/ros/ds_sensor_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/gennodejs/ros" TYPE DIRECTORY FILES "/root/uuv_ws/devel/share/gennodejs/ros/ds_sensor_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND "/usr/bin/python3" -m compileall "/root/uuv_ws/devel/lib/python3/dist-packages/ds_sensor_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3/dist-packages" TYPE DIRECTORY FILES "/root/uuv_ws/devel/lib/python3/dist-packages/ds_sensor_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/ds_sensor_msgs" TYPE FILE FILES "/root/uuv_ws/devel/include/ds_sensor_msgs/PhinsConfigConfig.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3/dist-packages/ds_sensor_msgs" TYPE FILE FILES "/root/uuv_ws/devel/lib/python3/dist-packages/ds_sensor_msgs/__init__.py")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND "/usr/bin/python3" -m compileall "/root/uuv_ws/devel/lib/python3/dist-packages/ds_sensor_msgs/cfg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3/dist-packages/ds_sensor_msgs" TYPE DIRECTORY FILES "/root/uuv_ws/devel/lib/python3/dist-packages/ds_sensor_msgs/cfg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/root/uuv_ws/build/ds_msgs/ds_sensor_msgs/catkin_generated/installspace/ds_sensor_msgs.pc")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ds_sensor_msgs/cmake" TYPE FILE FILES "/root/uuv_ws/build/ds_msgs/ds_sensor_msgs/catkin_generated/installspace/ds_sensor_msgs-msg-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ds_sensor_msgs/cmake" TYPE FILE FILES
    "/root/uuv_ws/build/ds_msgs/ds_sensor_msgs/catkin_generated/installspace/ds_sensor_msgsConfig.cmake"
    "/root/uuv_ws/build/ds_msgs/ds_sensor_msgs/catkin_generated/installspace/ds_sensor_msgsConfig-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ds_sensor_msgs" TYPE FILE FILES "/root/uuv_ws/src/ds_msgs/ds_sensor_msgs/package.xml")
endif()

