// Generated by gencpp from file prx_utilities/add_twoD_text_srv.msg
// DO NOT EDIT!


#ifndef PRX_UTILITIES_MESSAGE_ADD_TWOD_TEXT_SRV_H
#define PRX_UTILITIES_MESSAGE_ADD_TWOD_TEXT_SRV_H

#include <ros/service_traits.h>


#include <prx_utilities/add_twoD_text_srvRequest.h>
#include <prx_utilities/add_twoD_text_srvResponse.h>


namespace prx_utilities
{

struct add_twoD_text_srv
{

typedef add_twoD_text_srvRequest Request;
typedef add_twoD_text_srvResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct add_twoD_text_srv
} // namespace prx_utilities


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::prx_utilities::add_twoD_text_srv > {
  static const char* value()
  {
    return "a6cc3fdf0f60164e1faf4c881d50a0db";
  }

  static const char* value(const ::prx_utilities::add_twoD_text_srv&) { return value(); }
};

template<>
struct DataType< ::prx_utilities::add_twoD_text_srv > {
  static const char* value()
  {
    return "prx_utilities/add_twoD_text_srv";
  }

  static const char* value(const ::prx_utilities::add_twoD_text_srv&) { return value(); }
};


// service_traits::MD5Sum< ::prx_utilities::add_twoD_text_srvRequest> should match 
// service_traits::MD5Sum< ::prx_utilities::add_twoD_text_srv > 
template<>
struct MD5Sum< ::prx_utilities::add_twoD_text_srvRequest>
{
  static const char* value()
  {
    return MD5Sum< ::prx_utilities::add_twoD_text_srv >::value();
  }
  static const char* value(const ::prx_utilities::add_twoD_text_srvRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::prx_utilities::add_twoD_text_srvRequest> should match 
// service_traits::DataType< ::prx_utilities::add_twoD_text_srv > 
template<>
struct DataType< ::prx_utilities::add_twoD_text_srvRequest>
{
  static const char* value()
  {
    return DataType< ::prx_utilities::add_twoD_text_srv >::value();
  }
  static const char* value(const ::prx_utilities::add_twoD_text_srvRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::prx_utilities::add_twoD_text_srvResponse> should match 
// service_traits::MD5Sum< ::prx_utilities::add_twoD_text_srv > 
template<>
struct MD5Sum< ::prx_utilities::add_twoD_text_srvResponse>
{
  static const char* value()
  {
    return MD5Sum< ::prx_utilities::add_twoD_text_srv >::value();
  }
  static const char* value(const ::prx_utilities::add_twoD_text_srvResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::prx_utilities::add_twoD_text_srvResponse> should match 
// service_traits::DataType< ::prx_utilities::add_twoD_text_srv > 
template<>
struct DataType< ::prx_utilities::add_twoD_text_srvResponse>
{
  static const char* value()
  {
    return DataType< ::prx_utilities::add_twoD_text_srv >::value();
  }
  static const char* value(const ::prx_utilities::add_twoD_text_srvResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // PRX_UTILITIES_MESSAGE_ADD_TWOD_TEXT_SRV_H
