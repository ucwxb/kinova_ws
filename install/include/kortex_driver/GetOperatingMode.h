// Generated by gencpp from file kortex_driver/GetOperatingMode.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_GETOPERATINGMODE_H
#define KORTEX_DRIVER_MESSAGE_GETOPERATINGMODE_H

#include <ros/service_traits.h>


#include <kortex_driver/GetOperatingModeRequest.h>
#include <kortex_driver/GetOperatingModeResponse.h>


namespace kortex_driver
{

struct GetOperatingMode
{

typedef GetOperatingModeRequest Request;
typedef GetOperatingModeResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct GetOperatingMode
} // namespace kortex_driver


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::kortex_driver::GetOperatingMode > {
  static const char* value()
  {
    return "fe14b4b15e0f48ffd6cf705ff5a59c40";
  }

  static const char* value(const ::kortex_driver::GetOperatingMode&) { return value(); }
};

template<>
struct DataType< ::kortex_driver::GetOperatingMode > {
  static const char* value()
  {
    return "kortex_driver/GetOperatingMode";
  }

  static const char* value(const ::kortex_driver::GetOperatingMode&) { return value(); }
};


// service_traits::MD5Sum< ::kortex_driver::GetOperatingModeRequest> should match
// service_traits::MD5Sum< ::kortex_driver::GetOperatingMode >
template<>
struct MD5Sum< ::kortex_driver::GetOperatingModeRequest>
{
  static const char* value()
  {
    return MD5Sum< ::kortex_driver::GetOperatingMode >::value();
  }
  static const char* value(const ::kortex_driver::GetOperatingModeRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::kortex_driver::GetOperatingModeRequest> should match
// service_traits::DataType< ::kortex_driver::GetOperatingMode >
template<>
struct DataType< ::kortex_driver::GetOperatingModeRequest>
{
  static const char* value()
  {
    return DataType< ::kortex_driver::GetOperatingMode >::value();
  }
  static const char* value(const ::kortex_driver::GetOperatingModeRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::kortex_driver::GetOperatingModeResponse> should match
// service_traits::MD5Sum< ::kortex_driver::GetOperatingMode >
template<>
struct MD5Sum< ::kortex_driver::GetOperatingModeResponse>
{
  static const char* value()
  {
    return MD5Sum< ::kortex_driver::GetOperatingMode >::value();
  }
  static const char* value(const ::kortex_driver::GetOperatingModeResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::kortex_driver::GetOperatingModeResponse> should match
// service_traits::DataType< ::kortex_driver::GetOperatingMode >
template<>
struct DataType< ::kortex_driver::GetOperatingModeResponse>
{
  static const char* value()
  {
    return DataType< ::kortex_driver::GetOperatingMode >::value();
  }
  static const char* value(const ::kortex_driver::GetOperatingModeResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_GETOPERATINGMODE_H
