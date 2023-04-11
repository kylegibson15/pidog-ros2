// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces:srv/ComponentStatus.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__SRV__DETAIL__COMPONENT_STATUS__BUILDER_HPP_
#define INTERFACES__SRV__DETAIL__COMPONENT_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interfaces/srv/detail/component_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interfaces
{

namespace srv
{

namespace builder
{

class Init_ComponentStatus_Request_component
{
public:
  Init_ComponentStatus_Request_component()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::interfaces::srv::ComponentStatus_Request component(::interfaces::srv::ComponentStatus_Request::_component_type arg)
  {
    msg_.component = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::srv::ComponentStatus_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::srv::ComponentStatus_Request>()
{
  return interfaces::srv::builder::Init_ComponentStatus_Request_component();
}

}  // namespace interfaces


namespace interfaces
{

namespace srv
{

namespace builder
{

class Init_ComponentStatus_Response_status
{
public:
  Init_ComponentStatus_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::interfaces::srv::ComponentStatus_Response status(::interfaces::srv::ComponentStatus_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::srv::ComponentStatus_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::srv::ComponentStatus_Response>()
{
  return interfaces::srv::builder::Init_ComponentStatus_Response_status();
}

}  // namespace interfaces

#endif  // INTERFACES__SRV__DETAIL__COMPONENT_STATUS__BUILDER_HPP_
