// Generated by gencpp from file kortex_driver/KinematicLimits.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_KINEMATICLIMITS_H
#define KORTEX_DRIVER_MESSAGE_KINEMATICLIMITS_H


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
struct KinematicLimits_
{
  typedef KinematicLimits_<ContainerAllocator> Type;

  KinematicLimits_()
    : control_mode(0)
    , twist_linear(0.0)
    , twist_angular(0.0)
    , joint_speed_limits()
    , joint_acceleration_limits()  {
    }
  KinematicLimits_(const ContainerAllocator& _alloc)
    : control_mode(0)
    , twist_linear(0.0)
    , twist_angular(0.0)
    , joint_speed_limits(_alloc)
    , joint_acceleration_limits(_alloc)  {
  (void)_alloc;
    }



   typedef uint32_t _control_mode_type;
  _control_mode_type control_mode;

   typedef float _twist_linear_type;
  _twist_linear_type twist_linear;

   typedef float _twist_angular_type;
  _twist_angular_type twist_angular;

   typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _joint_speed_limits_type;
  _joint_speed_limits_type joint_speed_limits;

   typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _joint_acceleration_limits_type;
  _joint_acceleration_limits_type joint_acceleration_limits;





  typedef boost::shared_ptr< ::kortex_driver::KinematicLimits_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kortex_driver::KinematicLimits_<ContainerAllocator> const> ConstPtr;

}; // struct KinematicLimits_

typedef ::kortex_driver::KinematicLimits_<std::allocator<void> > KinematicLimits;

typedef boost::shared_ptr< ::kortex_driver::KinematicLimits > KinematicLimitsPtr;
typedef boost::shared_ptr< ::kortex_driver::KinematicLimits const> KinematicLimitsConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kortex_driver::KinematicLimits_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kortex_driver::KinematicLimits_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::kortex_driver::KinematicLimits_<ContainerAllocator1> & lhs, const ::kortex_driver::KinematicLimits_<ContainerAllocator2> & rhs)
{
  return lhs.control_mode == rhs.control_mode &&
    lhs.twist_linear == rhs.twist_linear &&
    lhs.twist_angular == rhs.twist_angular &&
    lhs.joint_speed_limits == rhs.joint_speed_limits &&
    lhs.joint_acceleration_limits == rhs.joint_acceleration_limits;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::kortex_driver::KinematicLimits_<ContainerAllocator1> & lhs, const ::kortex_driver::KinematicLimits_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace kortex_driver

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::KinematicLimits_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::KinematicLimits_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::KinematicLimits_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::KinematicLimits_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::KinematicLimits_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::KinematicLimits_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kortex_driver::KinematicLimits_<ContainerAllocator> >
{
  static const char* value()
  {
    return "5496cda94486ec0fe4a0697dda6200aa";
  }

  static const char* value(const ::kortex_driver::KinematicLimits_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x5496cda94486ec0fULL;
  static const uint64_t static_value2 = 0xe4a0697dda6200aaULL;
};

template<class ContainerAllocator>
struct DataType< ::kortex_driver::KinematicLimits_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kortex_driver/KinematicLimits";
  }

  static const char* value(const ::kortex_driver::KinematicLimits_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kortex_driver::KinematicLimits_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"uint32 control_mode\n"
"float32 twist_linear\n"
"float32 twist_angular\n"
"float32[] joint_speed_limits\n"
"float32[] joint_acceleration_limits\n"
;
  }

  static const char* value(const ::kortex_driver::KinematicLimits_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kortex_driver::KinematicLimits_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.control_mode);
      stream.next(m.twist_linear);
      stream.next(m.twist_angular);
      stream.next(m.joint_speed_limits);
      stream.next(m.joint_acceleration_limits);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct KinematicLimits_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kortex_driver::KinematicLimits_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::kortex_driver::KinematicLimits_<ContainerAllocator>& v)
  {
    s << indent << "control_mode: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.control_mode);
    s << indent << "twist_linear: ";
    Printer<float>::stream(s, indent + "  ", v.twist_linear);
    s << indent << "twist_angular: ";
    Printer<float>::stream(s, indent + "  ", v.twist_angular);
    s << indent << "joint_speed_limits[]" << std::endl;
    for (size_t i = 0; i < v.joint_speed_limits.size(); ++i)
    {
      s << indent << "  joint_speed_limits[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.joint_speed_limits[i]);
    }
    s << indent << "joint_acceleration_limits[]" << std::endl;
    for (size_t i = 0; i < v.joint_acceleration_limits.size(); ++i)
    {
      s << indent << "  joint_acceleration_limits[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.joint_acceleration_limits[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_KINEMATICLIMITS_H
