// Generated by gencpp from file kortex_driver/SendSelectedJointSpeedCommandRequest.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_SENDSELECTEDJOINTSPEEDCOMMANDREQUEST_H
#define KORTEX_DRIVER_MESSAGE_SENDSELECTEDJOINTSPEEDCOMMANDREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <kortex_driver/JointSpeed.h>

namespace kortex_driver
{
template <class ContainerAllocator>
struct SendSelectedJointSpeedCommandRequest_
{
  typedef SendSelectedJointSpeedCommandRequest_<ContainerAllocator> Type;

  SendSelectedJointSpeedCommandRequest_()
    : input()  {
    }
  SendSelectedJointSpeedCommandRequest_(const ContainerAllocator& _alloc)
    : input(_alloc)  {
  (void)_alloc;
    }



   typedef  ::kortex_driver::JointSpeed_<ContainerAllocator>  _input_type;
  _input_type input;





  typedef boost::shared_ptr< ::kortex_driver::SendSelectedJointSpeedCommandRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kortex_driver::SendSelectedJointSpeedCommandRequest_<ContainerAllocator> const> ConstPtr;

}; // struct SendSelectedJointSpeedCommandRequest_

typedef ::kortex_driver::SendSelectedJointSpeedCommandRequest_<std::allocator<void> > SendSelectedJointSpeedCommandRequest;

typedef boost::shared_ptr< ::kortex_driver::SendSelectedJointSpeedCommandRequest > SendSelectedJointSpeedCommandRequestPtr;
typedef boost::shared_ptr< ::kortex_driver::SendSelectedJointSpeedCommandRequest const> SendSelectedJointSpeedCommandRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kortex_driver::SendSelectedJointSpeedCommandRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kortex_driver::SendSelectedJointSpeedCommandRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::kortex_driver::SendSelectedJointSpeedCommandRequest_<ContainerAllocator1> & lhs, const ::kortex_driver::SendSelectedJointSpeedCommandRequest_<ContainerAllocator2> & rhs)
{
  return lhs.input == rhs.input;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::kortex_driver::SendSelectedJointSpeedCommandRequest_<ContainerAllocator1> & lhs, const ::kortex_driver::SendSelectedJointSpeedCommandRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace kortex_driver

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::SendSelectedJointSpeedCommandRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::SendSelectedJointSpeedCommandRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::SendSelectedJointSpeedCommandRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::SendSelectedJointSpeedCommandRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::SendSelectedJointSpeedCommandRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::SendSelectedJointSpeedCommandRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kortex_driver::SendSelectedJointSpeedCommandRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d102e2ca8cf0957c9b3ae29ee1bb2b2e";
  }

  static const char* value(const ::kortex_driver::SendSelectedJointSpeedCommandRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd102e2ca8cf0957cULL;
  static const uint64_t static_value2 = 0x9b3ae29ee1bb2b2eULL;
};

template<class ContainerAllocator>
struct DataType< ::kortex_driver::SendSelectedJointSpeedCommandRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kortex_driver/SendSelectedJointSpeedCommandRequest";
  }

  static const char* value(const ::kortex_driver::SendSelectedJointSpeedCommandRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kortex_driver::SendSelectedJointSpeedCommandRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "JointSpeed input\n"
"\n"
"================================================================================\n"
"MSG: kortex_driver/JointSpeed\n"
"\n"
"uint32 joint_identifier\n"
"float32 value\n"
"uint32 duration\n"
;
  }

  static const char* value(const ::kortex_driver::SendSelectedJointSpeedCommandRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kortex_driver::SendSelectedJointSpeedCommandRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.input);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SendSelectedJointSpeedCommandRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kortex_driver::SendSelectedJointSpeedCommandRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::kortex_driver::SendSelectedJointSpeedCommandRequest_<ContainerAllocator>& v)
  {
    s << indent << "input: ";
    s << std::endl;
    Printer< ::kortex_driver::JointSpeed_<ContainerAllocator> >::stream(s, indent + "  ", v.input);
  }
};

} // namespace message_operations
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_SENDSELECTEDJOINTSPEEDCOMMANDREQUEST_H