// Generated by gencpp from file prx_utilities/listen_srvRequest.msg
// DO NOT EDIT!


#ifndef PRX_UTILITIES_MESSAGE_LISTEN_SRVREQUEST_H
#define PRX_UTILITIES_MESSAGE_LISTEN_SRVREQUEST_H


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
struct listen_srvRequest_
{
  typedef listen_srvRequest_<ContainerAllocator> Type;

  listen_srvRequest_()
    : topic()  {
    }
  listen_srvRequest_(const ContainerAllocator& _alloc)
    : topic(_alloc)  {
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _topic_type;
  _topic_type topic;




  typedef boost::shared_ptr< ::prx_utilities::listen_srvRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::prx_utilities::listen_srvRequest_<ContainerAllocator> const> ConstPtr;

}; // struct listen_srvRequest_

typedef ::prx_utilities::listen_srvRequest_<std::allocator<void> > listen_srvRequest;

typedef boost::shared_ptr< ::prx_utilities::listen_srvRequest > listen_srvRequestPtr;
typedef boost::shared_ptr< ::prx_utilities::listen_srvRequest const> listen_srvRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::prx_utilities::listen_srvRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::prx_utilities::listen_srvRequest_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::prx_utilities::listen_srvRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::prx_utilities::listen_srvRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::prx_utilities::listen_srvRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::prx_utilities::listen_srvRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::prx_utilities::listen_srvRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::prx_utilities::listen_srvRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::prx_utilities::listen_srvRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d8f94bae31b356b24d0427f80426d0c3";
  }

  static const char* value(const ::prx_utilities::listen_srvRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd8f94bae31b356b2ULL;
  static const uint64_t static_value2 = 0x4d0427f80426d0c3ULL;
};

template<class ContainerAllocator>
struct DataType< ::prx_utilities::listen_srvRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "prx_utilities/listen_srvRequest";
  }

  static const char* value(const ::prx_utilities::listen_srvRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::prx_utilities::listen_srvRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
string topic\n\
";
  }

  static const char* value(const ::prx_utilities::listen_srvRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::prx_utilities::listen_srvRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.topic);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct listen_srvRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::prx_utilities::listen_srvRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::prx_utilities::listen_srvRequest_<ContainerAllocator>& v)
  {
    s << indent << "topic: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.topic);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PRX_UTILITIES_MESSAGE_LISTEN_SRVREQUEST_H
