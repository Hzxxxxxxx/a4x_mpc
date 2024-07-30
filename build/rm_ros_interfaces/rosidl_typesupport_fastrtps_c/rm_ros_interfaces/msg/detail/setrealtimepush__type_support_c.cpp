// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from rm_ros_interfaces:msg/Setrealtimepush.idl
// generated code does not contain a copyright notice
#include "rm_ros_interfaces/msg/detail/setrealtimepush__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rm_ros_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "rm_ros_interfaces/msg/detail/setrealtimepush__struct.h"
#include "rm_ros_interfaces/msg/detail/setrealtimepush__functions.h"
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

#include "rosidl_runtime_c/string.h"  // ip
#include "rosidl_runtime_c/string_functions.h"  // ip

// forward declare type support functions


using _Setrealtimepush__ros_msg_type = rm_ros_interfaces__msg__Setrealtimepush;

static bool _Setrealtimepush__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Setrealtimepush__ros_msg_type * ros_message = static_cast<const _Setrealtimepush__ros_msg_type *>(untyped_ros_message);
  // Field name: cycle
  {
    cdr << ros_message->cycle;
  }

  // Field name: port
  {
    cdr << ros_message->port;
  }

  // Field name: force_coordinate
  {
    cdr << ros_message->force_coordinate;
  }

  // Field name: ip
  {
    const rosidl_runtime_c__String * str = &ros_message->ip;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _Setrealtimepush__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Setrealtimepush__ros_msg_type * ros_message = static_cast<_Setrealtimepush__ros_msg_type *>(untyped_ros_message);
  // Field name: cycle
  {
    cdr >> ros_message->cycle;
  }

  // Field name: port
  {
    cdr >> ros_message->port;
  }

  // Field name: force_coordinate
  {
    cdr >> ros_message->force_coordinate;
  }

  // Field name: ip
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->ip.data) {
      rosidl_runtime_c__String__init(&ros_message->ip);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->ip,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'ip'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rm_ros_interfaces
size_t get_serialized_size_rm_ros_interfaces__msg__Setrealtimepush(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Setrealtimepush__ros_msg_type * ros_message = static_cast<const _Setrealtimepush__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name cycle
  {
    size_t item_size = sizeof(ros_message->cycle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name port
  {
    size_t item_size = sizeof(ros_message->port);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name force_coordinate
  {
    size_t item_size = sizeof(ros_message->force_coordinate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ip
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->ip.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _Setrealtimepush__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_rm_ros_interfaces__msg__Setrealtimepush(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rm_ros_interfaces
size_t max_serialized_size_rm_ros_interfaces__msg__Setrealtimepush(
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

  // member: cycle
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: port
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: force_coordinate
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: ip
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = rm_ros_interfaces__msg__Setrealtimepush;
    is_plain =
      (
      offsetof(DataType, ip) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _Setrealtimepush__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_rm_ros_interfaces__msg__Setrealtimepush(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Setrealtimepush = {
  "rm_ros_interfaces::msg",
  "Setrealtimepush",
  _Setrealtimepush__cdr_serialize,
  _Setrealtimepush__cdr_deserialize,
  _Setrealtimepush__get_serialized_size,
  _Setrealtimepush__max_serialized_size
};

static rosidl_message_type_support_t _Setrealtimepush__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Setrealtimepush,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rm_ros_interfaces, msg, Setrealtimepush)() {
  return &_Setrealtimepush__type_support;
}

#if defined(__cplusplus)
}
#endif
