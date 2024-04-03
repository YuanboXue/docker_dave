// Generated by gencpp from file ds_hotel_msgs/PowerSupplyCommandRequest.msg
// DO NOT EDIT!


#ifndef DS_HOTEL_MSGS_MESSAGE_POWERSUPPLYCOMMANDREQUEST_H
#define DS_HOTEL_MSGS_MESSAGE_POWERSUPPLYCOMMANDREQUEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace ds_hotel_msgs
{
template <class ContainerAllocator>
struct PowerSupplyCommandRequest_
{
  typedef PowerSupplyCommandRequest_<ContainerAllocator> Type;

  PowerSupplyCommandRequest_()
    : prog_volts(0.0)
    , prog_amps(0.0)
    , output_enable(false)
    , frontpanel_locked(false)  {
    }
  PowerSupplyCommandRequest_(const ContainerAllocator& _alloc)
    : prog_volts(0.0)
    , prog_amps(0.0)
    , output_enable(false)
    , frontpanel_locked(false)  {
  (void)_alloc;
    }



   typedef float _prog_volts_type;
  _prog_volts_type prog_volts;

   typedef float _prog_amps_type;
  _prog_amps_type prog_amps;

   typedef uint8_t _output_enable_type;
  _output_enable_type output_enable;

   typedef uint8_t _frontpanel_locked_type;
  _frontpanel_locked_type frontpanel_locked;



// reducing the odds to have name collisions with Windows.h 
#if defined(_WIN32) && defined(POWERSUPPLY_NODATA)
  #undef POWERSUPPLY_NODATA
#endif


  static const float POWERSUPPLY_NODATA;

  typedef boost::shared_ptr< ::ds_hotel_msgs::PowerSupplyCommandRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ds_hotel_msgs::PowerSupplyCommandRequest_<ContainerAllocator> const> ConstPtr;

}; // struct PowerSupplyCommandRequest_

typedef ::ds_hotel_msgs::PowerSupplyCommandRequest_<std::allocator<void> > PowerSupplyCommandRequest;

typedef boost::shared_ptr< ::ds_hotel_msgs::PowerSupplyCommandRequest > PowerSupplyCommandRequestPtr;
typedef boost::shared_ptr< ::ds_hotel_msgs::PowerSupplyCommandRequest const> PowerSupplyCommandRequestConstPtr;

// constants requiring out of line definition

   
   template<typename ContainerAllocator> const float
      PowerSupplyCommandRequest_<ContainerAllocator>::POWERSUPPLY_NODATA =
        
          -9999.99
        
        ;
   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ds_hotel_msgs::PowerSupplyCommandRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ds_hotel_msgs::PowerSupplyCommandRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::ds_hotel_msgs::PowerSupplyCommandRequest_<ContainerAllocator1> & lhs, const ::ds_hotel_msgs::PowerSupplyCommandRequest_<ContainerAllocator2> & rhs)
{
  return lhs.prog_volts == rhs.prog_volts &&
    lhs.prog_amps == rhs.prog_amps &&
    lhs.output_enable == rhs.output_enable &&
    lhs.frontpanel_locked == rhs.frontpanel_locked;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::ds_hotel_msgs::PowerSupplyCommandRequest_<ContainerAllocator1> & lhs, const ::ds_hotel_msgs::PowerSupplyCommandRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace ds_hotel_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::ds_hotel_msgs::PowerSupplyCommandRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ds_hotel_msgs::PowerSupplyCommandRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ds_hotel_msgs::PowerSupplyCommandRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ds_hotel_msgs::PowerSupplyCommandRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ds_hotel_msgs::PowerSupplyCommandRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ds_hotel_msgs::PowerSupplyCommandRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ds_hotel_msgs::PowerSupplyCommandRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "050e7f50f3a8223eeeed85211b978aa6";
  }

  static const char* value(const ::ds_hotel_msgs::PowerSupplyCommandRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x050e7f50f3a8223eULL;
  static const uint64_t static_value2 = 0xeeed85211b978aa6ULL;
};

template<class ContainerAllocator>
struct DataType< ::ds_hotel_msgs::PowerSupplyCommandRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ds_hotel_msgs/PowerSupplyCommandRequest";
  }

  static const char* value(const ::ds_hotel_msgs::PowerSupplyCommandRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ds_hotel_msgs::PowerSupplyCommandRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float32 POWERSUPPLY_NODATA = -9999.99\n"
"\n"
"\n"
"# Set the programmed voltage, in volts\n"
"float32 prog_volts\n"
"\n"
"# Set the programmed current limit, in amps\n"
"float32 prog_amps\n"
"\n"
"# Set the output enable flag\n"
"bool output_enable\n"
"\n"
"# (possibly) lock out the front panel\n"
"bool frontpanel_locked\n"
"\n"
;
  }

  static const char* value(const ::ds_hotel_msgs::PowerSupplyCommandRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ds_hotel_msgs::PowerSupplyCommandRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.prog_volts);
      stream.next(m.prog_amps);
      stream.next(m.output_enable);
      stream.next(m.frontpanel_locked);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct PowerSupplyCommandRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ds_hotel_msgs::PowerSupplyCommandRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ds_hotel_msgs::PowerSupplyCommandRequest_<ContainerAllocator>& v)
  {
    s << indent << "prog_volts: ";
    Printer<float>::stream(s, indent + "  ", v.prog_volts);
    s << indent << "prog_amps: ";
    Printer<float>::stream(s, indent + "  ", v.prog_amps);
    s << indent << "output_enable: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.output_enable);
    s << indent << "frontpanel_locked: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.frontpanel_locked);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DS_HOTEL_MSGS_MESSAGE_POWERSUPPLYCOMMANDREQUEST_H
