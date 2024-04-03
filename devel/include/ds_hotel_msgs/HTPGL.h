// Generated by gencpp from file ds_hotel_msgs/HTPGL.msg
// DO NOT EDIT!


#ifndef DS_HOTEL_MSGS_MESSAGE_HTPGL_H
#define DS_HOTEL_MSGS_MESSAGE_HTPGL_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <ds_core_msgs/DsHeader.h>
#include <ds_hotel_msgs/HTP.h>

namespace ds_hotel_msgs
{
template <class ContainerAllocator>
struct HTPGL_
{
  typedef HTPGL_<ContainerAllocator> Type;

  HTPGL_()
    : header()
    , ds_header()
    , htp()
    , ground_fault(0.0)
    , probe_fail(false)
    , leak(false)  {
    }
  HTPGL_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , ds_header(_alloc)
    , htp(_alloc)
    , ground_fault(0.0)
    , probe_fail(false)
    , leak(false)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef  ::ds_core_msgs::DsHeader_<ContainerAllocator>  _ds_header_type;
  _ds_header_type ds_header;

   typedef  ::ds_hotel_msgs::HTP_<ContainerAllocator>  _htp_type;
  _htp_type htp;

   typedef float _ground_fault_type;
  _ground_fault_type ground_fault;

   typedef uint8_t _probe_fail_type;
  _probe_fail_type probe_fail;

   typedef uint8_t _leak_type;
  _leak_type leak;





  typedef boost::shared_ptr< ::ds_hotel_msgs::HTPGL_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ds_hotel_msgs::HTPGL_<ContainerAllocator> const> ConstPtr;

}; // struct HTPGL_

typedef ::ds_hotel_msgs::HTPGL_<std::allocator<void> > HTPGL;

typedef boost::shared_ptr< ::ds_hotel_msgs::HTPGL > HTPGLPtr;
typedef boost::shared_ptr< ::ds_hotel_msgs::HTPGL const> HTPGLConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ds_hotel_msgs::HTPGL_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ds_hotel_msgs::HTPGL_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::ds_hotel_msgs::HTPGL_<ContainerAllocator1> & lhs, const ::ds_hotel_msgs::HTPGL_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.ds_header == rhs.ds_header &&
    lhs.htp == rhs.htp &&
    lhs.ground_fault == rhs.ground_fault &&
    lhs.probe_fail == rhs.probe_fail &&
    lhs.leak == rhs.leak;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::ds_hotel_msgs::HTPGL_<ContainerAllocator1> & lhs, const ::ds_hotel_msgs::HTPGL_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace ds_hotel_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::ds_hotel_msgs::HTPGL_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ds_hotel_msgs::HTPGL_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ds_hotel_msgs::HTPGL_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ds_hotel_msgs::HTPGL_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ds_hotel_msgs::HTPGL_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ds_hotel_msgs::HTPGL_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ds_hotel_msgs::HTPGL_<ContainerAllocator> >
{
  static const char* value()
  {
    return "412d7ef9501f6cb2945a65946fe2807b";
  }

  static const char* value(const ::ds_hotel_msgs::HTPGL_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x412d7ef9501f6cb2ULL;
  static const uint64_t static_value2 = 0x945a65946fe2807bULL;
};

template<class ContainerAllocator>
struct DataType< ::ds_hotel_msgs::HTPGL_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ds_hotel_msgs/HTPGL";
  }

  static const char* value(const ::ds_hotel_msgs::HTPGL_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ds_hotel_msgs::HTPGL_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# The standard 2-part DsHeader block\n"
"# This allows both a standard ROS header and DS-specific header blocks\n"
"# See HEADERS.md in ds_core_msgs for details\n"
"std_msgs/Header header\n"
"ds_core_msgs/DsHeader ds_header\n"
"\n"
"HTP htp\n"
"\n"
"# Ground fault, from 0 to 100%.  Almost-certainly useless for Sentry.\n"
"# If wired properly, the manual has this little table:\n"
"# Ground Fault Bus : reading\n"
"# None:   0%\n"
"# GND :  27%\n"
"#  5V :  39%\n"
"# 12V :  55%\n"
"# 32V : 100%\n"
"float32 ground_fault\n"
"\n"
"bool probe_fail\n"
"bool leak\n"
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
"\n"
"================================================================================\n"
"MSG: ds_core_msgs/DsHeader\n"
"# This is half our standard header for ds_msgs; see\n"
"# HEADERS.md for details\n"
"\n"
"# This header should ALWAYS be paired with a std_msgs/Header\n"
"# and should ALWAYS reference HEADERS.md.  If you're looking at this\n"
"# file to add headers to a type, you probably want to copy/paste\n"
"# the following block:\n"
"#\n"
"#     # The standard 2-part DsHeader block\n"
"#     # This allows both a standard ROS header and DS-specific header blocks\n"
"#     # See HEADERS.md in ds_core_msgs for details\n"
"#     std_msgs/Header header\n"
"#     ds_core_msgs/DsHeader ds_header\n"
"#\n"
"\n"
"# Time data was received or sent out (i/o time)\n"
"time io_time\n"
"\n"
"# Sensor source UUID\n"
"uint8[16] source_uuid\n"
"\n"
"\n"
"================================================================================\n"
"MSG: ds_hotel_msgs/HTP\n"
"# The standard 2-part DsHeader block\n"
"# This allows both a standard ROS header and DS-specific header blocks\n"
"# See HEADERS.md in ds_core_msgs for details\n"
"std_msgs/Header header\n"
"ds_core_msgs/DsHeader ds_header\n"
"\n"
"float64 humidity\n"
"float64 temperature\n"
"float64 pressure\n"
;
  }

  static const char* value(const ::ds_hotel_msgs::HTPGL_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ds_hotel_msgs::HTPGL_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.ds_header);
      stream.next(m.htp);
      stream.next(m.ground_fault);
      stream.next(m.probe_fail);
      stream.next(m.leak);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct HTPGL_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ds_hotel_msgs::HTPGL_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ds_hotel_msgs::HTPGL_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "ds_header: ";
    s << std::endl;
    Printer< ::ds_core_msgs::DsHeader_<ContainerAllocator> >::stream(s, indent + "  ", v.ds_header);
    s << indent << "htp: ";
    s << std::endl;
    Printer< ::ds_hotel_msgs::HTP_<ContainerAllocator> >::stream(s, indent + "  ", v.htp);
    s << indent << "ground_fault: ";
    Printer<float>::stream(s, indent + "  ", v.ground_fault);
    s << indent << "probe_fail: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.probe_fail);
    s << indent << "leak: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.leak);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DS_HOTEL_MSGS_MESSAGE_HTPGL_H
