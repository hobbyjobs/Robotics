// Generated by gencpp from file prx_utilities/visualize_ghost_plants_srv.msg
// DO NOT EDIT!


#ifndef PRX_UTILITIES_MESSAGE_VISUALIZE_GHOST_PLANTS_SRV_H
#define PRX_UTILITIES_MESSAGE_VISUALIZE_GHOST_PLANTS_SRV_H

#include <ros/service_traits.h>


#include <prx_utilities/visualize_ghost_plants_srvRequest.h>
#include <prx_utilities/visualize_ghost_plants_srvResponse.h>


namespace prx_utilities
{

struct visualize_ghost_plants_srv
{

typedef visualize_ghost_plants_srvRequest Request;
typedef visualize_ghost_plants_srvResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct visualize_ghost_plants_srv
} // namespace prx_utilities


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::prx_utilities::visualize_ghost_plants_srv > {
  static const char* value()
  {
    return "5c1d97362737c2f9457429d28485d6b1";
  }

  static const char* value(const ::prx_utilities::visualize_ghost_plants_srv&) { return value(); }
};

template<>
struct DataType< ::prx_utilities::visualize_ghost_plants_srv > {
  static const char* value()
  {
    return "prx_utilities/visualize_ghost_plants_srv";
  }

  static const char* value(const ::prx_utilities::visualize_ghost_plants_srv&) { return value(); }
};


// service_traits::MD5Sum< ::prx_utilities::visualize_ghost_plants_srvRequest> should match 
// service_traits::MD5Sum< ::prx_utilities::visualize_ghost_plants_srv > 
template<>
struct MD5Sum< ::prx_utilities::visualize_ghost_plants_srvRequest>
{
  static const char* value()
  {
    return MD5Sum< ::prx_utilities::visualize_ghost_plants_srv >::value();
  }
  static const char* value(const ::prx_utilities::visualize_ghost_plants_srvRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::prx_utilities::visualize_ghost_plants_srvRequest> should match 
// service_traits::DataType< ::prx_utilities::visualize_ghost_plants_srv > 
template<>
struct DataType< ::prx_utilities::visualize_ghost_plants_srvRequest>
{
  static const char* value()
  {
    return DataType< ::prx_utilities::visualize_ghost_plants_srv >::value();
  }
  static const char* value(const ::prx_utilities::visualize_ghost_plants_srvRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::prx_utilities::visualize_ghost_plants_srvResponse> should match 
// service_traits::MD5Sum< ::prx_utilities::visualize_ghost_plants_srv > 
template<>
struct MD5Sum< ::prx_utilities::visualize_ghost_plants_srvResponse>
{
  static const char* value()
  {
    return MD5Sum< ::prx_utilities::visualize_ghost_plants_srv >::value();
  }
  static const char* value(const ::prx_utilities::visualize_ghost_plants_srvResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::prx_utilities::visualize_ghost_plants_srvResponse> should match 
// service_traits::DataType< ::prx_utilities::visualize_ghost_plants_srv > 
template<>
struct DataType< ::prx_utilities::visualize_ghost_plants_srvResponse>
{
  static const char* value()
  {
    return DataType< ::prx_utilities::visualize_ghost_plants_srv >::value();
  }
  static const char* value(const ::prx_utilities::visualize_ghost_plants_srvResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // PRX_UTILITIES_MESSAGE_VISUALIZE_GHOST_PLANTS_SRV_H
