// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interfaces:srv/ComponentStatus.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__SRV__DETAIL__COMPONENT_STATUS__STRUCT_H_
#define INTERFACES__SRV__DETAIL__COMPONENT_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'component'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/ComponentStatus in the package interfaces.
typedef struct interfaces__srv__ComponentStatus_Request
{
  rosidl_runtime_c__String component;
} interfaces__srv__ComponentStatus_Request;

// Struct for a sequence of interfaces__srv__ComponentStatus_Request.
typedef struct interfaces__srv__ComponentStatus_Request__Sequence
{
  interfaces__srv__ComponentStatus_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__srv__ComponentStatus_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'status'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/ComponentStatus in the package interfaces.
typedef struct interfaces__srv__ComponentStatus_Response
{
  rosidl_runtime_c__String status;
} interfaces__srv__ComponentStatus_Response;

// Struct for a sequence of interfaces__srv__ComponentStatus_Response.
typedef struct interfaces__srv__ComponentStatus_Response__Sequence
{
  interfaces__srv__ComponentStatus_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__srv__ComponentStatus_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACES__SRV__DETAIL__COMPONENT_STATUS__STRUCT_H_
