// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from rm_ros_interfaces:msg/Armoriginalstate.idl
// generated code does not contain a copyright notice
#include "rm_ros_interfaces/msg/detail/armoriginalstate__rosidl_typesupport_fastrtps_cpp.hpp"
#include "rm_ros_interfaces/msg/detail/armoriginalstate__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace rm_ros_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rm_ros_interfaces
cdr_serialize(
  const rm_ros_interfaces::msg::Armoriginalstate & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: joint
  {
    cdr << ros_message.joint;
  }
  // Member: pose
  {
    cdr << ros_message.pose;
  }
  // Member: arm_err
  cdr << ros_message.arm_err;
  // Member: sys_err
  cdr << ros_message.sys_err;
  // Member: dof
  cdr << ros_message.dof;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rm_ros_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  rm_ros_interfaces::msg::Armoriginalstate & ros_message)
{
  // Member: joint
  {
    cdr >> ros_message.joint;
  }

  // Member: pose
  {
    cdr >> ros_message.pose;
  }

  // Member: arm_err
  cdr >> ros_message.arm_err;

  // Member: sys_err
  cdr >> ros_message.sys_err;

  // Member: dof
  cdr >> ros_message.dof;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rm_ros_interfaces
get_serialized_size(
  const rm_ros_interfaces::msg::Armoriginalstate & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: joint
  {
    size_t array_size = ros_message.joint.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.joint[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: pose
  {
    size_t array_size = 6;
    size_t item_size = sizeof(ros_message.pose[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: arm_err
  {
    size_t item_size = sizeof(ros_message.arm_err);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: sys_err
  {
    size_t item_size = sizeof(ros_message.sys_err);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: dof
  {
    size_t item_size = sizeof(ros_message.dof);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rm_ros_interfaces
max_serialized_size_Armoriginalstate(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: joint
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: pose
  {
    size_t array_size = 6;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: arm_err
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: sys_err
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: dof
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = rm_ros_interfaces::msg::Armoriginalstate;
    is_plain =
      (
      offsetof(DataType, dof) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _Armoriginalstate__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const rm_ros_interfaces::msg::Armoriginalstate *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Armoriginalstate__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<rm_ros_interfaces::msg::Armoriginalstate *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Armoriginalstate__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const rm_ros_interfaces::msg::Armoriginalstate *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Armoriginalstate__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_Armoriginalstate(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _Armoriginalstate__callbacks = {
  "rm_ros_interfaces::msg",
  "Armoriginalstate",
  _Armoriginalstate__cdr_serialize,
  _Armoriginalstate__cdr_deserialize,
  _Armoriginalstate__get_serialized_size,
  _Armoriginalstate__max_serialized_size
};

static rosidl_message_type_support_t _Armoriginalstate__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Armoriginalstate__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace rm_ros_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_rm_ros_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<rm_ros_interfaces::msg::Armoriginalstate>()
{
  return &rm_ros_interfaces::msg::typesupport_fastrtps_cpp::_Armoriginalstate__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rm_ros_interfaces, msg, Armoriginalstate)() {
  return &rm_ros_interfaces::msg::typesupport_fastrtps_cpp::_Armoriginalstate__handle;
}

#ifdef __cplusplus
}
#endif
