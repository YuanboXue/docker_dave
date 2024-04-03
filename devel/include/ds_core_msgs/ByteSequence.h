// Generated by gencpp from file ds_core_msgs/ByteSequence.msg
// DO NOT EDIT!


#ifndef DS_CORE_MSGS_MESSAGE_BYTESEQUENCE_H
#define DS_CORE_MSGS_MESSAGE_BYTESEQUENCE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace ds_core_msgs
{
template <class ContainerAllocator>
struct ByteSequence_
{
  typedef ByteSequence_<ContainerAllocator> Type;

  ByteSequence_()
    : header()
    , bytes()  {
    }
  ByteSequence_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , bytes(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> _bytes_type;
  _bytes_type bytes;





  typedef boost::shared_ptr< ::ds_core_msgs::ByteSequence_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ds_core_msgs::ByteSequence_<ContainerAllocator> const> ConstPtr;

}; // struct ByteSequence_

typedef ::ds_core_msgs::ByteSequence_<std::allocator<void> > ByteSequence;

typedef boost::shared_ptr< ::ds_core_msgs::ByteSequence > ByteSequencePtr;
typedef boost::shared_ptr< ::ds_core_msgs::ByteSequence const> ByteSequenceConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ds_core_msgs::ByteSequence_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ds_core_msgs::ByteSequence_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::ds_core_msgs::ByteSequence_<ContainerAllocator1> & lhs, const ::ds_core_msgs::ByteSequence_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.bytes == rhs.bytes;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::ds_core_msgs::ByteSequence_<ContainerAllocator1> & lhs, const ::ds_core_msgs::ByteSequence_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace ds_core_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::ds_core_msgs::ByteSequence_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ds_core_msgs::ByteSequence_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ds_core_msgs::ByteSequence_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ds_core_msgs::ByteSequence_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ds_core_msgs::ByteSequence_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ds_core_msgs::ByteSequence_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ds_core_msgs::ByteSequence_<ContainerAllocator> >
{
  static const char* value()
  {
    return "8e5d05bd85bcc46e08bbdeae95e1da9a";
  }

  static const char* value(const ::ds_core_msgs::ByteSequence_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x8e5d05bd85bcc46eULL;
  static const uint64_t static_value2 = 0x08bbdeae95e1da9aULL;
};

template<class ContainerAllocator>
struct DataType< ::ds_core_msgs::ByteSequence_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ds_core_msgs/ByteSequence";
  }

  static const char* value(const ::ds_core_msgs::ByteSequence_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ds_core_msgs::ByteSequence_<ContainerAllocator> >
{
  static const char* value()
  {
    return "#\n"
"# A sequence of binary data\n"
"#\n"
"\n"
"std_msgs/Header header\n"
"\n"
"# Bytes\n"
"uint8[] bytes\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
;
  }

  static const char* value(const ::ds_core_msgs::ByteSequence_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ds_core_msgs::ByteSequence_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.bytes);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ByteSequence_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ds_core_msgs::ByteSequence_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ds_core_msgs::ByteSequence_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "bytes[]" << std::endl;
    for (size_t i = 0; i < v.bytes.size(); ++i)
    {
      s << indent << "  bytes[" << i << "]: ";
      Printer<uint8_t>::stream(s, indent + "  ", v.bytes[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // DS_CORE_MSGS_MESSAGE_BYTESEQUENCE_H
