// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from legs:action/Movement.idl
// generated code does not contain a copyright notice

#ifndef LEGS__ACTION__DETAIL__MOVEMENT__BUILDER_HPP_
#define LEGS__ACTION__DETAIL__MOVEMENT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "legs/action/detail/movement__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace legs
{

namespace action
{

namespace builder
{

class Init_Movement_Goal_command
{
public:
  Init_Movement_Goal_command()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::legs::action::Movement_Goal command(::legs::action::Movement_Goal::_command_type arg)
  {
    msg_.command = std::move(arg);
    return std::move(msg_);
  }

private:
  ::legs::action::Movement_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::legs::action::Movement_Goal>()
{
  return legs::action::builder::Init_Movement_Goal_command();
}

}  // namespace legs


namespace legs
{

namespace action
{

namespace builder
{

class Init_Movement_Result_result
{
public:
  Init_Movement_Result_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::legs::action::Movement_Result result(::legs::action::Movement_Result::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::legs::action::Movement_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::legs::action::Movement_Result>()
{
  return legs::action::builder::Init_Movement_Result_result();
}

}  // namespace legs


namespace legs
{

namespace action
{

namespace builder
{

class Init_Movement_Feedback_feedback
{
public:
  Init_Movement_Feedback_feedback()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::legs::action::Movement_Feedback feedback(::legs::action::Movement_Feedback::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::legs::action::Movement_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::legs::action::Movement_Feedback>()
{
  return legs::action::builder::Init_Movement_Feedback_feedback();
}

}  // namespace legs


namespace legs
{

namespace action
{

namespace builder
{

class Init_Movement_SendGoal_Request_goal
{
public:
  explicit Init_Movement_SendGoal_Request_goal(::legs::action::Movement_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::legs::action::Movement_SendGoal_Request goal(::legs::action::Movement_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::legs::action::Movement_SendGoal_Request msg_;
};

class Init_Movement_SendGoal_Request_goal_id
{
public:
  Init_Movement_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Movement_SendGoal_Request_goal goal_id(::legs::action::Movement_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Movement_SendGoal_Request_goal(msg_);
  }

private:
  ::legs::action::Movement_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::legs::action::Movement_SendGoal_Request>()
{
  return legs::action::builder::Init_Movement_SendGoal_Request_goal_id();
}

}  // namespace legs


namespace legs
{

namespace action
{

namespace builder
{

class Init_Movement_SendGoal_Response_stamp
{
public:
  explicit Init_Movement_SendGoal_Response_stamp(::legs::action::Movement_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::legs::action::Movement_SendGoal_Response stamp(::legs::action::Movement_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::legs::action::Movement_SendGoal_Response msg_;
};

class Init_Movement_SendGoal_Response_accepted
{
public:
  Init_Movement_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Movement_SendGoal_Response_stamp accepted(::legs::action::Movement_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_Movement_SendGoal_Response_stamp(msg_);
  }

private:
  ::legs::action::Movement_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::legs::action::Movement_SendGoal_Response>()
{
  return legs::action::builder::Init_Movement_SendGoal_Response_accepted();
}

}  // namespace legs


namespace legs
{

namespace action
{

namespace builder
{

class Init_Movement_GetResult_Request_goal_id
{
public:
  Init_Movement_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::legs::action::Movement_GetResult_Request goal_id(::legs::action::Movement_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::legs::action::Movement_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::legs::action::Movement_GetResult_Request>()
{
  return legs::action::builder::Init_Movement_GetResult_Request_goal_id();
}

}  // namespace legs


namespace legs
{

namespace action
{

namespace builder
{

class Init_Movement_GetResult_Response_result
{
public:
  explicit Init_Movement_GetResult_Response_result(::legs::action::Movement_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::legs::action::Movement_GetResult_Response result(::legs::action::Movement_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::legs::action::Movement_GetResult_Response msg_;
};

class Init_Movement_GetResult_Response_status
{
public:
  Init_Movement_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Movement_GetResult_Response_result status(::legs::action::Movement_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_Movement_GetResult_Response_result(msg_);
  }

private:
  ::legs::action::Movement_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::legs::action::Movement_GetResult_Response>()
{
  return legs::action::builder::Init_Movement_GetResult_Response_status();
}

}  // namespace legs


namespace legs
{

namespace action
{

namespace builder
{

class Init_Movement_FeedbackMessage_feedback
{
public:
  explicit Init_Movement_FeedbackMessage_feedback(::legs::action::Movement_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::legs::action::Movement_FeedbackMessage feedback(::legs::action::Movement_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::legs::action::Movement_FeedbackMessage msg_;
};

class Init_Movement_FeedbackMessage_goal_id
{
public:
  Init_Movement_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Movement_FeedbackMessage_feedback goal_id(::legs::action::Movement_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Movement_FeedbackMessage_feedback(msg_);
  }

private:
  ::legs::action::Movement_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::legs::action::Movement_FeedbackMessage>()
{
  return legs::action::builder::Init_Movement_FeedbackMessage_goal_id();
}

}  // namespace legs

#endif  // LEGS__ACTION__DETAIL__MOVEMENT__BUILDER_HPP_
