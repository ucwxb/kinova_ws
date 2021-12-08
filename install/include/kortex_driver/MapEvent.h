// Generated by gencpp from file kortex_driver/MapEvent.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_MAPEVENT_H
#define KORTEX_DRIVER_MESSAGE_MAPEVENT_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <kortex_driver/MapEvent_events.h>

namespace kortex_driver
{
template <class ContainerAllocator>
struct MapEvent_
{
  typedef MapEvent_<ContainerAllocator> Type;

  MapEvent_()
    : name()
    , oneof_events()  {
    }
  MapEvent_(const ContainerAllocator& _alloc)
    : name(_alloc)
    , oneof_events(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _name_type;
  _name_type name;

   typedef  ::kortex_driver::MapEvent_events_<ContainerAllocator>  _oneof_events_type;
  _oneof_events_type oneof_events;





  typedef boost::shared_ptr< ::kortex_driver::MapEvent_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kortex_driver::MapEvent_<ContainerAllocator> const> ConstPtr;

}; // struct MapEvent_

typedef ::kortex_driver::MapEvent_<std::allocator<void> > MapEvent;

typedef boost::shared_ptr< ::kortex_driver::MapEvent > MapEventPtr;
typedef boost::shared_ptr< ::kortex_driver::MapEvent const> MapEventConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kortex_driver::MapEvent_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kortex_driver::MapEvent_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::kortex_driver::MapEvent_<ContainerAllocator1> & lhs, const ::kortex_driver::MapEvent_<ContainerAllocator2> & rhs)
{
  return lhs.name == rhs.name &&
    lhs.oneof_events == rhs.oneof_events;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::kortex_driver::MapEvent_<ContainerAllocator1> & lhs, const ::kortex_driver::MapEvent_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace kortex_driver

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::MapEvent_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::MapEvent_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::MapEvent_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::MapEvent_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::MapEvent_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::MapEvent_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kortex_driver::MapEvent_<ContainerAllocator> >
{
  static const char* value()
  {
    return "c2332688b9b21902d710a4725da3d8c9";
  }

  static const char* value(const ::kortex_driver::MapEvent_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xc2332688b9b21902ULL;
  static const uint64_t static_value2 = 0xd710a4725da3d8c9ULL;
};

template<class ContainerAllocator>
struct DataType< ::kortex_driver::MapEvent_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kortex_driver/MapEvent";
  }

  static const char* value(const ::kortex_driver::MapEvent_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kortex_driver::MapEvent_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"string name\n"
"MapEvent_events oneof_events\n"
"================================================================================\n"
"MSG: kortex_driver/MapEvent_events\n"
"\n"
"SafetyEvent[] safety_event\n"
"GpioEvent[] gpio_event\n"
"ControllerEvent[] controller_event\n"
"================================================================================\n"
"MSG: kortex_driver/SafetyEvent\n"
"\n"
"SafetyHandle safety_handle\n"
"================================================================================\n"
"MSG: kortex_driver/SafetyHandle\n"
"\n"
"uint32 identifier\n"
"================================================================================\n"
"MSG: kortex_driver/GpioEvent\n"
"\n"
"uint32 input_type\n"
"uint32 behavior\n"
"uint32 input_identifier\n"
"================================================================================\n"
"MSG: kortex_driver/ControllerEvent\n"
"\n"
"uint32 input_type\n"
"uint32 behavior\n"
"uint32 input_identifier\n"
;
  }

  static const char* value(const ::kortex_driver::MapEvent_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kortex_driver::MapEvent_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.name);
      stream.next(m.oneof_events);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct MapEvent_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kortex_driver::MapEvent_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::kortex_driver::MapEvent_<ContainerAllocator>& v)
  {
    s << indent << "name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.name);
    s << indent << "oneof_events: ";
    s << std::endl;
    Printer< ::kortex_driver::MapEvent_events_<ContainerAllocator> >::stream(s, indent + "  ", v.oneof_events);
  }
};

} // namespace message_operations
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_MAPEVENT_H