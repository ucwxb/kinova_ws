// Generated by gencpp from file kortex_driver/SetSensorSettingsRequest.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_SETSENSORSETTINGSREQUEST_H
#define KORTEX_DRIVER_MESSAGE_SETSENSORSETTINGSREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <kortex_driver/SensorSettings.h>

namespace kortex_driver
{
template <class ContainerAllocator>
struct SetSensorSettingsRequest_
{
  typedef SetSensorSettingsRequest_<ContainerAllocator> Type;

  SetSensorSettingsRequest_()
    : input()  {
    }
  SetSensorSettingsRequest_(const ContainerAllocator& _alloc)
    : input(_alloc)  {
  (void)_alloc;
    }



   typedef  ::kortex_driver::SensorSettings_<ContainerAllocator>  _input_type;
  _input_type input;





  typedef boost::shared_ptr< ::kortex_driver::SetSensorSettingsRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kortex_driver::SetSensorSettingsRequest_<ContainerAllocator> const> ConstPtr;

}; // struct SetSensorSettingsRequest_

typedef ::kortex_driver::SetSensorSettingsRequest_<std::allocator<void> > SetSensorSettingsRequest;

typedef boost::shared_ptr< ::kortex_driver::SetSensorSettingsRequest > SetSensorSettingsRequestPtr;
typedef boost::shared_ptr< ::kortex_driver::SetSensorSettingsRequest const> SetSensorSettingsRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kortex_driver::SetSensorSettingsRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kortex_driver::SetSensorSettingsRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::kortex_driver::SetSensorSettingsRequest_<ContainerAllocator1> & lhs, const ::kortex_driver::SetSensorSettingsRequest_<ContainerAllocator2> & rhs)
{
  return lhs.input == rhs.input;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::kortex_driver::SetSensorSettingsRequest_<ContainerAllocator1> & lhs, const ::kortex_driver::SetSensorSettingsRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace kortex_driver

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::SetSensorSettingsRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::SetSensorSettingsRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::SetSensorSettingsRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::SetSensorSettingsRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::SetSensorSettingsRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::SetSensorSettingsRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kortex_driver::SetSensorSettingsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "8f49e578bf632b9e31b3dd330007019b";
  }

  static const char* value(const ::kortex_driver::SetSensorSettingsRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x8f49e578bf632b9eULL;
  static const uint64_t static_value2 = 0x31b3dd330007019bULL;
};

template<class ContainerAllocator>
struct DataType< ::kortex_driver::SetSensorSettingsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kortex_driver/SetSensorSettingsRequest";
  }

  static const char* value(const ::kortex_driver::SetSensorSettingsRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kortex_driver::SetSensorSettingsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "SensorSettings input\n"
"\n"
"================================================================================\n"
"MSG: kortex_driver/SensorSettings\n"
"\n"
"uint32 sensor\n"
"uint32 resolution\n"
"uint32 frame_rate\n"
"uint32 bit_rate\n"
;
  }

  static const char* value(const ::kortex_driver::SetSensorSettingsRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kortex_driver::SetSensorSettingsRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.input);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetSensorSettingsRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kortex_driver::SetSensorSettingsRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::kortex_driver::SetSensorSettingsRequest_<ContainerAllocator>& v)
  {
    s << indent << "input: ";
    s << std::endl;
    Printer< ::kortex_driver::SensorSettings_<ContainerAllocator> >::stream(s, indent + "  ", v.input);
  }
};

} // namespace message_operations
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_SETSENSORSETTINGSREQUEST_H