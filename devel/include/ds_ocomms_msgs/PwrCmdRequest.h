// Generated by gencpp from file ds_ocomms_msgs/PwrCmdRequest.msg
// DO NOT EDIT!


#ifndef DS_OCOMMS_MSGS_MESSAGE_PWRCMDREQUEST_H
#define DS_OCOMMS_MSGS_MESSAGE_PWRCMDREQUEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace ds_ocomms_msgs
{
template <class ContainerAllocator>
struct PwrCmdRequest_
{
  typedef PwrCmdRequest_<ContainerAllocator> Type;

  PwrCmdRequest_()
    : PWR_DESTINATION()
    , PWR_STATE_DESIRED()  {
    }
  PwrCmdRequest_(const ContainerAllocator& _alloc)
    : PWR_DESTINATION(_alloc)
    , PWR_STATE_DESIRED(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _PWR_DESTINATION_type;
  _PWR_DESTINATION_type PWR_DESTINATION;

   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _PWR_STATE_DESIRED_type;
  _PWR_STATE_DESIRED_type PWR_STATE_DESIRED;





  typedef boost::shared_ptr< ::ds_ocomms_msgs::PwrCmdRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ds_ocomms_msgs::PwrCmdRequest_<ContainerAllocator> const> ConstPtr;

}; // struct PwrCmdRequest_

typedef ::ds_ocomms_msgs::PwrCmdRequest_<std::allocator<void> > PwrCmdRequest;

typedef boost::shared_ptr< ::ds_ocomms_msgs::PwrCmdRequest > PwrCmdRequestPtr;
typedef boost::shared_ptr< ::ds_ocomms_msgs::PwrCmdRequest const> PwrCmdRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ds_ocomms_msgs::PwrCmdRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ds_ocomms_msgs::PwrCmdRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::ds_ocomms_msgs::PwrCmdRequest_<ContainerAllocator1> & lhs, const ::ds_ocomms_msgs::PwrCmdRequest_<ContainerAllocator2> & rhs)
{
  return lhs.PWR_DESTINATION == rhs.PWR_DESTINATION &&
    lhs.PWR_STATE_DESIRED == rhs.PWR_STATE_DESIRED;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::ds_ocomms_msgs::PwrCmdRequest_<ContainerAllocator1> & lhs, const ::ds_ocomms_msgs::PwrCmdRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace ds_ocomms_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::ds_ocomms_msgs::PwrCmdRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ds_ocomms_msgs::PwrCmdRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ds_ocomms_msgs::PwrCmdRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ds_ocomms_msgs::PwrCmdRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ds_ocomms_msgs::PwrCmdRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ds_ocomms_msgs::PwrCmdRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ds_ocomms_msgs::PwrCmdRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "8aea0104571340085844c222e1e9c573";
  }

  static const char* value(const ::ds_ocomms_msgs::PwrCmdRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x8aea010457134008ULL;
  static const uint64_t static_value2 = 0x5844c222e1e9c573ULL;
};

template<class ContainerAllocator>
struct DataType< ::ds_ocomms_msgs::PwrCmdRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ds_ocomms_msgs/PwrCmdRequest";
  }

  static const char* value(const ::ds_ocomms_msgs::PwrCmdRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ds_ocomms_msgs::PwrCmdRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string PWR_DESTINATION\n"
"string PWR_STATE_DESIRED\n"
;
  }

  static const char* value(const ::ds_ocomms_msgs::PwrCmdRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ds_ocomms_msgs::PwrCmdRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.PWR_DESTINATION);
      stream.next(m.PWR_STATE_DESIRED);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct PwrCmdRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ds_ocomms_msgs::PwrCmdRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ds_ocomms_msgs::PwrCmdRequest_<ContainerAllocator>& v)
  {
    s << indent << "PWR_DESTINATION: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.PWR_DESTINATION);
    s << indent << "PWR_STATE_DESIRED: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.PWR_STATE_DESIRED);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DS_OCOMMS_MSGS_MESSAGE_PWRCMDREQUEST_H
