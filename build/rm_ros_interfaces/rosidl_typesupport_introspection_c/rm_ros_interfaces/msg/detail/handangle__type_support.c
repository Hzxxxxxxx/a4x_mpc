// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rm_ros_interfaces:msg/Handangle.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rm_ros_interfaces/msg/detail/handangle__rosidl_typesupport_introspection_c.h"
#include "rm_ros_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rm_ros_interfaces/msg/detail/handangle__functions.h"
#include "rm_ros_interfaces/msg/detail/handangle__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void rm_ros_interfaces__msg__Handangle__rosidl_typesupport_introspection_c__Handangle_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rm_ros_interfaces__msg__Handangle__init(message_memory);
}

void rm_ros_interfaces__msg__Handangle__rosidl_typesupport_introspection_c__Handangle_fini_function(void * message_memory)
{
  rm_ros_interfaces__msg__Handangle__fini(message_memory);
}

size_t rm_ros_interfaces__msg__Handangle__rosidl_typesupport_introspection_c__size_function__Handangle__hand_angle(
  const void * untyped_member)
{
  (void)untyped_member;
  return 6;
}

const void * rm_ros_interfaces__msg__Handangle__rosidl_typesupport_introspection_c__get_const_function__Handangle__hand_angle(
  const void * untyped_member, size_t index)
{
  const int16_t * member =
    (const int16_t *)(untyped_member);
  return &member[index];
}

void * rm_ros_interfaces__msg__Handangle__rosidl_typesupport_introspection_c__get_function__Handangle__hand_angle(
  void * untyped_member, size_t index)
{
  int16_t * member =
    (int16_t *)(untyped_member);
  return &member[index];
}

void rm_ros_interfaces__msg__Handangle__rosidl_typesupport_introspection_c__fetch_function__Handangle__hand_angle(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int16_t * item =
    ((const int16_t *)
    rm_ros_interfaces__msg__Handangle__rosidl_typesupport_introspection_c__get_const_function__Handangle__hand_angle(untyped_member, index));
  int16_t * value =
    (int16_t *)(untyped_value);
  *value = *item;
}

void rm_ros_interfaces__msg__Handangle__rosidl_typesupport_introspection_c__assign_function__Handangle__hand_angle(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int16_t * item =
    ((int16_t *)
    rm_ros_interfaces__msg__Handangle__rosidl_typesupport_introspection_c__get_function__Handangle__hand_angle(untyped_member, index));
  const int16_t * value =
    (const int16_t *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember rm_ros_interfaces__msg__Handangle__rosidl_typesupport_introspection_c__Handangle_message_member_array[2] = {
  {
    "hand_angle",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    6,  // array size
    false,  // is upper bound
    offsetof(rm_ros_interfaces__msg__Handangle, hand_angle),  // bytes offset in struct
    NULL,  // default value
    rm_ros_interfaces__msg__Handangle__rosidl_typesupport_introspection_c__size_function__Handangle__hand_angle,  // size() function pointer
    rm_ros_interfaces__msg__Handangle__rosidl_typesupport_introspection_c__get_const_function__Handangle__hand_angle,  // get_const(index) function pointer
    rm_ros_interfaces__msg__Handangle__rosidl_typesupport_introspection_c__get_function__Handangle__hand_angle,  // get(index) function pointer
    rm_ros_interfaces__msg__Handangle__rosidl_typesupport_introspection_c__fetch_function__Handangle__hand_angle,  // fetch(index, &value) function pointer
    rm_ros_interfaces__msg__Handangle__rosidl_typesupport_introspection_c__assign_function__Handangle__hand_angle,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "block",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rm_ros_interfaces__msg__Handangle, block),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers rm_ros_interfaces__msg__Handangle__rosidl_typesupport_introspection_c__Handangle_message_members = {
  "rm_ros_interfaces__msg",  // message namespace
  "Handangle",  // message name
  2,  // number of fields
  sizeof(rm_ros_interfaces__msg__Handangle),
  rm_ros_interfaces__msg__Handangle__rosidl_typesupport_introspection_c__Handangle_message_member_array,  // message members
  rm_ros_interfaces__msg__Handangle__rosidl_typesupport_introspection_c__Handangle_init_function,  // function to initialize message memory (memory has to be allocated)
  rm_ros_interfaces__msg__Handangle__rosidl_typesupport_introspection_c__Handangle_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t rm_ros_interfaces__msg__Handangle__rosidl_typesupport_introspection_c__Handangle_message_type_support_handle = {
  0,
  &rm_ros_interfaces__msg__Handangle__rosidl_typesupport_introspection_c__Handangle_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rm_ros_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rm_ros_interfaces, msg, Handangle)() {
  if (!rm_ros_interfaces__msg__Handangle__rosidl_typesupport_introspection_c__Handangle_message_type_support_handle.typesupport_identifier) {
    rm_ros_interfaces__msg__Handangle__rosidl_typesupport_introspection_c__Handangle_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &rm_ros_interfaces__msg__Handangle__rosidl_typesupport_introspection_c__Handangle_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
