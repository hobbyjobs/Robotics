// Generated by gencpp from file prx_utilities/create_HUD_srvResponse.msg
// DO NOT EDIT!


#ifndef PRX_UTILITIES_MESSAGE_CREATE_HUD_SRVRESPONSE_H
#define PRX_UTILITIES_MESSAGE_CREATE_HUD_SRVRESPONSE_H


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
struct create_HUD_srvResponse_
{
  typedef create_HUD_srvResponse_<ContainerAllocator> Type;

  create_HUD_srvResponse_()
    {
    }
  create_HUD_srvResponse_(const ContainerAllocator& _alloc)
    {
    }






  typedef boost::shared_ptr< ::prx_utilities::create_HUD_srvResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::prx_utilities::create_HUD_srvResponse_<ContainerAllocator> const> ConstPtr;

}; // struct create_HUD_srvResponse_

typedef ::prx_utilities::create_HUD_srvResponse_<std::allocator<void> > create_HUD_srvResponse;

typedef boost::shared_ptr< ::prx_utilities::create_HUD_srvResponse > create_HUD_srvResponsePtr;
typedef boost::shared_ptr< ::prx_utilities::create_HUD_srvResponse const> create_HUD_srvResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::prx_utilities::create_HUD_srvResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::prx_utilities::create_HUD_srvResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace prx_utilities

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg'], 'prx_utilities': ['/home/parallels/Desktop/ROS_workspace/src/prx_utilities/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::prx_utilities::create_HUD_srvResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::prx_utilities::create_HUD_srvResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::prx_utilities::create_HUD_srvResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::prx_utilities::create_HUD_srvResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::prx_utilities::create_HUD_srvResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::prx_utilities::create_HUD_srvResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::prx_utilities::create_HUD_srvResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const ::prx_utilities::create_HUD_srvResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::prx_utilities::create_HUD_srvResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "prx_utilities/create_HUD_srvResponse";
  }

  static const char* value(const ::prx_utilities::create_HUD_srvResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::prx_utilities::create_HUD_srvResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
";
  }

  static const char* value(const ::prx_utilities::create_HUD_srvResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::prx_utilities::create_HUD_srvResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct create_HUD_srvResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::prx_utilities::create_HUD_srvResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::prx_utilities::create_HUD_srvResponse_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // PRX_UTILITIES_MESSAGE_CREATE_HUD_SRVRESPONSE_H
