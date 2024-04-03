// Generated by gencpp from file ds_nmea_msgs/PixseConfig1Int.msg
// DO NOT EDIT!


#ifndef DS_NMEA_MSGS_MESSAGE_PIXSECONFIG1INT_H
#define DS_NMEA_MSGS_MESSAGE_PIXSECONFIG1INT_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace ds_nmea_msgs
{
template <class ContainerAllocator>
struct PixseConfig1Int_
{
  typedef PixseConfig1Int_<ContainerAllocator> Type;

  PixseConfig1Int_()
    : s()
    , x(0)
    , checksum(0)  {
    }
  PixseConfig1Int_(const ContainerAllocator& _alloc)
    : s(_alloc)
    , x(0)
    , checksum(0)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _s_type;
  _s_type s;

   typedef uint32_t _x_type;
  _x_type x;

   typedef uint8_t _checksum_type;
  _checksum_type checksum;





  typedef boost::shared_ptr< ::ds_nmea_msgs::PixseConfig1Int_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ds_nmea_msgs::PixseConfig1Int_<ContainerAllocator> const> ConstPtr;

}; // struct PixseConfig1Int_

typedef ::ds_nmea_msgs::PixseConfig1Int_<std::allocator<void> > PixseConfig1Int;

typedef boost::shared_ptr< ::ds_nmea_msgs::PixseConfig1Int > PixseConfig1IntPtr;
typedef boost::shared_ptr< ::ds_nmea_msgs::PixseConfig1Int const> PixseConfig1IntConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ds_nmea_msgs::PixseConfig1Int_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ds_nmea_msgs::PixseConfig1Int_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::ds_nmea_msgs::PixseConfig1Int_<ContainerAllocator1> & lhs, const ::ds_nmea_msgs::PixseConfig1Int_<ContainerAllocator2> & rhs)
{
  return lhs.s == rhs.s &&
    lhs.x == rhs.x &&
    lhs.checksum == rhs.checksum;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::ds_nmea_msgs::PixseConfig1Int_<ContainerAllocator1> & lhs, const ::ds_nmea_msgs::PixseConfig1Int_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace ds_nmea_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::ds_nmea_msgs::PixseConfig1Int_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ds_nmea_msgs::PixseConfig1Int_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ds_nmea_msgs::PixseConfig1Int_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ds_nmea_msgs::PixseConfig1Int_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ds_nmea_msgs::PixseConfig1Int_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ds_nmea_msgs::PixseConfig1Int_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ds_nmea_msgs::PixseConfig1Int_<ContainerAllocator> >
{
  static const char* value()
  {
    return "77a7689596687f6717158ef3d55f3f7f";
  }

  static const char* value(const ::ds_nmea_msgs::PixseConfig1Int_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x77a7689596687f67ULL;
  static const uint64_t static_value2 = 0x17158ef3d55f3f7fULL;
};

template<class ContainerAllocator>
struct DataType< ::ds_nmea_msgs::PixseConfig1Int_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ds_nmea_msgs/PixseConfig1Int";
  }

  static const char* value(const ::ds_nmea_msgs::PixseConfig1Int_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ds_nmea_msgs::PixseConfig1Int_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# $PIXSE,CONFIG,s,x*hh<CR><LF>\n"
"\n"
"string s\n"
"uint32 x\n"
"uint8 checksum\n"
;
  }

  static const char* value(const ::ds_nmea_msgs::PixseConfig1Int_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ds_nmea_msgs::PixseConfig1Int_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.s);
      stream.next(m.x);
      stream.next(m.checksum);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct PixseConfig1Int_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ds_nmea_msgs::PixseConfig1Int_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ds_nmea_msgs::PixseConfig1Int_<ContainerAllocator>& v)
  {
    s << indent << "s: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.s);
    s << indent << "x: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.x);
    s << indent << "checksum: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.checksum);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DS_NMEA_MSGS_MESSAGE_PIXSECONFIG1INT_H
