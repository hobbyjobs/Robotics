// Generated by gencpp from file prx_utilities/create_HUD_srvRequest.msg
// DO NOT EDIT!


#ifndef PRX_UTILITIES_MESSAGE_CREATE_HUD_SRVREQUEST_H
#define PRX_UTILITIES_MESSAGE_CREATE_HUD_SRVREQUEST_H


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
struct create_HUD_srvRequest_
{
  typedef create_HUD_srvRequest_<ContainerAllocator> Type;

  create_HUD_srvRequest_()
    : hud_name()
    , area()
    , color()
    , texture()  {
    }
  create_HUD_srvRequest_(const ContainerAllocator& _alloc)
    : hud_name(_alloc)
    , area(_alloc)
    , color(_alloc)
    , texture(_alloc)  {
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _hud_name_type;
  _hud_name_type hud_name;

   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _area_type;
  _area_type area;

   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _color_type;
  _color_type color;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _texture_type;
  _texture_type texture;




  typedef boost::shared_ptr< ::prx_utilities::create_HUD_srvRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::prx_utilities::create_HUD_srvRequest_<ContainerAllocator> const> ConstPtr;

}; // struct create_HUD_srvRequest_

typedef ::prx_utilities::create_HUD_srvRequest_<std::allocator<void> > create_HUD_srvRequest;

typedef boost::shared_ptr< ::prx_utilities::create_HUD_srvRequest > create_HUD_srvRequestPtr;
typedef boost::shared_ptr< ::prx_utilities::create_HUD_srvRequest const> create_HUD_srvRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::prx_utilities::create_HUD_srvRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::prx_utilities::create_HUD_srvRequest_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::prx_utilities::create_HUD_srvRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::prx_utilities::create_HUD_srvRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::prx_utilities::create_HUD_srvRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::prx_utilities::create_HUD_srvRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::prx_utilities::create_HUD_srvRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::prx_utilities::create_HUD_srvRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::prx_utilities::create_HUD_srvRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "25298e7c8aa400f277cece434a3730ac";
  }

  static const char* value(const ::prx_utilities::create_HUD_srvRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x25298e7c8aa400f2ULL;
  static const uint64_t static_value2 = 0x77cece434a3730acULL;
};

template<class ContainerAllocator>
struct DataType< ::prx_utilities::create_HUD_srvRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "prx_utilities/create_HUD_srvRequest";
  }

  static const char* value(const ::prx_utilities::create_HUD_srvRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::prx_utilities::create_HUD_srvRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string hud_name\n\
float64[]  area\n\
float64[]  color\n\
string texture\n\
";
  }

  static const char* value(const ::prx_utilities::create_HUD_srvRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::prx_utilities::create_HUD_srvRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.hud_name);
      stream.next(m.area);
      stream.next(m.color);
      stream.next(m.texture);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct create_HUD_srvRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::prx_utilities::create_HUD_srvRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::prx_utilities::create_HUD_srvRequest_<ContainerAllocator>& v)
  {
    s << indent << "hud_name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.hud_name);
    s << indent << "area[]" << std::endl;
    for (size_t i = 0; i < v.area.size(); ++i)
    {
      s << indent << "  area[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.area[i]);
    }
    s << indent << "color[]" << std::endl;
    for (size_t i = 0; i < v.color.size(); ++i)
    {
      s << indent << "  color[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.color[i]);
    }
    s << indent << "texture: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.texture);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PRX_UTILITIES_MESSAGE_CREATE_HUD_SRVREQUEST_H
