// Generated by gencpp from file ds_core_msgs/CountdownMonitor.msg
// DO NOT EDIT!


#ifndef DS_CORE_MSGS_MESSAGE_COUNTDOWNMONITOR_H
#define DS_CORE_MSGS_MESSAGE_COUNTDOWNMONITOR_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <ds_core_msgs/Countdown.h>

namespace ds_core_msgs
{
template <class ContainerAllocator>
struct CountdownMonitor_
{
  typedef CountdownMonitor_<ContainerAllocator> Type;

  CountdownMonitor_()
    : nodes()  {
    }
  CountdownMonitor_(const ContainerAllocator& _alloc)
    : nodes(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector< ::ds_core_msgs::Countdown_<ContainerAllocator> , typename std::allocator_traits<ContainerAllocator>::template rebind_alloc< ::ds_core_msgs::Countdown_<ContainerAllocator> >> _nodes_type;
  _nodes_type nodes;





  typedef boost::shared_ptr< ::ds_core_msgs::CountdownMonitor_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ds_core_msgs::CountdownMonitor_<ContainerAllocator> const> ConstPtr;

}; // struct CountdownMonitor_

typedef ::ds_core_msgs::CountdownMonitor_<std::allocator<void> > CountdownMonitor;

typedef boost::shared_ptr< ::ds_core_msgs::CountdownMonitor > CountdownMonitorPtr;
typedef boost::shared_ptr< ::ds_core_msgs::CountdownMonitor const> CountdownMonitorConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ds_core_msgs::CountdownMonitor_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ds_core_msgs::CountdownMonitor_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::ds_core_msgs::CountdownMonitor_<ContainerAllocator1> & lhs, const ::ds_core_msgs::CountdownMonitor_<ContainerAllocator2> & rhs)
{
  return lhs.nodes == rhs.nodes;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::ds_core_msgs::CountdownMonitor_<ContainerAllocator1> & lhs, const ::ds_core_msgs::CountdownMonitor_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace ds_core_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::ds_core_msgs::CountdownMonitor_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ds_core_msgs::CountdownMonitor_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ds_core_msgs::CountdownMonitor_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ds_core_msgs::CountdownMonitor_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ds_core_msgs::CountdownMonitor_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ds_core_msgs::CountdownMonitor_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ds_core_msgs::CountdownMonitor_<ContainerAllocator> >
{
  static const char* value()
  {
    return "f2eed8b217d616daa5a0384629a6b974";
  }

  static const char* value(const ::ds_core_msgs::CountdownMonitor_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xf2eed8b217d616daULL;
  static const uint64_t static_value2 = 0xa5a0384629a6b974ULL;
};

template<class ContainerAllocator>
struct DataType< ::ds_core_msgs::CountdownMonitor_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ds_core_msgs/CountdownMonitor";
  }

  static const char* value(const ::ds_core_msgs::CountdownMonitor_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ds_core_msgs::CountdownMonitor_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# A type that collects ttl countdowns for an array of nodes\n"
"\n"
"Countdown[] nodes\n"
"================================================================================\n"
"MSG: ds_core_msgs/Countdown\n"
"# A type with a ttl countdown for a given node\n"
"\n"
"string nodename\n"
"int32 countdown\n"
;
  }

  static const char* value(const ::ds_core_msgs::CountdownMonitor_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ds_core_msgs::CountdownMonitor_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.nodes);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct CountdownMonitor_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ds_core_msgs::CountdownMonitor_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ds_core_msgs::CountdownMonitor_<ContainerAllocator>& v)
  {
    s << indent << "nodes[]" << std::endl;
    for (size_t i = 0; i < v.nodes.size(); ++i)
    {
      s << indent << "  nodes[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::ds_core_msgs::Countdown_<ContainerAllocator> >::stream(s, indent + "    ", v.nodes[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // DS_CORE_MSGS_MESSAGE_COUNTDOWNMONITOR_H
