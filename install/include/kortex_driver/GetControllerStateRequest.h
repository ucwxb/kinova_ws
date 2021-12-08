// Generated by gencpp from file kortex_driver/GetControllerStateRequest.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_GETCONTROLLERSTATEREQUEST_H
#define KORTEX_DRIVER_MESSAGE_GETCONTROLLERSTATEREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <kortex_driver/ControllerHandle.h>

namespace kortex_driver
{
template <class ContainerAllocator>
struct GetControllerStateRequest_
{
  typedef GetControllerStateRequest_<ContainerAllocator> Type;

  GetControllerStateRequest_()
    : input()  {
    }
  GetControllerStateRequest_(const ContainerAllocator& _alloc)
    : input(_alloc)  {
  (void)_alloc;
    }



   typedef  ::kortex_driver::ControllerHandle_<ContainerAllocator>  _input_type;
  _input_type input;





  typedef boost::shared_ptr< ::kortex_driver::GetControllerStateRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kortex_driver::GetControllerStateRequest_<ContainerAllocator> const> ConstPtr;

}; // struct GetControllerStateRequest_

typedef ::kortex_driver::GetControllerStateRequest_<std::allocator<void> > GetControllerStateRequest;

typedef boost::shared_ptr< ::kortex_driver::GetControllerStateRequest > GetControllerStateRequestPtr;
typedef boost::shared_ptr< ::kortex_driver::GetControllerStateRequest const> GetControllerStateRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kortex_driver::GetControllerStateRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kortex_driver::GetControllerStateRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::kortex_driver::GetControllerStateRequest_<ContainerAllocator1> & lhs, const ::kortex_driver::GetControllerStateRequest_<ContainerAllocator2> & rhs)
{
  return lhs.input == rhs.input;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::kortex_driver::GetControllerStateRequest_<ContainerAllocator1> & lhs, const ::kortex_driver::GetControllerStateRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace kortex_driver

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::GetControllerStateRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::GetControllerStateRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::GetControllerStateRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::GetControllerStateRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::GetControllerStateRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::GetControllerStateRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kortex_driver::GetControllerStateRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "0d6670247f140ab183942a0576f87f5f";
  }

  static const char* value(const ::kortex_driver::GetControllerStateRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x0d6670247f140ab1ULL;
  static const uint64_t static_value2 = 0x83942a0576f87f5fULL;
};

template<class ContainerAllocator>
struct DataType< ::kortex_driver::GetControllerStateRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kortex_driver/GetControllerStateRequest";
  }

  static const char* value(const ::kortex_driver::GetControllerStateRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kortex_driver::GetControllerStateRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ControllerHandle input\n"
"\n"
"================================================================================\n"
"MSG: kortex_driver/ControllerHandle\n"
"\n"
"uint32 type\n"
"uint32 controller_identifier\n"
;
  }

  static const char* value(const ::kortex_driver::GetControllerStateRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kortex_driver::GetControllerStateRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.input);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetControllerStateRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kortex_driver::GetControllerStateRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::kortex_driver::GetControllerStateRequest_<ContainerAllocator>& v)
  {
    s << indent << "input: ";
    s << std::endl;
    Printer< ::kortex_driver::ControllerHandle_<ContainerAllocator> >::stream(s, indent + "  ", v.input);
  }
};

} // namespace message_operations
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_GETCONTROLLERSTATEREQUEST_H
