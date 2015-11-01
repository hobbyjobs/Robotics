// Generated by gencpp from file prx_simulation/request_space_information_srv.msg
// DO NOT EDIT!


#ifndef PRX_SIMULATION_MESSAGE_REQUEST_SPACE_INFORMATION_SRV_H
#define PRX_SIMULATION_MESSAGE_REQUEST_SPACE_INFORMATION_SRV_H

#include <ros/service_traits.h>


#include <prx_simulation/request_space_information_srvRequest.h>
#include <prx_simulation/request_space_information_srvResponse.h>


namespace prx_simulation
{

struct request_space_information_srv
{

typedef request_space_information_srvRequest Request;
typedef request_space_information_srvResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct request_space_information_srv
} // namespace prx_simulation


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::prx_simulation::request_space_information_srv > {
  static const char* value()
  {
    return "34ab1b4f7fee73bcfc9b3f4de4f117fa";
  }

  static const char* value(const ::prx_simulation::request_space_information_srv&) { return value(); }
};

template<>
struct DataType< ::prx_simulation::request_space_information_srv > {
  static const char* value()
  {
    return "prx_simulation/request_space_information_srv";
  }

  static const char* value(const ::prx_simulation::request_space_information_srv&) { return value(); }
};


// service_traits::MD5Sum< ::prx_simulation::request_space_information_srvRequest> should match 
// service_traits::MD5Sum< ::prx_simulation::request_space_information_srv > 
template<>
struct MD5Sum< ::prx_simulation::request_space_information_srvRequest>
{
  static const char* value()
  {
    return MD5Sum< ::prx_simulation::request_space_information_srv >::value();
  }
  static const char* value(const ::prx_simulation::request_space_information_srvRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::prx_simulation::request_space_information_srvRequest> should match 
// service_traits::DataType< ::prx_simulation::request_space_information_srv > 
template<>
struct DataType< ::prx_simulation::request_space_information_srvRequest>
{
  static const char* value()
  {
    return DataType< ::prx_simulation::request_space_information_srv >::value();
  }
  static const char* value(const ::prx_simulation::request_space_information_srvRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::prx_simulation::request_space_information_srvResponse> should match 
// service_traits::MD5Sum< ::prx_simulation::request_space_information_srv > 
template<>
struct MD5Sum< ::prx_simulation::request_space_information_srvResponse>
{
  static const char* value()
  {
    return MD5Sum< ::prx_simulation::request_space_information_srv >::value();
  }
  static const char* value(const ::prx_simulation::request_space_information_srvResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::prx_simulation::request_space_information_srvResponse> should match 
// service_traits::DataType< ::prx_simulation::request_space_information_srv > 
template<>
struct DataType< ::prx_simulation::request_space_information_srvResponse>
{
  static const char* value()
  {
    return DataType< ::prx_simulation::request_space_information_srv >::value();
  }
  static const char* value(const ::prx_simulation::request_space_information_srvResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // PRX_SIMULATION_MESSAGE_REQUEST_SPACE_INFORMATION_SRV_H