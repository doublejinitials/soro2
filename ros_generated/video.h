// Generated by gencpp from file ros_generated/video.msg
// DO NOT EDIT!


#ifndef ROS_GENERATED_MESSAGE_VIDEO_H
#define ROS_GENERATED_MESSAGE_VIDEO_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace ros_generated
{
template <class ContainerAllocator>
struct video_
{
  typedef video_<ContainerAllocator> Type;

  video_()
    : camera_matchSerial()
    , camera_matchProductId()
    , camera_matchVendorId()
    , camera_computerIndex(0)
    , camera_offset(0)
    , camera_index(0)
    , camera_name()
    , encoding(0)
    , width(0)
    , height(0)
    , fps(0)
    , bitrate(0)
    , quality(0)  {
    }
  video_(const ContainerAllocator& _alloc)
    : camera_matchSerial(_alloc)
    , camera_matchProductId(_alloc)
    , camera_matchVendorId(_alloc)
    , camera_computerIndex(0)
    , camera_offset(0)
    , camera_index(0)
    , camera_name(_alloc)
    , encoding(0)
    , width(0)
    , height(0)
    , fps(0)
    , bitrate(0)
    , quality(0)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _camera_matchSerial_type;
  _camera_matchSerial_type camera_matchSerial;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _camera_matchProductId_type;
  _camera_matchProductId_type camera_matchProductId;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _camera_matchVendorId_type;
  _camera_matchVendorId_type camera_matchVendorId;

   typedef uint16_t _camera_computerIndex_type;
  _camera_computerIndex_type camera_computerIndex;

   typedef uint16_t _camera_offset_type;
  _camera_offset_type camera_offset;

   typedef uint16_t _camera_index_type;
  _camera_index_type camera_index;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _camera_name_type;
  _camera_name_type camera_name;

   typedef uint8_t _encoding_type;
  _encoding_type encoding;

   typedef uint16_t _width_type;
  _width_type width;

   typedef uint16_t _height_type;
  _height_type height;

   typedef uint8_t _fps_type;
  _fps_type fps;

   typedef uint32_t _bitrate_type;
  _bitrate_type bitrate;

   typedef uint8_t _quality_type;
  _quality_type quality;




  typedef boost::shared_ptr< ::ros_generated::video_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ros_generated::video_<ContainerAllocator> const> ConstPtr;

}; // struct video_

typedef ::ros_generated::video_<std::allocator<void> > video;

typedef boost::shared_ptr< ::ros_generated::video > videoPtr;
typedef boost::shared_ptr< ::ros_generated::video const> videoConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ros_generated::video_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ros_generated::video_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace ros_generated

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'ros_generated': ['/home/soro/catkin_workspace/src/ros_generated/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::ros_generated::video_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ros_generated::video_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ros_generated::video_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ros_generated::video_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ros_generated::video_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ros_generated::video_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ros_generated::video_<ContainerAllocator> >
{
  static const char* value()
  {
    return "b78f60dfc0d7b43a70cc0f52f1709891";
  }

  static const char* value(const ::ros_generated::video_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xb78f60dfc0d7b43aULL;
  static const uint64_t static_value2 = 0x70cc0f52f1709891ULL;
};

template<class ContainerAllocator>
struct DataType< ::ros_generated::video_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ros_generated/video";
  }

  static const char* value(const ::ros_generated::video_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ros_generated::video_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string camera_matchSerial\n\
string camera_matchProductId\n\
string camera_matchVendorId\n\
uint16 camera_computerIndex\n\
uint16 camera_offset\n\
uint16 camera_index\n\
string camera_name\n\
uint8 encoding\n\
uint16 width\n\
uint16 height\n\
uint8 fps\n\
uint32 bitrate\n\
uint8 quality\n\
";
  }

  static const char* value(const ::ros_generated::video_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ros_generated::video_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.camera_matchSerial);
      stream.next(m.camera_matchProductId);
      stream.next(m.camera_matchVendorId);
      stream.next(m.camera_computerIndex);
      stream.next(m.camera_offset);
      stream.next(m.camera_index);
      stream.next(m.camera_name);
      stream.next(m.encoding);
      stream.next(m.width);
      stream.next(m.height);
      stream.next(m.fps);
      stream.next(m.bitrate);
      stream.next(m.quality);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct video_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ros_generated::video_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ros_generated::video_<ContainerAllocator>& v)
  {
    s << indent << "camera_matchSerial: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.camera_matchSerial);
    s << indent << "camera_matchProductId: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.camera_matchProductId);
    s << indent << "camera_matchVendorId: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.camera_matchVendorId);
    s << indent << "camera_computerIndex: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.camera_computerIndex);
    s << indent << "camera_offset: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.camera_offset);
    s << indent << "camera_index: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.camera_index);
    s << indent << "camera_name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.camera_name);
    s << indent << "encoding: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.encoding);
    s << indent << "width: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.width);
    s << indent << "height: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.height);
    s << indent << "fps: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.fps);
    s << indent << "bitrate: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.bitrate);
    s << indent << "quality: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.quality);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROS_GENERATED_MESSAGE_VIDEO_H