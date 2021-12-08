// Generated by gencpp from file kortex_driver/CalibrationResult.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_CALIBRATIONRESULT_H
#define KORTEX_DRIVER_MESSAGE_CALIBRATIONRESULT_H


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
struct CalibrationResult_
{
  typedef CalibrationResult_<ContainerAllocator> Type;

  CalibrationResult_()
    : calibration_status(0)
    , calibration_details(0)  {
    }
  CalibrationResult_(const ContainerAllocator& _alloc)
    : calibration_status(0)
    , calibration_details(0)  {
  (void)_alloc;
    }



   typedef uint32_t _calibration_status_type;
  _calibration_status_type calibration_status;

   typedef uint32_t _calibration_details_type;
  _calibration_details_type calibration_details;





  typedef boost::shared_ptr< ::kortex_driver::CalibrationResult_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kortex_driver::CalibrationResult_<ContainerAllocator> const> ConstPtr;

}; // struct CalibrationResult_

typedef ::kortex_driver::CalibrationResult_<std::allocator<void> > CalibrationResult;

typedef boost::shared_ptr< ::kortex_driver::CalibrationResult > CalibrationResultPtr;
typedef boost::shared_ptr< ::kortex_driver::CalibrationResult const> CalibrationResultConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kortex_driver::CalibrationResult_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kortex_driver::CalibrationResult_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::kortex_driver::CalibrationResult_<ContainerAllocator1> & lhs, const ::kortex_driver::CalibrationResult_<ContainerAllocator2> & rhs)
{
  return lhs.calibration_status == rhs.calibration_status &&
    lhs.calibration_details == rhs.calibration_details;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::kortex_driver::CalibrationResult_<ContainerAllocator1> & lhs, const ::kortex_driver::CalibrationResult_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace kortex_driver

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::CalibrationResult_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::CalibrationResult_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::CalibrationResult_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::CalibrationResult_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::CalibrationResult_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::CalibrationResult_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kortex_driver::CalibrationResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "3d6092aff91a3268dc7e1b71a52b5cd9";
  }

  static const char* value(const ::kortex_driver::CalibrationResult_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x3d6092aff91a3268ULL;
  static const uint64_t static_value2 = 0xdc7e1b71a52b5cd9ULL;
};

template<class ContainerAllocator>
struct DataType< ::kortex_driver::CalibrationResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kortex_driver/CalibrationResult";
  }

  static const char* value(const ::kortex_driver::CalibrationResult_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kortex_driver::CalibrationResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"uint32 calibration_status\n"
"uint32 calibration_details\n"
;
  }

  static const char* value(const ::kortex_driver::CalibrationResult_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kortex_driver::CalibrationResult_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.calibration_status);
      stream.next(m.calibration_details);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct CalibrationResult_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kortex_driver::CalibrationResult_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::kortex_driver::CalibrationResult_<ContainerAllocator>& v)
  {
    s << indent << "calibration_status: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.calibration_status);
    s << indent << "calibration_details: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.calibration_details);
  }
};

} // namespace message_operations
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_CALIBRATIONRESULT_H
