// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rm_ros_interfaces:msg/Jointerrclear.idl
// generated code does not contain a copyright notice

#ifndef RM_ROS_INTERFACES__MSG__DETAIL__JOINTERRCLEAR__STRUCT_HPP_
#define RM_ROS_INTERFACES__MSG__DETAIL__JOINTERRCLEAR__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__rm_ros_interfaces__msg__Jointerrclear __attribute__((deprecated))
#else
# define DEPRECATED__rm_ros_interfaces__msg__Jointerrclear __declspec(deprecated)
#endif

namespace rm_ros_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Jointerrclear_
{
  using Type = Jointerrclear_<ContainerAllocator>;

  explicit Jointerrclear_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->joint_num = 0;
      this->block = false;
    }
  }

  explicit Jointerrclear_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->joint_num = 0;
      this->block = false;
    }
  }

  // field types and members
  using _joint_num_type =
    uint8_t;
  _joint_num_type joint_num;
  using _block_type =
    bool;
  _block_type block;

  // setters for named parameter idiom
  Type & set__joint_num(
    const uint8_t & _arg)
  {
    this->joint_num = _arg;
    return *this;
  }
  Type & set__block(
    const bool & _arg)
  {
    this->block = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rm_ros_interfaces::msg::Jointerrclear_<ContainerAllocator> *;
  using ConstRawPtr =
    const rm_ros_interfaces::msg::Jointerrclear_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rm_ros_interfaces::msg::Jointerrclear_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rm_ros_interfaces::msg::Jointerrclear_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rm_ros_interfaces::msg::Jointerrclear_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rm_ros_interfaces::msg::Jointerrclear_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rm_ros_interfaces::msg::Jointerrclear_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rm_ros_interfaces::msg::Jointerrclear_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rm_ros_interfaces::msg::Jointerrclear_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rm_ros_interfaces::msg::Jointerrclear_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rm_ros_interfaces__msg__Jointerrclear
    std::shared_ptr<rm_ros_interfaces::msg::Jointerrclear_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rm_ros_interfaces__msg__Jointerrclear
    std::shared_ptr<rm_ros_interfaces::msg::Jointerrclear_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Jointerrclear_ & other) const
  {
    if (this->joint_num != other.joint_num) {
      return false;
    }
    if (this->block != other.block) {
      return false;
    }
    return true;
  }
  bool operator!=(const Jointerrclear_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Jointerrclear_

// alias to use template instance with default allocator
using Jointerrclear =
  rm_ros_interfaces::msg::Jointerrclear_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rm_ros_interfaces

#endif  // RM_ROS_INTERFACES__MSG__DETAIL__JOINTERRCLEAR__STRUCT_HPP_
