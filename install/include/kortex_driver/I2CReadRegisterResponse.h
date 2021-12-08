// Generated by gencpp from file kortex_driver/I2CReadRegisterResponse.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_I2CREADREGISTERRESPONSE_H
#define KORTEX_DRIVER_MESSAGE_I2CREADREGISTERRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <kortex_driver/I2CData.h>

namespace kortex_driver
{
template <class ContainerAllocator>
struct I2CReadRegisterResponse_
{
  typedef I2CReadRegisterResponse_<ContainerAllocator> Type;

  I2CReadRegisterResponse_()
    : output()  {
    }
  I2CReadRegisterResponse_(const ContainerAllocator& _alloc)
    : output(_alloc)  {
  (void)_alloc;
    }



   typedef  ::kortex_driver::I2CData_<ContainerAllocator>  _output_type;
  _output_type output;





  typedef boost::shared_ptr< ::kortex_driver::I2CReadRegisterResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kortex_driver::I2CReadRegisterResponse_<ContainerAllocator> const> ConstPtr;

}; // struct I2CReadRegisterResponse_

typedef ::kortex_driver::I2CReadRegisterResponse_<std::allocator<void> > I2CReadRegisterResponse;

typedef boost::shared_ptr< ::kortex_driver::I2CReadRegisterResponse > I2CReadRegisterResponsePtr;
typedef boost::shared_ptr< ::kortex_driver::I2CReadRegisterResponse const> I2CReadRegisterResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kortex_driver::I2CReadRegisterResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kortex_driver::I2CReadRegisterResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::kortex_driver::I2CReadRegisterResponse_<ContainerAllocator1> & lhs, const ::kortex_driver::I2CReadRegisterResponse_<ContainerAllocator2> & rhs)
{
  return lhs.output == rhs.output;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::kortex_driver::I2CReadRegisterResponse_<ContainerAllocator1> & lhs, const ::kortex_driver::I2CReadRegisterResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace kortex_driver

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::I2CReadRegisterResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::I2CReadRegisterResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::I2CReadRegisterResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::I2CReadRegisterResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::I2CReadRegisterResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::I2CReadRegisterResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kortex_driver::I2CReadRegisterResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "2d3e4addaef52f5412d20a5c63b66a92";
  }

  static const char* value(const ::kortex_driver::I2CReadRegisterResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x2d3e4addaef52f54ULL;
  static const uint64_t static_value2 = 0x12d20a5c63b66a92ULL;
};

template<class ContainerAllocator>
struct DataType< ::kortex_driver::I2CReadRegisterResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kortex_driver/I2CReadRegisterResponse";
  }

  static const char* value(const ::kortex_driver::I2CReadRegisterResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kortex_driver::I2CReadRegisterResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "I2CData output\n"
"\n"
"================================================================================\n"
"MSG: kortex_driver/I2CData\n"
"\n"
"uint8[] data\n"
"uint32 size\n"
;
  }

  static const char* value(const ::kortex_driver::I2CReadRegisterResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kortex_driver::I2CReadRegisterResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.output);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct I2CReadRegisterResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kortex_driver::I2CReadRegisterResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::kortex_driver::I2CReadRegisterResponse_<ContainerAllocator>& v)
  {
    s << indent << "output: ";
    s << std::endl;
    Printer< ::kortex_driver::I2CData_<ContainerAllocator> >::stream(s, indent + "  ", v.output);
  }
};

} // namespace message_operations
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_I2CREADREGISTERRESPONSE_H
