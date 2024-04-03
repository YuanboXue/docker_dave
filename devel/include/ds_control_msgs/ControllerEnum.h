// Generated by gencpp from file ds_control_msgs/ControllerEnum.msg
// DO NOT EDIT!


#ifndef DS_CONTROL_MSGS_MESSAGE_CONTROLLERENUM_H
#define DS_CONTROL_MSGS_MESSAGE_CONTROLLERENUM_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace ds_control_msgs
{
template <class ContainerAllocator>
struct ControllerEnum_
{
  typedef ControllerEnum_<ContainerAllocator> Type;

  ControllerEnum_()
    {
    }
  ControllerEnum_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }





// reducing the odds to have name collisions with Windows.h 
#if defined(_WIN32) && defined(NONE)
  #undef NONE
#endif
#if defined(_WIN32) && defined(JOYSTICK)
  #undef JOYSTICK
#endif
#if defined(_WIN32) && defined(SURVEY)
  #undef SURVEY
#endif
#if defined(_WIN32) && defined(ROV)
  #undef ROV
#endif
#if defined(_WIN32) && defined(MANUAL)
  #undef MANUAL
#endif
#if defined(_WIN32) && defined(USER_DEFINED)
  #undef USER_DEFINED
#endif

  enum {
    NONE = 0u,
    JOYSTICK = 1u,
    SURVEY = 2u,
    ROV = 3u,
    MANUAL = 4u,
    USER_DEFINED = 65535u,
  };


  typedef boost::shared_ptr< ::ds_control_msgs::ControllerEnum_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ds_control_msgs::ControllerEnum_<ContainerAllocator> const> ConstPtr;

}; // struct ControllerEnum_

typedef ::ds_control_msgs::ControllerEnum_<std::allocator<void> > ControllerEnum;

typedef boost::shared_ptr< ::ds_control_msgs::ControllerEnum > ControllerEnumPtr;
typedef boost::shared_ptr< ::ds_control_msgs::ControllerEnum const> ControllerEnumConstPtr;

// constants requiring out of line definition

   

   

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ds_control_msgs::ControllerEnum_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ds_control_msgs::ControllerEnum_<ContainerAllocator> >::stream(s, "", v);
return s;
}


} // namespace ds_control_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::ds_control_msgs::ControllerEnum_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ds_control_msgs::ControllerEnum_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ds_control_msgs::ControllerEnum_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ds_control_msgs::ControllerEnum_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ds_control_msgs::ControllerEnum_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ds_control_msgs::ControllerEnum_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ds_control_msgs::ControllerEnum_<ContainerAllocator> >
{
  static const char* value()
  {
    return "706449dc20264e9fe97fb9b4e38b186a";
  }

  static const char* value(const ::ds_control_msgs::ControllerEnum_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x706449dc20264e9fULL;
  static const uint64_t static_value2 = 0xe97fb9b4e38b186aULL;
};

template<class ContainerAllocator>
struct DataType< ::ds_control_msgs::ControllerEnum_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ds_control_msgs/ControllerEnum";
  }

  static const char* value(const ::ds_control_msgs::ControllerEnum_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ds_control_msgs::ControllerEnum_<ContainerAllocator> >
{
  static const char* value()
  {
    return "#\n"
"# Preset allocation modes have their type ID's defined here.\n"
"# When building a new custom mode for testing you should\n"
"# start at an index of USER_DEFINED + 1 to make sure\n"
"# you don't clash with existing allocations.\n"
"#\n"
"#\n"
"\n"
"uint32 NONE          = 0\n"
"uint32 JOYSTICK      = 1\n"
"uint32 SURVEY        = 2\n"
"uint32 ROV           = 3\n"
"uint32 MANUAL        = 4\n"
"uint32 USER_DEFINED  = 65535\n"
;
  }

  static const char* value(const ::ds_control_msgs::ControllerEnum_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ds_control_msgs::ControllerEnum_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ControllerEnum_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ds_control_msgs::ControllerEnum_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::ds_control_msgs::ControllerEnum_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // DS_CONTROL_MSGS_MESSAGE_CONTROLLERENUM_H
