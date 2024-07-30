// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from rm_ros_interfaces:msg/Armoriginalstate.idl
// generated code does not contain a copyright notice
#include "rm_ros_interfaces/msg/detail/armoriginalstate__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rm_ros_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "rm_ros_interfaces/msg/detail/armoriginalstate__struct.h"
#include "rm_ros_interfaces/msg/detail/armoriginalstate__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/primitives_sequence.h"  // joint
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // joint

// forward declare type support functions


using _Armoriginalstate__ros_msg_type = rm_ros_interfaces__msg__Armoriginalstate;

static bool _Armoriginalstate__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Armoriginalstate__ros_msg_type * ros_message = static_cast<const _Armoriginalstate__ros_msg_type *>(untyped_ros_message);
  // Field name: joint
  {
    size_t size = ros_message->joint.size;
    auto array_ptr = ros_message->joint.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: pose
  {
    size_t size = 6;
    auto array_ptr = ros_message->pose;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: arm_err
  {
    cdr << ros_message->arm_err;
  }

  // Field name: sys_err
  {
    cdr << ros_message->sys_err;
  }

  // Field name: dof
  {
    cdr << ros_message->dof;
  }

  return true;
}

static bool _Armoriginalstate__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Armoriginalstate__ros_msg_type * ros_message = static_cast<_Armoriginalstate__ros_msg_type *>(untyped_ros_message);
  // Field name: joint
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->joint.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->joint);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->joint, size)) {
      fprintf(stderr, "failed to create array for field 'joint'");
      return false;
    }
    auto array_ptr = ros_message->joint.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: pose
  {
    size_t size = 6;
    auto array_ptr = ros_message->pose;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: arm_err
  {
    cdr >> ros_message->arm_err;
  }

  // Field name: sys_err
  {
    cdr >> ros_message->sys_err;
  }

  // Field name: dof
  {
    cdr >> ros_message->dof;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rm_ros_interfaces
size_t get_serialized_size_rm_ros_interfaces__msg__Armoriginalstate(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Armoriginalstate__ros_msg_type * ros_message = static_cast<const _Armoriginalstate__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name joint
  {
    size_t array_size = ros_message->joint.size;
    auto array_ptr = ros_message->joint.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pose
  {
    size_t array_size = 6;
    auto array_ptr = ros_message->pose;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name arm_err
  {
    size_t item_size = sizeof(ros_message->arm_err);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name sys_err
  {
    size_t item_size = sizeof(ros_message->sys_err);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name dof
  {
    size_t item_size = sizeof(ros_message->dof);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Armoriginalstate__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_rm_ros_interfaces__msg__Armoriginalstate(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rm_ros_interfaces
size_t max_serialized_size_rm_ros_interfaces__msg__Armoriginalstate(
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

  // member: joint
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
  // member: pose
  {
    size_t array_size = 6;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: arm_err
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: sys_err
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: dof
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
    using DataType = rm_ros_interfaces__msg__Armoriginalstate;
    is_plain =
      (
      offsetof(DataType, dof) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _Armoriginalstate__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_rm_ros_interfaces__msg__Armoriginalstate(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Armoriginalstate = {
  "rm_ros_interfaces::msg",
  "Armoriginalstate",
  _Armoriginalstate__cdr_serialize,
  _Armoriginalstate__cdr_deserialize,
  _Armoriginalstate__get_serialized_size,
  _Armoriginalstate__max_serialized_size
};

static rosidl_message_type_support_t _Armoriginalstate__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Armoriginalstate,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rm_ros_interfaces, msg, Armoriginalstate)() {
  return &_Armoriginalstate__type_support;
}

#if defined(__cplusplus)
}
#endif
