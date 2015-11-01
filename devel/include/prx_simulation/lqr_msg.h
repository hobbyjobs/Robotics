// Generated by gencpp from file prx_simulation/lqr_msg.msg
// DO NOT EDIT!


#ifndef PRX_SIMULATION_MESSAGE_LQR_MSG_H
#define PRX_SIMULATION_MESSAGE_LQR_MSG_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace prx_simulation
{
template <class ContainerAllocator>
struct lqr_msg_
{
  typedef lqr_msg_<ContainerAllocator> Type;

  lqr_msg_()
    : gain_matrix()
    , center()
    , control()
    , cost()
    , radius(0.0)  {
    }
  lqr_msg_(const ContainerAllocator& _alloc)
    : gain_matrix(_alloc)
    , center(_alloc)
    , control(_alloc)
    , cost(_alloc)
    , radius(0.0)  {
    }



   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _gain_matrix_type;
  _gain_matrix_type gain_matrix;

   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _center_type;
  _center_type center;

   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _control_type;
  _control_type control;

   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _cost_type;
  _cost_type cost;

   typedef double _radius_type;
  _radius_type radius;




  typedef boost::shared_ptr< ::prx_simulation::lqr_msg_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::prx_simulation::lqr_msg_<ContainerAllocator> const> ConstPtr;

}; // struct lqr_msg_

typedef ::prx_simulation::lqr_msg_<std::allocator<void> > lqr_msg;

typedef boost::shared_ptr< ::prx_simulation::lqr_msg > lqr_msgPtr;
typedef boost::shared_ptr< ::prx_simulation::lqr_msg const> lqr_msgConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::prx_simulation::lqr_msg_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::prx_simulation::lqr_msg_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace prx_simulation

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'prx_simulation': ['/home/parallels/Desktop/ROS_workspace/src/prx_simulation/msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::prx_simulation::lqr_msg_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::prx_simulation::lqr_msg_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::prx_simulation::lqr_msg_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::prx_simulation::lqr_msg_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::prx_simulation::lqr_msg_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::prx_simulation::lqr_msg_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::prx_simulation::lqr_msg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "616a8f799dda2886c09ed6dcd12e98ee";
  }

  static const char* value(const ::prx_simulation::lqr_msg_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x616a8f799dda2886ULL;
  static const uint64_t static_value2 = 0xc09ed6dcd12e98eeULL;
};

template<class ContainerAllocator>
struct DataType< ::prx_simulation::lqr_msg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "prx_simulation/lqr_msg";
  }

  static const char* value(const ::prx_simulation::lqr_msg_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::prx_simulation::lqr_msg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float64[] gain_matrix\n\
float64[] center\n\
float64[] control\n\
float64[] cost\n\
float64 radius\n\
";
  }

  static const char* value(const ::prx_simulation::lqr_msg_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::prx_simulation::lqr_msg_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.gain_matrix);
      stream.next(m.center);
      stream.next(m.control);
      stream.next(m.cost);
      stream.next(m.radius);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct lqr_msg_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::prx_simulation::lqr_msg_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::prx_simulation::lqr_msg_<ContainerAllocator>& v)
  {
    s << indent << "gain_matrix[]" << std::endl;
    for (size_t i = 0; i < v.gain_matrix.size(); ++i)
    {
      s << indent << "  gain_matrix[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.gain_matrix[i]);
    }
    s << indent << "center[]" << std::endl;
    for (size_t i = 0; i < v.center.size(); ++i)
    {
      s << indent << "  center[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.center[i]);
    }
    s << indent << "control[]" << std::endl;
    for (size_t i = 0; i < v.control.size(); ++i)
    {
      s << indent << "  control[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.control[i]);
    }
    s << indent << "cost[]" << std::endl;
    for (size_t i = 0; i < v.cost.size(); ++i)
    {
      s << indent << "  cost[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.cost[i]);
    }
    s << indent << "radius: ";
    Printer<double>::stream(s, indent + "  ", v.radius);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PRX_SIMULATION_MESSAGE_LQR_MSG_H
