// Generated by gencpp from file ros_generated/ping.msg
// DO NOT EDIT!


#ifndef ROS_GENERATED_MESSAGE_PING_H
#define ROS_GENERATED_MESSAGE_PING_H

#include <ros/service_traits.h>


#include <ros_generated/pingRequest.h>
#include <ros_generated/pingResponse.h>


namespace ros_generated
{

struct ping
{

typedef pingRequest Request;
typedef pingResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct ping
} // namespace ros_generated


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::ros_generated::ping > {
  static const char* value()
  {
    return "e0b11fae317758a50d4957d9b4433b9f";
  }

  static const char* value(const ::ros_generated::ping&) { return value(); }
};

template<>
struct DataType< ::ros_generated::ping > {
  static const char* value()
  {
    return "ros_generated/ping";
  }

  static const char* value(const ::ros_generated::ping&) { return value(); }
};


// service_traits::MD5Sum< ::ros_generated::pingRequest> should match 
// service_traits::MD5Sum< ::ros_generated::ping > 
template<>
struct MD5Sum< ::ros_generated::pingRequest>
{
  static const char* value()
  {
    return MD5Sum< ::ros_generated::ping >::value();
  }
  static const char* value(const ::ros_generated::pingRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::ros_generated::pingRequest> should match 
// service_traits::DataType< ::ros_generated::ping > 
template<>
struct DataType< ::ros_generated::pingRequest>
{
  static const char* value()
  {
    return DataType< ::ros_generated::ping >::value();
  }
  static const char* value(const ::ros_generated::pingRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::ros_generated::pingResponse> should match 
// service_traits::MD5Sum< ::ros_generated::ping > 
template<>
struct MD5Sum< ::ros_generated::pingResponse>
{
  static const char* value()
  {
    return MD5Sum< ::ros_generated::ping >::value();
  }
  static const char* value(const ::ros_generated::pingResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::ros_generated::pingResponse> should match 
// service_traits::DataType< ::ros_generated::ping > 
template<>
struct DataType< ::ros_generated::pingResponse>
{
  static const char* value()
  {
    return DataType< ::ros_generated::ping >::value();
  }
  static const char* value(const ::ros_generated::pingResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // ROS_GENERATED_MESSAGE_PING_H
