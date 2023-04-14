// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from legs:action/Movement.idl
// generated code does not contain a copyright notice

#ifndef LEGS__ACTION__DETAIL__MOVEMENT__TRAITS_HPP_
#define LEGS__ACTION__DETAIL__MOVEMENT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "legs/action/detail/movement__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace legs
{

namespace action
{

inline void to_flow_style_yaml(
  const Movement_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: command
  {
    out << "command: ";
    rosidl_generator_traits::value_to_yaml(msg.command, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Movement_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: command
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "command: ";
    rosidl_generator_traits::value_to_yaml(msg.command, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Movement_Goal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace legs

namespace rosidl_generator_traits
{

[[deprecated("use legs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const legs::action::Movement_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  legs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use legs::action::to_yaml() instead")]]
inline std::string to_yaml(const legs::action::Movement_Goal & msg)
{
  return legs::action::to_yaml(msg);
}

template<>
inline const char * data_type<legs::action::Movement_Goal>()
{
  return "legs::action::Movement_Goal";
}

template<>
inline const char * name<legs::action::Movement_Goal>()
{
  return "legs/action/Movement_Goal";
}

template<>
struct has_fixed_size<legs::action::Movement_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<legs::action::Movement_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<legs::action::Movement_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace legs
{

namespace action
{

inline void to_flow_style_yaml(
  const Movement_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: result
  {
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Movement_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Movement_Result & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace legs

namespace rosidl_generator_traits
{

[[deprecated("use legs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const legs::action::Movement_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  legs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use legs::action::to_yaml() instead")]]
inline std::string to_yaml(const legs::action::Movement_Result & msg)
{
  return legs::action::to_yaml(msg);
}

template<>
inline const char * data_type<legs::action::Movement_Result>()
{
  return "legs::action::Movement_Result";
}

template<>
inline const char * name<legs::action::Movement_Result>()
{
  return "legs/action/Movement_Result";
}

template<>
struct has_fixed_size<legs::action::Movement_Result>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<legs::action::Movement_Result>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<legs::action::Movement_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace legs
{

namespace action
{

inline void to_flow_style_yaml(
  const Movement_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: feedback
  {
    out << "feedback: ";
    rosidl_generator_traits::value_to_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Movement_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback: ";
    rosidl_generator_traits::value_to_yaml(msg.feedback, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Movement_Feedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace legs

namespace rosidl_generator_traits
{

[[deprecated("use legs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const legs::action::Movement_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  legs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use legs::action::to_yaml() instead")]]
inline std::string to_yaml(const legs::action::Movement_Feedback & msg)
{
  return legs::action::to_yaml(msg);
}

template<>
inline const char * data_type<legs::action::Movement_Feedback>()
{
  return "legs::action::Movement_Feedback";
}

template<>
inline const char * name<legs::action::Movement_Feedback>()
{
  return "legs/action/Movement_Feedback";
}

template<>
struct has_fixed_size<legs::action::Movement_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<legs::action::Movement_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<legs::action::Movement_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "legs/action/detail/movement__traits.hpp"

namespace legs
{

namespace action
{

inline void to_flow_style_yaml(
  const Movement_SendGoal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Movement_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Movement_SendGoal_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace legs

namespace rosidl_generator_traits
{

[[deprecated("use legs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const legs::action::Movement_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  legs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use legs::action::to_yaml() instead")]]
inline std::string to_yaml(const legs::action::Movement_SendGoal_Request & msg)
{
  return legs::action::to_yaml(msg);
}

template<>
inline const char * data_type<legs::action::Movement_SendGoal_Request>()
{
  return "legs::action::Movement_SendGoal_Request";
}

template<>
inline const char * name<legs::action::Movement_SendGoal_Request>()
{
  return "legs/action/Movement_SendGoal_Request";
}

template<>
struct has_fixed_size<legs::action::Movement_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<legs::action::Movement_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<legs::action::Movement_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<legs::action::Movement_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<legs::action::Movement_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace legs
{

namespace action
{

inline void to_flow_style_yaml(
  const Movement_SendGoal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Movement_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Movement_SendGoal_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace legs

namespace rosidl_generator_traits
{

[[deprecated("use legs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const legs::action::Movement_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  legs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use legs::action::to_yaml() instead")]]
inline std::string to_yaml(const legs::action::Movement_SendGoal_Response & msg)
{
  return legs::action::to_yaml(msg);
}

template<>
inline const char * data_type<legs::action::Movement_SendGoal_Response>()
{
  return "legs::action::Movement_SendGoal_Response";
}

template<>
inline const char * name<legs::action::Movement_SendGoal_Response>()
{
  return "legs/action/Movement_SendGoal_Response";
}

template<>
struct has_fixed_size<legs::action::Movement_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<legs::action::Movement_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<legs::action::Movement_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<legs::action::Movement_SendGoal>()
{
  return "legs::action::Movement_SendGoal";
}

template<>
inline const char * name<legs::action::Movement_SendGoal>()
{
  return "legs/action/Movement_SendGoal";
}

template<>
struct has_fixed_size<legs::action::Movement_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<legs::action::Movement_SendGoal_Request>::value &&
    has_fixed_size<legs::action::Movement_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<legs::action::Movement_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<legs::action::Movement_SendGoal_Request>::value &&
    has_bounded_size<legs::action::Movement_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<legs::action::Movement_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<legs::action::Movement_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<legs::action::Movement_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace legs
{

namespace action
{

inline void to_flow_style_yaml(
  const Movement_GetResult_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Movement_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Movement_GetResult_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace legs

namespace rosidl_generator_traits
{

[[deprecated("use legs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const legs::action::Movement_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  legs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use legs::action::to_yaml() instead")]]
inline std::string to_yaml(const legs::action::Movement_GetResult_Request & msg)
{
  return legs::action::to_yaml(msg);
}

template<>
inline const char * data_type<legs::action::Movement_GetResult_Request>()
{
  return "legs::action::Movement_GetResult_Request";
}

template<>
inline const char * name<legs::action::Movement_GetResult_Request>()
{
  return "legs/action/Movement_GetResult_Request";
}

template<>
struct has_fixed_size<legs::action::Movement_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<legs::action::Movement_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<legs::action::Movement_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "legs/action/detail/movement__traits.hpp"

namespace legs
{

namespace action
{

inline void to_flow_style_yaml(
  const Movement_GetResult_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Movement_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Movement_GetResult_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace legs

namespace rosidl_generator_traits
{

[[deprecated("use legs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const legs::action::Movement_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  legs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use legs::action::to_yaml() instead")]]
inline std::string to_yaml(const legs::action::Movement_GetResult_Response & msg)
{
  return legs::action::to_yaml(msg);
}

template<>
inline const char * data_type<legs::action::Movement_GetResult_Response>()
{
  return "legs::action::Movement_GetResult_Response";
}

template<>
inline const char * name<legs::action::Movement_GetResult_Response>()
{
  return "legs/action/Movement_GetResult_Response";
}

template<>
struct has_fixed_size<legs::action::Movement_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<legs::action::Movement_Result>::value> {};

template<>
struct has_bounded_size<legs::action::Movement_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<legs::action::Movement_Result>::value> {};

template<>
struct is_message<legs::action::Movement_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<legs::action::Movement_GetResult>()
{
  return "legs::action::Movement_GetResult";
}

template<>
inline const char * name<legs::action::Movement_GetResult>()
{
  return "legs/action/Movement_GetResult";
}

template<>
struct has_fixed_size<legs::action::Movement_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<legs::action::Movement_GetResult_Request>::value &&
    has_fixed_size<legs::action::Movement_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<legs::action::Movement_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<legs::action::Movement_GetResult_Request>::value &&
    has_bounded_size<legs::action::Movement_GetResult_Response>::value
  >
{
};

template<>
struct is_service<legs::action::Movement_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<legs::action::Movement_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<legs::action::Movement_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "legs/action/detail/movement__traits.hpp"

namespace legs
{

namespace action
{

inline void to_flow_style_yaml(
  const Movement_FeedbackMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: feedback
  {
    out << "feedback: ";
    to_flow_style_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Movement_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_block_style_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Movement_FeedbackMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace legs

namespace rosidl_generator_traits
{

[[deprecated("use legs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const legs::action::Movement_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  legs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use legs::action::to_yaml() instead")]]
inline std::string to_yaml(const legs::action::Movement_FeedbackMessage & msg)
{
  return legs::action::to_yaml(msg);
}

template<>
inline const char * data_type<legs::action::Movement_FeedbackMessage>()
{
  return "legs::action::Movement_FeedbackMessage";
}

template<>
inline const char * name<legs::action::Movement_FeedbackMessage>()
{
  return "legs/action/Movement_FeedbackMessage";
}

template<>
struct has_fixed_size<legs::action::Movement_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<legs::action::Movement_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<legs::action::Movement_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<legs::action::Movement_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<legs::action::Movement_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<legs::action::Movement>
  : std::true_type
{
};

template<>
struct is_action_goal<legs::action::Movement_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<legs::action::Movement_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<legs::action::Movement_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // LEGS__ACTION__DETAIL__MOVEMENT__TRAITS_HPP_
