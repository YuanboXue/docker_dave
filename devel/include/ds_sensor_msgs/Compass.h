// Generated by gencpp from file ds_sensor_msgs/Compass.msg
// DO NOT EDIT!


#ifndef DS_SENSOR_MSGS_MESSAGE_COMPASS_H
#define DS_SENSOR_MSGS_MESSAGE_COMPASS_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <ds_core_msgs/DsHeader.h>

namespace ds_sensor_msgs
{
template <class ContainerAllocator>
struct Compass_
{
  typedef Compass_<ContainerAllocator> Type;

  Compass_()
    : header()
    , ds_header()
    , heading(0.0)
    , heading_covar(0.0)
    , is_true_heading(false)  {
    }
  Compass_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , ds_header(_alloc)
    , heading(0.0)
    , heading_covar(0.0)
    , is_true_heading(false)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef  ::ds_core_msgs::DsHeader_<ContainerAllocator>  _ds_header_type;
  _ds_header_type ds_header;

   typedef double _heading_type;
  _heading_type heading;

   typedef double _heading_covar_type;
  _heading_covar_type heading_covar;

   typedef uint8_t _is_true_heading_type;
  _is_true_heading_type is_true_heading;



// reducing the odds to have name collisions with Windows.h 
#if defined(_WIN32) && defined(COMPASS_NO_DATA)
  #undef COMPASS_NO_DATA
#endif


  static const double COMPASS_NO_DATA;

  typedef boost::shared_ptr< ::ds_sensor_msgs::Compass_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ds_sensor_msgs::Compass_<ContainerAllocator> const> ConstPtr;

}; // struct Compass_

typedef ::ds_sensor_msgs::Compass_<std::allocator<void> > Compass;

typedef boost::shared_ptr< ::ds_sensor_msgs::Compass > CompassPtr;
typedef boost::shared_ptr< ::ds_sensor_msgs::Compass const> CompassConstPtr;

// constants requiring out of line definition

   
   template<typename ContainerAllocator> const double
      Compass_<ContainerAllocator>::COMPASS_NO_DATA =
        
          -9999.0
        
        ;
   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ds_sensor_msgs::Compass_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ds_sensor_msgs::Compass_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::ds_sensor_msgs::Compass_<ContainerAllocator1> & lhs, const ::ds_sensor_msgs::Compass_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.ds_header == rhs.ds_header &&
    lhs.heading == rhs.heading &&
    lhs.heading_covar == rhs.heading_covar &&
    lhs.is_true_heading == rhs.is_true_heading;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::ds_sensor_msgs::Compass_<ContainerAllocator1> & lhs, const ::ds_sensor_msgs::Compass_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace ds_sensor_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::ds_sensor_msgs::Compass_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ds_sensor_msgs::Compass_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ds_sensor_msgs::Compass_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ds_sensor_msgs::Compass_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ds_sensor_msgs::Compass_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ds_sensor_msgs::Compass_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ds_sensor_msgs::Compass_<ContainerAllocator> >
{
  static const char* value()
  {
    return "a8cc0dd952a40cdf381e533ef07ecc00";
  }

  static const char* value(const ::ds_sensor_msgs::Compass_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xa8cc0dd952a40cdfULL;
  static const uint64_t static_value2 = 0x381e533ef07ecc00ULL;
};

template<class ContainerAllocator>
struct DataType< ::ds_sensor_msgs::Compass_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ds_sensor_msgs/Compass";
  }

  static const char* value(const ::ds_sensor_msgs::Compass_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ds_sensor_msgs::Compass_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Message for a Compass\n"
"\n"
"float64 COMPASS_NO_DATA = -9999.0\n"
"\n"
"# The standard 2-part DsHeader block\n"
"# This allows both a standard ROS header and DS-specific header blocks\n"
"# See HEADERS.md in ds_core_msgs for details\n"
"std_msgs/Header header\n"
"ds_core_msgs/DsHeader ds_header\n"
"\n"
"# In degrees.\n"
"float64 heading            # + turns to east\n"
"float64 heading_covar\n"
"\n"
"bool is_true_heading       # true: true heading, false: magnetic heading\n"
"\n"
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
;
  }

  static const char* value(const ::ds_sensor_msgs::Compass_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ds_sensor_msgs::Compass_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.ds_header);
      stream.next(m.heading);
      stream.next(m.heading_covar);
      stream.next(m.is_true_heading);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Compass_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ds_sensor_msgs::Compass_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ds_sensor_msgs::Compass_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "ds_header: ";
    s << std::endl;
    Printer< ::ds_core_msgs::DsHeader_<ContainerAllocator> >::stream(s, indent + "  ", v.ds_header);
    s << indent << "heading: ";
    Printer<double>::stream(s, indent + "  ", v.heading);
    s << indent << "heading_covar: ";
    Printer<double>::stream(s, indent + "  ", v.heading_covar);
    s << indent << "is_true_heading: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.is_true_heading);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DS_SENSOR_MSGS_MESSAGE_COMPASS_H
