// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from rm_ros_interfaces:msg/Armsoftversion.idl
// generated code does not contain a copyright notice
#include "rm_ros_interfaces/msg/detail/armsoftversion__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rm_ros_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "rm_ros_interfaces/msg/detail/armsoftversion__struct.h"
#include "rm_ros_interfaces/msg/detail/armsoftversion__functions.h"
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

#include "rosidl_runtime_c/string.h"  // ctrlversion, kernal1, kernal2, planversion, productversion
#include "rosidl_runtime_c/string_functions.h"  // ctrlversion, kernal1, kernal2, planversion, productversion

// forward declare type support functions


using _Armsoftversion__ros_msg_type = rm_ros_interfaces__msg__Armsoftversion;

static bool _Armsoftversion__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Armsoftversion__ros_msg_type * ros_message = static_cast<const _Armsoftversion__ros_msg_type *>(untyped_ros_message);
  // Field name: planversion
  {
    const rosidl_runtime_c__String * str = &ros_message->planversion;
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

  // Field name: ctrlversion
  {
    const rosidl_runtime_c__String * str = &ros_message->ctrlversion;
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

  // Field name: kernal1
  {
    const rosidl_runtime_c__String * str = &ros_message->kernal1;
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

  // Field name: kernal2
  {
    const rosidl_runtime_c__String * str = &ros_message->kernal2;
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

  // Field name: productversion
  {
    const rosidl_runtime_c__String * str = &ros_message->productversion;
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

static bool _Armsoftversion__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Armsoftversion__ros_msg_type * ros_message = static_cast<_Armsoftversion__ros_msg_type *>(untyped_ros_message);
  // Field name: planversion
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->planversion.data) {
      rosidl_runtime_c__String__init(&ros_message->planversion);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->planversion,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'planversion'\n");
      return false;
    }
  }

  // Field name: ctrlversion
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->ctrlversion.data) {
      rosidl_runtime_c__String__init(&ros_message->ctrlversion);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->ctrlversion,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'ctrlversion'\n");
      return false;
    }
  }

  // Field name: kernal1
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->kernal1.data) {
      rosidl_runtime_c__String__init(&ros_message->kernal1);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->kernal1,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'kernal1'\n");
      return false;
    }
  }

  // Field name: kernal2
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->kernal2.data) {
      rosidl_runtime_c__String__init(&ros_message->kernal2);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->kernal2,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'kernal2'\n");
      return false;
    }
  }

  // Field name: productversion
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->productversion.data) {
      rosidl_runtime_c__String__init(&ros_message->productversion);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->productversion,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'productversion'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rm_ros_interfaces
size_t get_serialized_size_rm_ros_interfaces__msg__Armsoftversion(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Armsoftversion__ros_msg_type * ros_message = static_cast<const _Armsoftversion__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name planversion
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->planversion.size + 1);
  // field.name ctrlversion
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->ctrlversion.size + 1);
  // field.name kernal1
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->kernal1.size + 1);
  // field.name kernal2
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->kernal2.size + 1);
  // field.name productversion
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->productversion.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _Armsoftversion__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_rm_ros_interfaces__msg__Armsoftversion(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rm_ros_interfaces
size_t max_serialized_size_rm_ros_interfaces__msg__Armsoftversion(
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

  // member: planversion
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
  // member: ctrlversion
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
  // member: kernal1
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
  // member: kernal2
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
  // member: productversion
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
    using DataType = rm_ros_interfaces__msg__Armsoftversion;
    is_plain =
      (
      offsetof(DataType, productversion) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _Armsoftversion__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_rm_ros_interfaces__msg__Armsoftversion(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Armsoftversion = {
  "rm_ros_interfaces::msg",
  "Armsoftversion",
  _Armsoftversion__cdr_serialize,
  _Armsoftversion__cdr_deserialize,
  _Armsoftversion__get_serialized_size,
  _Armsoftversion__max_serialized_size
};

static rosidl_message_type_support_t _Armsoftversion__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Armsoftversion,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rm_ros_interfaces, msg, Armsoftversion)() {
  return &_Armsoftversion__type_support;
}

#if defined(__cplusplus)
}
#endif
