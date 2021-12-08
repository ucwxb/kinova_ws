// Generated by gencpp from file kortex_driver/I2CReadParameter.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_I2CREADPARAMETER_H
#define KORTEX_DRIVER_MESSAGE_I2CREADPARAMETER_H


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
struct I2CReadParameter_
{
  typedef I2CReadParameter_<ContainerAllocator> Type;

  I2CReadParameter_()
    : device(0)
    , device_address(0)
    , size(0)
    , timeout(0)  {
    }
  I2CReadParameter_(const ContainerAllocator& _alloc)
    : device(0)
    , device_address(0)
    , size(0)
    , timeout(0)  {
  (void)_alloc;
    }



   typedef uint32_t _device_type;
  _device_type device;

   typedef uint32_t _device_address_type;
  _device_address_type device_address;

   typedef uint32_t _size_type;
  _size_type size;

   typedef uint32_t _timeout_type;
  _timeout_type timeout;





  typedef boost::shared_ptr< ::kortex_driver::I2CReadParameter_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kortex_driver::I2CReadParameter_<ContainerAllocator> const> ConstPtr;

}; // struct I2CReadParameter_

typedef ::kortex_driver::I2CReadParameter_<std::allocator<void> > I2CReadParameter;

typedef boost::shared_ptr< ::kortex_driver::I2CReadParameter > I2CReadParameterPtr;
typedef boost::shared_ptr< ::kortex_driver::I2CReadParameter const> I2CReadParameterConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kortex_driver::I2CReadParameter_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kortex_driver::I2CReadParameter_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::kortex_driver::I2CReadParameter_<ContainerAllocator1> & lhs, const ::kortex_driver::I2CReadParameter_<ContainerAllocator2> & rhs)
{
  return lhs.device == rhs.device &&
    lhs.device_address == rhs.device_address &&
    lhs.size == rhs.size &&
    lhs.timeout == rhs.timeout;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::kortex_driver::I2CReadParameter_<ContainerAllocator1> & lhs, const ::kortex_driver::I2CReadParameter_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace kortex_driver

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::I2CReadParameter_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::I2CReadParameter_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::I2CReadParameter_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::I2CReadParameter_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::I2CReadParameter_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::I2CReadParameter_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kortex_driver::I2CReadParameter_<ContainerAllocator> >
{
  static const char* value()
  {
    return "66188a52c1e1bb7e3a095189a7bded0c";
  }

  static const char* value(const ::kortex_driver::I2CReadParameter_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x66188a52c1e1bb7eULL;
  static const uint64_t static_value2 = 0x3a095189a7bded0cULL;
};

template<class ContainerAllocator>
struct DataType< ::kortex_driver::I2CReadParameter_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kortex_driver/I2CReadParameter";
  }

  static const char* value(const ::kortex_driver::I2CReadParameter_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kortex_driver::I2CReadParameter_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"uint32 device\n"
"uint32 device_address\n"
"uint32 size\n"
"uint32 timeout\n"
;
  }

  static const char* value(const ::kortex_driver::I2CReadParameter_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kortex_driver::I2CReadParameter_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.device);
      stream.next(m.device_address);
      stream.next(m.size);
      stream.next(m.timeout);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct I2CReadParameter_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kortex_driver::I2CReadParameter_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::kortex_driver::I2CReadParameter_<ContainerAllocator>& v)
  {
    s << indent << "device: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.device);
    s << indent << "device_address: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.device_address);
    s << indent << "size: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.size);
    s << indent << "timeout: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.timeout);
  }
};

} // namespace message_operations
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_I2CREADPARAMETER_H