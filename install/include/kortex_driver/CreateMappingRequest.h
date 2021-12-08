// Generated by gencpp from file kortex_driver/CreateMappingRequest.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_CREATEMAPPINGREQUEST_H
#define KORTEX_DRIVER_MESSAGE_CREATEMAPPINGREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <kortex_driver/Mapping.h>

namespace kortex_driver
{
template <class ContainerAllocator>
struct CreateMappingRequest_
{
  typedef CreateMappingRequest_<ContainerAllocator> Type;

  CreateMappingRequest_()
    : input()  {
    }
  CreateMappingRequest_(const ContainerAllocator& _alloc)
    : input(_alloc)  {
  (void)_alloc;
    }



   typedef  ::kortex_driver::Mapping_<ContainerAllocator>  _input_type;
  _input_type input;





  typedef boost::shared_ptr< ::kortex_driver::CreateMappingRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kortex_driver::CreateMappingRequest_<ContainerAllocator> const> ConstPtr;

}; // struct CreateMappingRequest_

typedef ::kortex_driver::CreateMappingRequest_<std::allocator<void> > CreateMappingRequest;

typedef boost::shared_ptr< ::kortex_driver::CreateMappingRequest > CreateMappingRequestPtr;
typedef boost::shared_ptr< ::kortex_driver::CreateMappingRequest const> CreateMappingRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kortex_driver::CreateMappingRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kortex_driver::CreateMappingRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::kortex_driver::CreateMappingRequest_<ContainerAllocator1> & lhs, const ::kortex_driver::CreateMappingRequest_<ContainerAllocator2> & rhs)
{
  return lhs.input == rhs.input;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::kortex_driver::CreateMappingRequest_<ContainerAllocator1> & lhs, const ::kortex_driver::CreateMappingRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace kortex_driver

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::CreateMappingRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::CreateMappingRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::CreateMappingRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::CreateMappingRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::CreateMappingRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::CreateMappingRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kortex_driver::CreateMappingRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "b5bb1290f598f97b2beeda37713172c1";
  }

  static const char* value(const ::kortex_driver::CreateMappingRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xb5bb1290f598f97bULL;
  static const uint64_t static_value2 = 0x2beeda37713172c1ULL;
};

template<class ContainerAllocator>
struct DataType< ::kortex_driver::CreateMappingRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kortex_driver/CreateMappingRequest";
  }

  static const char* value(const ::kortex_driver::CreateMappingRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kortex_driver::CreateMappingRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Mapping input\n"
"\n"
"================================================================================\n"
"MSG: kortex_driver/Mapping\n"
"\n"
"MappingHandle handle\n"
"string name\n"
"uint32 controller_identifier\n"
"MapGroupHandle active_map_group_handle\n"
"MapGroupHandle[] map_group_handles\n"
"MapHandle active_map_handle\n"
"MapHandle[] map_handles\n"
"string application_data\n"
"================================================================================\n"
"MSG: kortex_driver/MappingHandle\n"
"\n"
"uint32 identifier\n"
"uint32 permission\n"
"================================================================================\n"
"MSG: kortex_driver/MapGroupHandle\n"
"\n"
"uint32 identifier\n"
"uint32 permission\n"
"================================================================================\n"
"MSG: kortex_driver/MapHandle\n"
"\n"
"uint32 identifier\n"
"uint32 permission\n"
;
  }

  static const char* value(const ::kortex_driver::CreateMappingRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kortex_driver::CreateMappingRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.input);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct CreateMappingRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kortex_driver::CreateMappingRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::kortex_driver::CreateMappingRequest_<ContainerAllocator>& v)
  {
    s << indent << "input: ";
    s << std::endl;
    Printer< ::kortex_driver::Mapping_<ContainerAllocator> >::stream(s, indent + "  ", v.input);
  }
};

} // namespace message_operations
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_CREATEMAPPINGREQUEST_H