// Generated by gencpp from file prx_utilities/planning_query_msg.msg
// DO NOT EDIT!


#ifndef PRX_UTILITIES_MESSAGE_PLANNING_QUERY_MSG_H
#define PRX_UTILITIES_MESSAGE_PLANNING_QUERY_MSG_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace prx_utilities
{
template <class ContainerAllocator>
struct planning_query_msg_
{
  typedef planning_query_msg_<ContainerAllocator> Type;

  planning_query_msg_()
    : planned_system()
    , goal_state()
    , start_state()
    , smooth(false)
    , time_limit(0.0)
    , time_stamp(0)  {
    }
  planning_query_msg_(const ContainerAllocator& _alloc)
    : planned_system(_alloc)
    , goal_state(_alloc)
    , start_state(_alloc)
    , smooth(false)
    , time_limit(0.0)
    , time_stamp(0)  {
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _planned_system_type;
  _planned_system_type planned_system;

   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _goal_state_type;
  _goal_state_type goal_state;

   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _start_state_type;
  _start_state_type start_state;

   typedef uint8_t _smooth_type;
  _smooth_type smooth;

   typedef double _time_limit_type;
  _time_limit_type time_limit;

   typedef int32_t _time_stamp_type;
  _time_stamp_type time_stamp;




  typedef boost::shared_ptr< ::prx_utilities::planning_query_msg_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::prx_utilities::planning_query_msg_<ContainerAllocator> const> ConstPtr;

}; // struct planning_query_msg_

typedef ::prx_utilities::planning_query_msg_<std::allocator<void> > planning_query_msg;

typedef boost::shared_ptr< ::prx_utilities::planning_query_msg > planning_query_msgPtr;
typedef boost::shared_ptr< ::prx_utilities::planning_query_msg const> planning_query_msgConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::prx_utilities::planning_query_msg_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::prx_utilities::planning_query_msg_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace prx_utilities

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg'], 'prx_utilities': ['/home/parallels/Desktop/ROS_workspace/src/prx_utilities/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::prx_utilities::planning_query_msg_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::prx_utilities::planning_query_msg_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::prx_utilities::planning_query_msg_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::prx_utilities::planning_query_msg_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::prx_utilities::planning_query_msg_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::prx_utilities::planning_query_msg_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::prx_utilities::planning_query_msg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "8cd60d47a5924bccad7fb9133aa80db4";
  }

  static const char* value(const ::prx_utilities::planning_query_msg_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x8cd60d47a5924bccULL;
  static const uint64_t static_value2 = 0xad7fb9133aa80db4ULL;
};

template<class ContainerAllocator>
struct DataType< ::prx_utilities::planning_query_msg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "prx_utilities/planning_query_msg";
  }

  static const char* value(const ::prx_utilities::planning_query_msg_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::prx_utilities::planning_query_msg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string planned_system\n\
float64[] goal_state\n\
float64[] start_state\n\
bool smooth\n\
float64 time_limit\n\
int32 time_stamp\n\
";
  }

  static const char* value(const ::prx_utilities::planning_query_msg_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::prx_utilities::planning_query_msg_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.planned_system);
      stream.next(m.goal_state);
      stream.next(m.start_state);
      stream.next(m.smooth);
      stream.next(m.time_limit);
      stream.next(m.time_stamp);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct planning_query_msg_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::prx_utilities::planning_query_msg_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::prx_utilities::planning_query_msg_<ContainerAllocator>& v)
  {
    s << indent << "planned_system: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.planned_system);
    s << indent << "goal_state[]" << std::endl;
    for (size_t i = 0; i < v.goal_state.size(); ++i)
    {
      s << indent << "  goal_state[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.goal_state[i]);
    }
    s << indent << "start_state[]" << std::endl;
    for (size_t i = 0; i < v.start_state.size(); ++i)
    {
      s << indent << "  start_state[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.start_state[i]);
    }
    s << indent << "smooth: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.smooth);
    s << indent << "time_limit: ";
    Printer<double>::stream(s, indent + "  ", v.time_limit);
    s << indent << "time_stamp: ";
    Printer<int32_t>::stream(s, indent + "  ", v.time_stamp);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PRX_UTILITIES_MESSAGE_PLANNING_QUERY_MSG_H
