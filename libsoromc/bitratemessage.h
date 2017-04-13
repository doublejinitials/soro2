// Generated by gencpp from file message_gen/bitrate.msg
// DO NOT EDIT!


#ifndef MESSAGE_GEN_MESSAGE_BITRATE_H
#define MESSAGE_GEN_MESSAGE_BITRATE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace message_gen
{
template <class ContainerAllocator>
struct bitrate_
{
  typedef bitrate_<ContainerAllocator> Type;

  bitrate_()
    : bitrateUp(0)
    , bitrateDown(0)  {
    }
  bitrate_(const ContainerAllocator& _alloc)
    : bitrateUp(0)
    , bitrateDown(0)  {
  (void)_alloc;
    }



   typedef uint64_t _bitrateUp_type;
  _bitrateUp_type bitrateUp;

   typedef uint64_t _bitrateDown_type;
  _bitrateDown_type bitrateDown;




  typedef boost::shared_ptr< ::message_gen::bitrate_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::message_gen::bitrate_<ContainerAllocator> const> ConstPtr;

}; // struct bitrate_

typedef ::message_gen::bitrate_<std::allocator<void> > bitrate;

typedef boost::shared_ptr< ::message_gen::bitrate > bitratePtr;
typedef boost::shared_ptr< ::message_gen::bitrate const> bitrateConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::message_gen::bitrate_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::message_gen::bitrate_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace message_gen

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'message_gen': ['/home/soro/catkin_workspace/src/message_gen/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::message_gen::bitrate_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::message_gen::bitrate_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::message_gen::bitrate_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::message_gen::bitrate_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::message_gen::bitrate_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::message_gen::bitrate_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::message_gen::bitrate_<ContainerAllocator> >
{
  static const char* value()
  {
    return "9104c366eae5bee7f50f9334279bbde3";
  }

  static const char* value(const ::message_gen::bitrate_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x9104c366eae5bee7ULL;
  static const uint64_t static_value2 = 0xf50f9334279bbde3ULL;
};

template<class ContainerAllocator>
struct DataType< ::message_gen::bitrate_<ContainerAllocator> >
{
  static const char* value()
  {
    return "message_gen/bitrate";
  }

  static const char* value(const ::message_gen::bitrate_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::message_gen::bitrate_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint64 bitrateUp\n\
uint64 bitrateDown \n\
";
  }

  static const char* value(const ::message_gen::bitrate_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::message_gen::bitrate_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.bitrateUp);
      stream.next(m.bitrateDown);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct bitrate_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::message_gen::bitrate_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::message_gen::bitrate_<ContainerAllocator>& v)
  {
    s << indent << "bitrateUp: ";
    Printer<uint64_t>::stream(s, indent + "  ", v.bitrateUp);
    s << indent << "bitrateDown: ";
    Printer<uint64_t>::stream(s, indent + "  ", v.bitrateDown);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MESSAGE_GEN_MESSAGE_BITRATE_H