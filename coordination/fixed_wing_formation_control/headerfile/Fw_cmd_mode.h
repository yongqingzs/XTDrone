// Generated by gencpp from file fixed_wing_formation_control/Fw_cmd_mode.msg
// DO NOT EDIT!


#ifndef FIXED_WING_FORMATION_CONTROL_MESSAGE_FW_CMD_MODE_H
#define FIXED_WING_FORMATION_CONTROL_MESSAGE_FW_CMD_MODE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace fixed_wing_formation_control
{
template <class ContainerAllocator>
struct Fw_cmd_mode_
{
  typedef Fw_cmd_mode_<ContainerAllocator> Type;

  Fw_cmd_mode_()
    : planeID(0)
    , need_idel(false)
    , need_take_off(false)
    , need_land(false)
    , need_formation(false)
    , need_protected(false)
    , formation_type(0)  {
    }
  Fw_cmd_mode_(const ContainerAllocator& _alloc)
    : planeID(0)
    , need_idel(false)
    , need_take_off(false)
    , need_land(false)
    , need_formation(false)
    , need_protected(false)
    , formation_type(0)  {
  (void)_alloc;
    }



   typedef uint16_t _planeID_type;
  _planeID_type planeID;

   typedef uint8_t _need_idel_type;
  _need_idel_type need_idel;

   typedef uint8_t _need_take_off_type;
  _need_take_off_type need_take_off;

   typedef uint8_t _need_land_type;
  _need_land_type need_land;

   typedef uint8_t _need_formation_type;
  _need_formation_type need_formation;

   typedef uint8_t _need_protected_type;
  _need_protected_type need_protected;

   typedef uint16_t _formation_type_type;
  _formation_type_type formation_type;





  typedef boost::shared_ptr< ::fixed_wing_formation_control::Fw_cmd_mode_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::fixed_wing_formation_control::Fw_cmd_mode_<ContainerAllocator> const> ConstPtr;

}; // struct Fw_cmd_mode_

typedef ::fixed_wing_formation_control::Fw_cmd_mode_<std::allocator<void> > Fw_cmd_mode;

typedef boost::shared_ptr< ::fixed_wing_formation_control::Fw_cmd_mode > Fw_cmd_modePtr;
typedef boost::shared_ptr< ::fixed_wing_formation_control::Fw_cmd_mode const> Fw_cmd_modeConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::fixed_wing_formation_control::Fw_cmd_mode_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::fixed_wing_formation_control::Fw_cmd_mode_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::fixed_wing_formation_control::Fw_cmd_mode_<ContainerAllocator1> & lhs, const ::fixed_wing_formation_control::Fw_cmd_mode_<ContainerAllocator2> & rhs)
{
  return lhs.planeID == rhs.planeID &&
    lhs.need_idel == rhs.need_idel &&
    lhs.need_take_off == rhs.need_take_off &&
    lhs.need_land == rhs.need_land &&
    lhs.need_formation == rhs.need_formation &&
    lhs.need_protected == rhs.need_protected &&
    lhs.formation_type == rhs.formation_type;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::fixed_wing_formation_control::Fw_cmd_mode_<ContainerAllocator1> & lhs, const ::fixed_wing_formation_control::Fw_cmd_mode_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace fixed_wing_formation_control

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::fixed_wing_formation_control::Fw_cmd_mode_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::fixed_wing_formation_control::Fw_cmd_mode_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::fixed_wing_formation_control::Fw_cmd_mode_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::fixed_wing_formation_control::Fw_cmd_mode_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::fixed_wing_formation_control::Fw_cmd_mode_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::fixed_wing_formation_control::Fw_cmd_mode_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::fixed_wing_formation_control::Fw_cmd_mode_<ContainerAllocator> >
{
  static const char* value()
  {
    return "f9cf7dab95c205d4eee17bbe324b250f";
  }

  static const char* value(const ::fixed_wing_formation_control::Fw_cmd_mode_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xf9cf7dab95c205d4ULL;
  static const uint64_t static_value2 = 0xeee17bbe324b250fULL;
};

template<class ContainerAllocator>
struct DataType< ::fixed_wing_formation_control::Fw_cmd_mode_<ContainerAllocator> >
{
  static const char* value()
  {
    return "fixed_wing_formation_control/Fw_cmd_mode";
  }

  static const char* value(const ::fixed_wing_formation_control::Fw_cmd_mode_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::fixed_wing_formation_control::Fw_cmd_mode_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint16 planeID\n"
"\n"
"bool need_idel\n"
"\n"
"bool need_take_off\n"
"\n"
"bool need_land\n"
"\n"
"bool need_formation\n"
"\n"
"bool need_protected\n"
"\n"
"uint16 formation_type\n"
;
  }

  static const char* value(const ::fixed_wing_formation_control::Fw_cmd_mode_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::fixed_wing_formation_control::Fw_cmd_mode_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.planeID);
      stream.next(m.need_idel);
      stream.next(m.need_take_off);
      stream.next(m.need_land);
      stream.next(m.need_formation);
      stream.next(m.need_protected);
      stream.next(m.formation_type);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Fw_cmd_mode_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::fixed_wing_formation_control::Fw_cmd_mode_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::fixed_wing_formation_control::Fw_cmd_mode_<ContainerAllocator>& v)
  {
    s << indent << "planeID: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.planeID);
    s << indent << "need_idel: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.need_idel);
    s << indent << "need_take_off: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.need_take_off);
    s << indent << "need_land: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.need_land);
    s << indent << "need_formation: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.need_formation);
    s << indent << "need_protected: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.need_protected);
    s << indent << "formation_type: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.formation_type);
  }
};

} // namespace message_operations
} // namespace ros

#endif // FIXED_WING_FORMATION_CONTROL_MESSAGE_FW_CMD_MODE_H
