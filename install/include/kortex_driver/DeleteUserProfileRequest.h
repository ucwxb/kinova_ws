// Generated by gencpp from file kortex_driver/DeleteUserProfileRequest.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_DELETEUSERPROFILEREQUEST_H
#define KORTEX_DRIVER_MESSAGE_DELETEUSERPROFILEREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <kortex_driver/UserProfileHandle.h>

namespace kortex_driver
{
template <class ContainerAllocator>
struct DeleteUserProfileRequest_
{
  typedef DeleteUserProfileRequest_<ContainerAllocator> Type;

  DeleteUserProfileRequest_()
    : input()  {
    }
  DeleteUserProfileRequest_(const ContainerAllocator& _alloc)
    : input(_alloc)  {
  (void)_alloc;
    }



   typedef  ::kortex_driver::UserProfileHandle_<ContainerAllocator>  _input_type;
  _input_type input;





  typedef boost::shared_ptr< ::kortex_driver::DeleteUserProfileRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kortex_driver::DeleteUserProfileRequest_<ContainerAllocator> const> ConstPtr;

}; // struct DeleteUserProfileRequest_

typedef ::kortex_driver::DeleteUserProfileRequest_<std::allocator<void> > DeleteUserProfileRequest;

typedef boost::shared_ptr< ::kortex_driver::DeleteUserProfileRequest > DeleteUserProfileRequestPtr;
typedef boost::shared_ptr< ::kortex_driver::DeleteUserProfileRequest const> DeleteUserProfileRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kortex_driver::DeleteUserProfileRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kortex_driver::DeleteUserProfileRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::kortex_driver::DeleteUserProfileRequest_<ContainerAllocator1> & lhs, const ::kortex_driver::DeleteUserProfileRequest_<ContainerAllocator2> & rhs)
{
  return lhs.input == rhs.input;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::kortex_driver::DeleteUserProfileRequest_<ContainerAllocator1> & lhs, const ::kortex_driver::DeleteUserProfileRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace kortex_driver

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::DeleteUserProfileRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::DeleteUserProfileRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::DeleteUserProfileRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::DeleteUserProfileRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::DeleteUserProfileRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::DeleteUserProfileRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kortex_driver::DeleteUserProfileRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "5bece15bd6f474817d8cf8261b2df5e4";
  }

  static const char* value(const ::kortex_driver::DeleteUserProfileRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x5bece15bd6f47481ULL;
  static const uint64_t static_value2 = 0x7d8cf8261b2df5e4ULL;
};

template<class ContainerAllocator>
struct DataType< ::kortex_driver::DeleteUserProfileRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kortex_driver/DeleteUserProfileRequest";
  }

  static const char* value(const ::kortex_driver::DeleteUserProfileRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kortex_driver::DeleteUserProfileRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "UserProfileHandle input\n"
"\n"
"================================================================================\n"
"MSG: kortex_driver/UserProfileHandle\n"
"\n"
"uint32 identifier\n"
"uint32 permission\n"
;
  }

  static const char* value(const ::kortex_driver::DeleteUserProfileRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kortex_driver::DeleteUserProfileRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.input);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct DeleteUserProfileRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kortex_driver::DeleteUserProfileRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::kortex_driver::DeleteUserProfileRequest_<ContainerAllocator>& v)
  {
    s << indent << "input: ";
    s << std::endl;
    Printer< ::kortex_driver::UserProfileHandle_<ContainerAllocator> >::stream(s, indent + "  ", v.input);
  }
};

} // namespace message_operations
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_DELETEUSERPROFILEREQUEST_H
