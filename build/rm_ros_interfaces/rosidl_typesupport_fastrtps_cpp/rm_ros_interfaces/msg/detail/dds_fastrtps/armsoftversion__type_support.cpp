// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from rm_ros_interfaces:msg/Armsoftversion.idl
// generated code does not contain a copyright notice
#include "rm_ros_interfaces/msg/detail/armsoftversion__rosidl_typesupport_fastrtps_cpp.hpp"
#include "rm_ros_interfaces/msg/detail/armsoftversion__struct.hpp"

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
  const rm_ros_interfaces::msg::Armsoftversion & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: planversion
  cdr << ros_message.planversion;
  // Member: ctrlversion
  cdr << ros_message.ctrlversion;
  // Member: kernal1
  cdr << ros_message.kernal1;
  // Member: kernal2
  cdr << ros_message.kernal2;
  // Member: productversion
  cdr << ros_message.productversion;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rm_ros_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  rm_ros_interfaces::msg::Armsoftversion & ros_message)
{
  // Member: planversion
  cdr >> ros_message.planversion;

  // Member: ctrlversion
  cdr >> ros_message.ctrlversion;

  // Member: kernal1
  cdr >> ros_message.kernal1;

  // Member: kernal2
  cdr >> ros_message.kernal2;

  // Member: productversion
  cdr >> ros_message.productversion;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rm_ros_interfaces
get_serialized_size(
  const rm_ros_interfaces::msg::Armsoftversion & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: planversion
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.planversion.size() + 1);
  // Member: ctrlversion
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.ctrlversion.size() + 1);
  // Member: kernal1
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.kernal1.size() + 1);
  // Member: kernal2
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.kernal2.size() + 1);
  // Member: productversion
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.productversion.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rm_ros_interfaces
max_serialized_size_Armsoftversion(
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


  // Member: planversion
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

  // Member: ctrlversion
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

  // Member: kernal1
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

  // Member: kernal2
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

  // Member: productversion
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
    using DataType = rm_ros_interfaces::msg::Armsoftversion;
    is_plain =
      (
      offsetof(DataType, productversion) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _Armsoftversion__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const rm_ros_interfaces::msg::Armsoftversion *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Armsoftversion__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<rm_ros_interfaces::msg::Armsoftversion *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Armsoftversion__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const rm_ros_interfaces::msg::Armsoftversion *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Armsoftversion__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_Armsoftversion(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _Armsoftversion__callbacks = {
  "rm_ros_interfaces::msg",
  "Armsoftversion",
  _Armsoftversion__cdr_serialize,
  _Armsoftversion__cdr_deserialize,
  _Armsoftversion__get_serialized_size,
  _Armsoftversion__max_serialized_size
};

static rosidl_message_type_support_t _Armsoftversion__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Armsoftversion__callbacks,
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
get_message_type_support_handle<rm_ros_interfaces::msg::Armsoftversion>()
{
  return &rm_ros_interfaces::msg::typesupport_fastrtps_cpp::_Armsoftversion__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rm_ros_interfaces, msg, Armsoftversion)() {
  return &rm_ros_interfaces::msg::typesupport_fastrtps_cpp::_Armsoftversion__handle;
}

#ifdef __cplusplus
}
#endif
