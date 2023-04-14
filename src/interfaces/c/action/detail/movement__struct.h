// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from legs:action/Movement.idl
// generated code does not contain a copyright notice

#ifndef LEGS__ACTION__DETAIL__MOVEMENT__STRUCT_H_
#define LEGS__ACTION__DETAIL__MOVEMENT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'command'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/Movement in the package legs.
typedef struct legs__action__Movement_Goal
{
  rosidl_runtime_c__String command;
} legs__action__Movement_Goal;

// Struct for a sequence of legs__action__Movement_Goal.
typedef struct legs__action__Movement_Goal__Sequence
{
  legs__action__Movement_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} legs__action__Movement_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/Movement in the package legs.
typedef struct legs__action__Movement_Result
{
  rosidl_runtime_c__String result;
} legs__action__Movement_Result;

// Struct for a sequence of legs__action__Movement_Result.
typedef struct legs__action__Movement_Result__Sequence
{
  legs__action__Movement_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} legs__action__Movement_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'feedback'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/Movement in the package legs.
typedef struct legs__action__Movement_Feedback
{
  rosidl_runtime_c__String feedback;
} legs__action__Movement_Feedback;

// Struct for a sequence of legs__action__Movement_Feedback.
typedef struct legs__action__Movement_Feedback__Sequence
{
  legs__action__Movement_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} legs__action__Movement_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "legs/action/detail/movement__struct.h"

/// Struct defined in action/Movement in the package legs.
typedef struct legs__action__Movement_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  legs__action__Movement_Goal goal;
} legs__action__Movement_SendGoal_Request;

// Struct for a sequence of legs__action__Movement_SendGoal_Request.
typedef struct legs__action__Movement_SendGoal_Request__Sequence
{
  legs__action__Movement_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} legs__action__Movement_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/Movement in the package legs.
typedef struct legs__action__Movement_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} legs__action__Movement_SendGoal_Response;

// Struct for a sequence of legs__action__Movement_SendGoal_Response.
typedef struct legs__action__Movement_SendGoal_Response__Sequence
{
  legs__action__Movement_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} legs__action__Movement_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/Movement in the package legs.
typedef struct legs__action__Movement_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} legs__action__Movement_GetResult_Request;

// Struct for a sequence of legs__action__Movement_GetResult_Request.
typedef struct legs__action__Movement_GetResult_Request__Sequence
{
  legs__action__Movement_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} legs__action__Movement_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "legs/action/detail/movement__struct.h"

/// Struct defined in action/Movement in the package legs.
typedef struct legs__action__Movement_GetResult_Response
{
  int8_t status;
  legs__action__Movement_Result result;
} legs__action__Movement_GetResult_Response;

// Struct for a sequence of legs__action__Movement_GetResult_Response.
typedef struct legs__action__Movement_GetResult_Response__Sequence
{
  legs__action__Movement_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} legs__action__Movement_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "legs/action/detail/movement__struct.h"

/// Struct defined in action/Movement in the package legs.
typedef struct legs__action__Movement_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  legs__action__Movement_Feedback feedback;
} legs__action__Movement_FeedbackMessage;

// Struct for a sequence of legs__action__Movement_FeedbackMessage.
typedef struct legs__action__Movement_FeedbackMessage__Sequence
{
  legs__action__Movement_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} legs__action__Movement_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LEGS__ACTION__DETAIL__MOVEMENT__STRUCT_H_
