// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from rm_ros_interfaces:msg/Jointerrorcode.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "rm_ros_interfaces/msg/detail/jointerrorcode__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace rm_ros_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Jointerrorcode_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) rm_ros_interfaces::msg::Jointerrorcode(_init);
}

void Jointerrorcode_fini_function(void * message_memory)
{
  auto typed_message = static_cast<rm_ros_interfaces::msg::Jointerrorcode *>(message_memory);
  typed_message->~Jointerrorcode();
}

size_t size_function__Jointerrorcode__joint_error(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint16_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Jointerrorcode__joint_error(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint16_t> *>(untyped_member);
  return &member[index];
}

void * get_function__Jointerrorcode__joint_error(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint16_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__Jointerrorcode__joint_error(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint16_t *>(
    get_const_function__Jointerrorcode__joint_error(untyped_member, index));
  auto & value = *reinterpret_cast<uint16_t *>(untyped_value);
  value = item;
}

void assign_function__Jointerrorcode__joint_error(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint16_t *>(
    get_function__Jointerrorcode__joint_error(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint16_t *>(untyped_value);
  item = value;
}

void resize_function__Jointerrorcode__joint_error(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint16_t> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Jointerrorcode_message_member_array[2] = {
  {
    "joint_error",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rm_ros_interfaces::msg::Jointerrorcode, joint_error),  // bytes offset in struct
    nullptr,  // default value
    size_function__Jointerrorcode__joint_error,  // size() function pointer
    get_const_function__Jointerrorcode__joint_error,  // get_const(index) function pointer
    get_function__Jointerrorcode__joint_error,  // get(index) function pointer
    fetch_function__Jointerrorcode__joint_error,  // fetch(index, &value) function pointer
    assign_function__Jointerrorcode__joint_error,  // assign(index, value) function pointer
    resize_function__Jointerrorcode__joint_error  // resize(index) function pointer
  },
  {
    "dof",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rm_ros_interfaces::msg::Jointerrorcode, dof),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Jointerrorcode_message_members = {
  "rm_ros_interfaces::msg",  // message namespace
  "Jointerrorcode",  // message name
  2,  // number of fields
  sizeof(rm_ros_interfaces::msg::Jointerrorcode),
  Jointerrorcode_message_member_array,  // message members
  Jointerrorcode_init_function,  // function to initialize message memory (memory has to be allocated)
  Jointerrorcode_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Jointerrorcode_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Jointerrorcode_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace rm_ros_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<rm_ros_interfaces::msg::Jointerrorcode>()
{
  return &::rm_ros_interfaces::msg::rosidl_typesupport_introspection_cpp::Jointerrorcode_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rm_ros_interfaces, msg, Jointerrorcode)() {
  return &::rm_ros_interfaces::msg::rosidl_typesupport_introspection_cpp::Jointerrorcode_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
