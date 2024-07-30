// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from rm_ros_interfaces:msg/Movel.idl
// generated code does not contain a copyright notice

#ifndef RM_ROS_INTERFACES__MSG__DETAIL__MOVEL__FUNCTIONS_H_
#define RM_ROS_INTERFACES__MSG__DETAIL__MOVEL__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "rm_ros_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "rm_ros_interfaces/msg/detail/movel__struct.h"

/// Initialize msg/Movel message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * rm_ros_interfaces__msg__Movel
 * )) before or use
 * rm_ros_interfaces__msg__Movel__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_rm_ros_interfaces
bool
rm_ros_interfaces__msg__Movel__init(rm_ros_interfaces__msg__Movel * msg);

/// Finalize msg/Movel message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rm_ros_interfaces
void
rm_ros_interfaces__msg__Movel__fini(rm_ros_interfaces__msg__Movel * msg);

/// Create msg/Movel message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * rm_ros_interfaces__msg__Movel__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rm_ros_interfaces
rm_ros_interfaces__msg__Movel *
rm_ros_interfaces__msg__Movel__create();

/// Destroy msg/Movel message.
/**
 * It calls
 * rm_ros_interfaces__msg__Movel__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rm_ros_interfaces
void
rm_ros_interfaces__msg__Movel__destroy(rm_ros_interfaces__msg__Movel * msg);

/// Check for msg/Movel message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rm_ros_interfaces
bool
rm_ros_interfaces__msg__Movel__are_equal(const rm_ros_interfaces__msg__Movel * lhs, const rm_ros_interfaces__msg__Movel * rhs);

/// Copy a msg/Movel message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_rm_ros_interfaces
bool
rm_ros_interfaces__msg__Movel__copy(
  const rm_ros_interfaces__msg__Movel * input,
  rm_ros_interfaces__msg__Movel * output);

/// Initialize array of msg/Movel messages.
/**
 * It allocates the memory for the number of elements and calls
 * rm_ros_interfaces__msg__Movel__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_rm_ros_interfaces
bool
rm_ros_interfaces__msg__Movel__Sequence__init(rm_ros_interfaces__msg__Movel__Sequence * array, size_t size);

/// Finalize array of msg/Movel messages.
/**
 * It calls
 * rm_ros_interfaces__msg__Movel__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rm_ros_interfaces
void
rm_ros_interfaces__msg__Movel__Sequence__fini(rm_ros_interfaces__msg__Movel__Sequence * array);

/// Create array of msg/Movel messages.
/**
 * It allocates the memory for the array and calls
 * rm_ros_interfaces__msg__Movel__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rm_ros_interfaces
rm_ros_interfaces__msg__Movel__Sequence *
rm_ros_interfaces__msg__Movel__Sequence__create(size_t size);

/// Destroy array of msg/Movel messages.
/**
 * It calls
 * rm_ros_interfaces__msg__Movel__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rm_ros_interfaces
void
rm_ros_interfaces__msg__Movel__Sequence__destroy(rm_ros_interfaces__msg__Movel__Sequence * array);

/// Check for msg/Movel message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rm_ros_interfaces
bool
rm_ros_interfaces__msg__Movel__Sequence__are_equal(const rm_ros_interfaces__msg__Movel__Sequence * lhs, const rm_ros_interfaces__msg__Movel__Sequence * rhs);

/// Copy an array of msg/Movel messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_rm_ros_interfaces
bool
rm_ros_interfaces__msg__Movel__Sequence__copy(
  const rm_ros_interfaces__msg__Movel__Sequence * input,
  rm_ros_interfaces__msg__Movel__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // RM_ROS_INTERFACES__MSG__DETAIL__MOVEL__FUNCTIONS_H_
