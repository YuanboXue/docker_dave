// Generated by gencpp from file ds_acomms_msgs/AcksExpected.msg
// DO NOT EDIT!


#ifndef DS_ACOMMS_MSGS_MESSAGE_ACKSEXPECTED_H
#define DS_ACOMMS_MSGS_MESSAGE_ACKSEXPECTED_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace ds_acomms_msgs
{
template <class ContainerAllocator>
struct AcksExpected_
{
  typedef AcksExpected_<ContainerAllocator> Type;

  AcksExpected_()
    {
    }
  AcksExpected_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }







  typedef boost::shared_ptr< ::ds_acomms_msgs::AcksExpected_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ds_acomms_msgs::AcksExpected_<ContainerAllocator> const> ConstPtr;

}; // struct AcksExpected_

typedef ::ds_acomms_msgs::AcksExpected_<std::allocator<void> > AcksExpected;

typedef boost::shared_ptr< ::ds_acomms_msgs::AcksExpected > AcksExpectedPtr;
typedef boost::shared_ptr< ::ds_acomms_msgs::AcksExpected const> AcksExpectedConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ds_acomms_msgs::AcksExpected_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ds_acomms_msgs::AcksExpected_<ContainerAllocator> >::stream(s, "", v);
return s;
}


} // namespace ds_acomms_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::ds_acomms_msgs::AcksExpected_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ds_acomms_msgs::AcksExpected_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ds_acomms_msgs::AcksExpected_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ds_acomms_msgs::AcksExpected_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ds_acomms_msgs::AcksExpected_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ds_acomms_msgs::AcksExpected_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ds_acomms_msgs::AcksExpected_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const ::ds_acomms_msgs::AcksExpected_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::ds_acomms_msgs::AcksExpected_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ds_acomms_msgs/AcksExpected";
  }

  static const char* value(const ::ds_acomms_msgs::AcksExpected_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ds_acomms_msgs::AcksExpected_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Progressive Imagery requires acknowlegement for each\n"
"# packet sent, or it tries to resend. This message tells\n"
"# the sender that it *should* have received acks and causes\n"
"# it to reset the queue.\n"
"\n"
"# TODO: In the name of generality, I've split the\n"
"# \"reset queue\" field from the \"please provide data\" service,\n"
"# but I don't know if any other nodes will care about this,\n"
"# or what other information should be attached.\n"
"# (Standard header? Time since previous transmit slot?)\n"
"\n"
"# TODO: proper handling of this would require the sender/subsea\n"
"# QM to know the TDMA schedule for the topside QM in order to\n"
"# infer that it _should_ have heard something. Right now,\n"
"# the assumption is that the gap in between two subsea slots\n"
"# always corresponds to a topside slot.\n"
;
  }

  static const char* value(const ::ds_acomms_msgs::AcksExpected_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ds_acomms_msgs::AcksExpected_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct AcksExpected_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ds_acomms_msgs::AcksExpected_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::ds_acomms_msgs::AcksExpected_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // DS_ACOMMS_MSGS_MESSAGE_ACKSEXPECTED_H
