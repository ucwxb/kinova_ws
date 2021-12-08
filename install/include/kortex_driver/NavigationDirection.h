// Generated by gencpp from file kortex_driver/NavigationDirection.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_NAVIGATIONDIRECTION_H
#define KORTEX_DRIVER_MESSAGE_NAVIGATIONDIRECTION_H


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
struct NavigationDirection_
{
  typedef NavigationDirection_<ContainerAllocator> Type;

  NavigationDirection_()
    {
    }
  NavigationDirection_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }





// reducing the odds to have name collisions with Windows.h 
#if defined(_WIN32) && defined(UNSPECIFIED_NAVIGATION_DIRECTION)
  #undef UNSPECIFIED_NAVIGATION_DIRECTION
#endif
#if defined(_WIN32) && defined(NEXT)
  #undef NEXT
#endif
#if defined(_WIN32) && defined(UP)
  #undef UP
#endif
#if defined(_WIN32) && defined(DOWN)
  #undef DOWN
#endif
#if defined(_WIN32) && defined(PREVIOUS)
  #undef PREVIOUS
#endif

  enum {
    UNSPECIFIED_NAVIGATION_DIRECTION = 0u,
    NEXT = 1u,
    UP = 2u,
    DOWN = 3u,
    PREVIOUS = 4u,
  };


  typedef boost::shared_ptr< ::kortex_driver::NavigationDirection_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kortex_driver::NavigationDirection_<ContainerAllocator> const> ConstPtr;

}; // struct NavigationDirection_

typedef ::kortex_driver::NavigationDirection_<std::allocator<void> > NavigationDirection;

typedef boost::shared_ptr< ::kortex_driver::NavigationDirection > NavigationDirectionPtr;
typedef boost::shared_ptr< ::kortex_driver::NavigationDirection const> NavigationDirectionConstPtr;

// constants requiring out of line definition

   

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kortex_driver::NavigationDirection_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kortex_driver::NavigationDirection_<ContainerAllocator> >::stream(s, "", v);
return s;
}


} // namespace kortex_driver

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::NavigationDirection_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::NavigationDirection_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::NavigationDirection_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::NavigationDirection_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::NavigationDirection_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::NavigationDirection_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kortex_driver::NavigationDirection_<ContainerAllocator> >
{
  static const char* value()
  {
    return "db0163da7423639bdc46c2cceb491c80";
  }

  static const char* value(const ::kortex_driver::NavigationDirection_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xdb0163da7423639bULL;
  static const uint64_t static_value2 = 0xdc46c2cceb491c80ULL;
};

template<class ContainerAllocator>
struct DataType< ::kortex_driver::NavigationDirection_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kortex_driver/NavigationDirection";
  }

  static const char* value(const ::kortex_driver::NavigationDirection_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kortex_driver::NavigationDirection_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"uint32 UNSPECIFIED_NAVIGATION_DIRECTION = 0\n"
"\n"
"uint32 NEXT = 1\n"
"\n"
"uint32 UP = 2\n"
"\n"
"uint32 DOWN = 3\n"
"\n"
"uint32 PREVIOUS = 4\n"
;
  }

  static const char* value(const ::kortex_driver::NavigationDirection_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kortex_driver::NavigationDirection_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct NavigationDirection_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kortex_driver::NavigationDirection_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::kortex_driver::NavigationDirection_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_NAVIGATIONDIRECTION_H