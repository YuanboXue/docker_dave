#!/bin/sh

if [ -n "$DESTDIR" ] ; then
    case $DESTDIR in
        /*) # ok
            ;;
        *)
            /bin/echo "DESTDIR argument must be absolute... "
            /bin/echo "otherwise python's distutils will bork things."
            exit 1
    esac
fi

echo_and_run() { echo "+ $@" ; "$@" ; }

echo_and_run cd "/root/uuv_ws/src/uuv_manipulators/uuv_manipulators_kinematics"

# ensure that Python install destination exists
echo_and_run mkdir -p "$DESTDIR/root/uuv_ws/install/lib/python3/dist-packages"

# Note that PYTHONPATH is pulled from the environment to support installing
# into one location when some dependencies were installed in another
# location, #123.
echo_and_run /usr/bin/env \
    PYTHONPATH="/root/uuv_ws/install/lib/python3/dist-packages:/root/uuv_ws/build/lib/python3/dist-packages:$PYTHONPATH" \
    CATKIN_BINARY_DIR="/root/uuv_ws/build" \
    "/usr/bin/python3" \
    "/root/uuv_ws/src/uuv_manipulators/uuv_manipulators_kinematics/setup.py" \
     \
    build --build-base "/root/uuv_ws/build/uuv_manipulators/uuv_manipulators_kinematics" \
    install \
    --root="${DESTDIR-/}" \
    --install-layout=deb --prefix="/root/uuv_ws/install" --install-scripts="/root/uuv_ws/install/bin"
