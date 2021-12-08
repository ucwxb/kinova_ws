// Generated by gencpp from file kortex_driver/SetIntrinsicParametersRequest.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_SETINTRINSICPARAMETERSREQUEST_H
#define KORTEX_DRIVER_MESSAGE_SETINTRINSICPARAMETERSREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <kortex_driver/IntrinsicParameters.h>

namespace kortex_driver
{
template <class ContainerAllocator>
struct SetIntrinsicParametersRequest_
{
  typedef SetIntrinsicParametersRequest_<ContainerAllocator> Type;

  SetIntrinsicParametersRequest_()
    : input()  {
    }
  SetIntrinsicParametersRequest_(const ContainerAllocator& _alloc)
    : input(_alloc)  {
  (void)_alloc;
    }



   typedef  ::kortex_driver::IntrinsicParameters_<ContainerAllocator>  _input_type;
  _input_type input;





  typedef boost::shared_ptr< ::kortex_driver::SetIntrinsicParametersRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kortex_driver::SetIntrinsicParametersRequest_<ContainerAllocator> const> ConstPtr;

}; // struct SetIntrinsicParametersRequest_

typedef ::kortex_driver::SetIntrinsicParametersRequest_<std::allocator<void> > SetIntrinsicParametersRequest;

typedef boost::shared_ptr< ::kortex_driver::SetIntrinsicParametersRequest > SetIntrinsicParametersRequestPtr;
typedef boost::shared_ptr< ::kortex_driver::SetIntrinsicParametersRequest const> SetIntrinsicParametersRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kortex_driver::SetIntrinsicParametersRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kortex_driver::SetIntrinsicParametersRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::kortex_driver::SetIntrinsicParametersRequest_<ContainerAllocator1> & lhs, const ::kortex_driver::SetIntrinsicParametersRequest_<ContainerAllocator2> & rhs)
{
  return lhs.input == rhs.input;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::kortex_driver::SetIntrinsicParametersRequest_<ContainerAllocator1> & lhs, const ::kortex_driver::SetIntrinsicParametersRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace kortex_driver

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::SetIntrinsicParametersRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::SetIntrinsicParametersRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::SetIntrinsicParametersRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::SetIntrinsicParametersRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::SetIntrinsicParametersRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::SetIntrinsicParametersRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kortex_driver::SetIntrinsicParametersRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "5c2a2b6647655afd9c96bec51c351692";
  }

  static const char* value(const ::kortex_driver::SetIntrinsicParametersRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x5c2a2b6647655afdULL;
  static const uint64_t static_value2 = 0x9c96bec51c351692ULL;
};

template<class ContainerAllocator>
struct DataType< ::kortex_driver::SetIntrinsicParametersRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kortex_driver/SetIntrinsicParametersRequest";
  }

  static const char* value(const ::kortex_driver::SetIntrinsicParametersRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kortex_driver::SetIntrinsicParametersRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "IntrinsicParameters input\n"
"\n"
"================================================================================\n"
"MSG: kortex_driver/IntrinsicParameters\n"
"\n"
"uint32 sensor\n"
"uint32 resolution\n"
"float32 principal_point_x\n"
"float32 principal_point_y\n"
"float32 focal_length_x\n"
"float32 focal_length_y\n"
"DistortionCoefficients distortion_coeffs\n"
"================================================================================\n"
"MSG: kortex_driver/DistortionCoefficients\n"
"\n"
"float32 k1\n"
"float32 k2\n"
"float32 k3\n"
"float32 p1\n"
"float32 p2\n"
;
  }

  static const char* value(const ::kortex_driver::SetIntrinsicParametersRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kortex_driver::SetIntrinsicParametersRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.input);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetIntrinsicParametersRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kortex_driver::SetIntrinsicParametersRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::kortex_driver::SetIntrinsicParametersRequest_<ContainerAllocator>& v)
  {
    s << indent << "input: ";
    s << std::endl;
    Printer< ::kortex_driver::IntrinsicParameters_<ContainerAllocator> >::stream(s, indent + "  ", v.input);
  }
};

} // namespace message_operations
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_SETINTRINSICPARAMETERSREQUEST_H
