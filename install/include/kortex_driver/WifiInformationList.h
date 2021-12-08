// Generated by gencpp from file kortex_driver/WifiInformationList.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_WIFIINFORMATIONLIST_H
#define KORTEX_DRIVER_MESSAGE_WIFIINFORMATIONLIST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <kortex_driver/WifiInformation.h>

namespace kortex_driver
{
template <class ContainerAllocator>
struct WifiInformationList_
{
  typedef WifiInformationList_<ContainerAllocator> Type;

  WifiInformationList_()
    : wifi_information_list()  {
    }
  WifiInformationList_(const ContainerAllocator& _alloc)
    : wifi_information_list(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector< ::kortex_driver::WifiInformation_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::kortex_driver::WifiInformation_<ContainerAllocator> >::other >  _wifi_information_list_type;
  _wifi_information_list_type wifi_information_list;





  typedef boost::shared_ptr< ::kortex_driver::WifiInformationList_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kortex_driver::WifiInformationList_<ContainerAllocator> const> ConstPtr;

}; // struct WifiInformationList_

typedef ::kortex_driver::WifiInformationList_<std::allocator<void> > WifiInformationList;

typedef boost::shared_ptr< ::kortex_driver::WifiInformationList > WifiInformationListPtr;
typedef boost::shared_ptr< ::kortex_driver::WifiInformationList const> WifiInformationListConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kortex_driver::WifiInformationList_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kortex_driver::WifiInformationList_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::kortex_driver::WifiInformationList_<ContainerAllocator1> & lhs, const ::kortex_driver::WifiInformationList_<ContainerAllocator2> & rhs)
{
  return lhs.wifi_information_list == rhs.wifi_information_list;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::kortex_driver::WifiInformationList_<ContainerAllocator1> & lhs, const ::kortex_driver::WifiInformationList_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace kortex_driver

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::WifiInformationList_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::WifiInformationList_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::WifiInformationList_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::WifiInformationList_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::WifiInformationList_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::WifiInformationList_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kortex_driver::WifiInformationList_<ContainerAllocator> >
{
  static const char* value()
  {
    return "e35665ac97a2d2d722059d5f54d85ef4";
  }

  static const char* value(const ::kortex_driver::WifiInformationList_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xe35665ac97a2d2d7ULL;
  static const uint64_t static_value2 = 0x22059d5f54d85ef4ULL;
};

template<class ContainerAllocator>
struct DataType< ::kortex_driver::WifiInformationList_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kortex_driver/WifiInformationList";
  }

  static const char* value(const ::kortex_driver::WifiInformationList_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kortex_driver::WifiInformationList_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"WifiInformation[] wifi_information_list\n"
"================================================================================\n"
"MSG: kortex_driver/WifiInformation\n"
"\n"
"Ssid ssid\n"
"uint32 security_type\n"
"uint32 encryption_type\n"
"uint32 signal_quality\n"
"int32 signal_strength\n"
"uint32 frequency\n"
"uint32 channel\n"
"================================================================================\n"
"MSG: kortex_driver/Ssid\n"
"\n"
"string identifier\n"
;
  }

  static const char* value(const ::kortex_driver::WifiInformationList_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kortex_driver::WifiInformationList_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.wifi_information_list);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct WifiInformationList_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kortex_driver::WifiInformationList_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::kortex_driver::WifiInformationList_<ContainerAllocator>& v)
  {
    s << indent << "wifi_information_list[]" << std::endl;
    for (size_t i = 0; i < v.wifi_information_list.size(); ++i)
    {
      s << indent << "  wifi_information_list[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::kortex_driver::WifiInformation_<ContainerAllocator> >::stream(s, indent + "    ", v.wifi_information_list[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_WIFIINFORMATIONLIST_H
