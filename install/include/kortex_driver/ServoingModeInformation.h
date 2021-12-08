// Generated by gencpp from file kortex_driver/ServoingModeInformation.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_SERVOINGMODEINFORMATION_H
#define KORTEX_DRIVER_MESSAGE_SERVOINGMODEINFORMATION_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace kortex_driver
{
template <class ContainerAllocator>
struct ServoingModeInformation_
{
  typedef ServoingModeInformation_<ContainerAllocator> Type;

  ServoingModeInformation_()
    : servoing_mode(0)  {
    }
  ServoingModeInformation_(const ContainerAllocator& _alloc)
    : servoing_mode(0)  {
  (void)_alloc;
    }



   typedef uint32_t _servoing_mode_type;
  _servoing_mode_type servoing_mode;





  typedef boost::shared_ptr< ::kortex_driver::ServoingModeInformation_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kortex_driver::ServoingModeInformation_<ContainerAllocator> const> ConstPtr;

}; // struct ServoingModeInformation_

typedef ::kortex_driver::ServoingModeInformation_<std::allocator<void> > ServoingModeInformation;

typedef boost::shared_ptr< ::kortex_driver::ServoingModeInformation > ServoingModeInformationPtr;
typedef boost::shared_ptr< ::kortex_driver::ServoingModeInformation const> ServoingModeInformationConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kortex_driver::ServoingModeInformation_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kortex_driver::ServoingModeInformation_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::kortex_driver::ServoingModeInformation_<ContainerAllocator1> & lhs, const ::kortex_driver::ServoingModeInformation_<ContainerAllocator2> & rhs)
{
  return lhs.servoing_mode == rhs.servoing_mode;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::kortex_driver::ServoingModeInformation_<ContainerAllocator1> & lhs, const ::kortex_driver::ServoingModeInformation_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace kortex_driver

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::ServoingModeInformation_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::ServoingModeInformation_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::ServoingModeInformation_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::ServoingModeInformation_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::ServoingModeInformation_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::ServoingModeInformation_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kortex_driver::ServoingModeInformation_<ContainerAllocator> >
{
  static const char* value()
  {
    return "fa12f11eee2104f3edd1a6487bc94db9";
  }

  static const char* value(const ::kortex_driver::ServoingModeInformation_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xfa12f11eee2104f3ULL;
  static const uint64_t static_value2 = 0xedd1a6487bc94db9ULL;
};

template<class ContainerAllocator>
struct DataType< ::kortex_driver::ServoingModeInformation_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kortex_driver/ServoingModeInformation";
  }

  static const char* value(const ::kortex_driver::ServoingModeInformation_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kortex_driver::ServoingModeInformation_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"uint32 servoing_mode\n"
;
  }

  static const char* value(const ::kortex_driver::ServoingModeInformation_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kortex_driver::ServoingModeInformation_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.servoing_mode);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ServoingModeInformation_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kortex_driver::ServoingModeInformation_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::kortex_driver::ServoingModeInformation_<ContainerAllocator>& v)
  {
    s << indent << "servoing_mode: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.servoing_mode);
  }
};

} // namespace message_operations
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_SERVOINGMODEINFORMATION_H
