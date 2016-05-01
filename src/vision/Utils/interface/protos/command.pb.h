// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: command.proto

#ifndef PROTOBUF_command_2eproto__INCLUDED
#define PROTOBUF_command_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3000000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3000000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace vss_command {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_command_2eproto();
void protobuf_AssignDesc_command_2eproto();
void protobuf_ShutdownFile_command_2eproto();

class Global_Commands;
class Robot_Command;

// ===================================================================

class Robot_Command : public ::google::protobuf::Message {
 public:
  Robot_Command();
  virtual ~Robot_Command();

  Robot_Command(const Robot_Command& from);

  inline Robot_Command& operator=(const Robot_Command& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Robot_Command& default_instance();

  void Swap(Robot_Command* other);

  // implements Message ----------------------------------------------

  inline Robot_Command* New() const { return New(NULL); }

  Robot_Command* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Robot_Command& from);
  void MergeFrom(const Robot_Command& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(Robot_Command* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required uint32 id = 1;
  bool has_id() const;
  void clear_id();
  static const int kIdFieldNumber = 1;
  ::google::protobuf::uint32 id() const;
  void set_id(::google::protobuf::uint32 value);

  // required float left_vel = 2;
  bool has_left_vel() const;
  void clear_left_vel();
  static const int kLeftVelFieldNumber = 2;
  float left_vel() const;
  void set_left_vel(float value);

  // required float right_vel = 3;
  bool has_right_vel() const;
  void clear_right_vel();
  static const int kRightVelFieldNumber = 3;
  float right_vel() const;
  void set_right_vel(float value);

  // @@protoc_insertion_point(class_scope:vss_command.Robot_Command)
 private:
  inline void set_has_id();
  inline void clear_has_id();
  inline void set_has_left_vel();
  inline void clear_has_left_vel();
  inline void set_has_right_vel();
  inline void clear_has_right_vel();

  // helper for ByteSize()
  int RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::uint32 id_;
  float left_vel_;
  float right_vel_;
  friend void  protobuf_AddDesc_command_2eproto();
  friend void protobuf_AssignDesc_command_2eproto();
  friend void protobuf_ShutdownFile_command_2eproto();

  void InitAsDefaultInstance();
  static Robot_Command* default_instance_;
};
// -------------------------------------------------------------------

class Global_Commands : public ::google::protobuf::Message {
 public:
  Global_Commands();
  virtual ~Global_Commands();

  Global_Commands(const Global_Commands& from);

  inline Global_Commands& operator=(const Global_Commands& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Global_Commands& default_instance();

  void Swap(Global_Commands* other);

  // implements Message ----------------------------------------------

  inline Global_Commands* New() const { return New(NULL); }

  Global_Commands* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Global_Commands& from);
  void MergeFrom(const Global_Commands& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(Global_Commands* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional uint32 id = 1;
  bool has_id() const;
  void clear_id();
  static const int kIdFieldNumber = 1;
  ::google::protobuf::uint32 id() const;
  void set_id(::google::protobuf::uint32 value);

  // required bool is_team_yellow = 2;
  bool has_is_team_yellow() const;
  void clear_is_team_yellow();
  static const int kIsTeamYellowFieldNumber = 2;
  bool is_team_yellow() const;
  void set_is_team_yellow(bool value);

  // repeated .vss_command.Robot_Command robot_commands = 3;
  int robot_commands_size() const;
  void clear_robot_commands();
  static const int kRobotCommandsFieldNumber = 3;
  const ::vss_command::Robot_Command& robot_commands(int index) const;
  ::vss_command::Robot_Command* mutable_robot_commands(int index);
  ::vss_command::Robot_Command* add_robot_commands();
  ::google::protobuf::RepeatedPtrField< ::vss_command::Robot_Command >*
      mutable_robot_commands();
  const ::google::protobuf::RepeatedPtrField< ::vss_command::Robot_Command >&
      robot_commands() const;

  // @@protoc_insertion_point(class_scope:vss_command.Global_Commands)
 private:
  inline void set_has_id();
  inline void clear_has_id();
  inline void set_has_is_team_yellow();
  inline void clear_has_is_team_yellow();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::uint32 id_;
  bool is_team_yellow_;
  ::google::protobuf::RepeatedPtrField< ::vss_command::Robot_Command > robot_commands_;
  friend void  protobuf_AddDesc_command_2eproto();
  friend void protobuf_AssignDesc_command_2eproto();
  friend void protobuf_ShutdownFile_command_2eproto();

  void InitAsDefaultInstance();
  static Global_Commands* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// Robot_Command

// required uint32 id = 1;
inline bool Robot_Command::has_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Robot_Command::set_has_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Robot_Command::clear_has_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Robot_Command::clear_id() {
  id_ = 0u;
  clear_has_id();
}
inline ::google::protobuf::uint32 Robot_Command::id() const {
  // @@protoc_insertion_point(field_get:vss_command.Robot_Command.id)
  return id_;
}
inline void Robot_Command::set_id(::google::protobuf::uint32 value) {
  set_has_id();
  id_ = value;
  // @@protoc_insertion_point(field_set:vss_command.Robot_Command.id)
}

// required float left_vel = 2;
inline bool Robot_Command::has_left_vel() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Robot_Command::set_has_left_vel() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Robot_Command::clear_has_left_vel() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Robot_Command::clear_left_vel() {
  left_vel_ = 0;
  clear_has_left_vel();
}
inline float Robot_Command::left_vel() const {
  // @@protoc_insertion_point(field_get:vss_command.Robot_Command.left_vel)
  return left_vel_;
}
inline void Robot_Command::set_left_vel(float value) {
  set_has_left_vel();
  left_vel_ = value;
  // @@protoc_insertion_point(field_set:vss_command.Robot_Command.left_vel)
}

// required float right_vel = 3;
inline bool Robot_Command::has_right_vel() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Robot_Command::set_has_right_vel() {
  _has_bits_[0] |= 0x00000004u;
}
inline void Robot_Command::clear_has_right_vel() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void Robot_Command::clear_right_vel() {
  right_vel_ = 0;
  clear_has_right_vel();
}
inline float Robot_Command::right_vel() const {
  // @@protoc_insertion_point(field_get:vss_command.Robot_Command.right_vel)
  return right_vel_;
}
inline void Robot_Command::set_right_vel(float value) {
  set_has_right_vel();
  right_vel_ = value;
  // @@protoc_insertion_point(field_set:vss_command.Robot_Command.right_vel)
}

// -------------------------------------------------------------------

// Global_Commands

// optional uint32 id = 1;
inline bool Global_Commands::has_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Global_Commands::set_has_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Global_Commands::clear_has_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Global_Commands::clear_id() {
  id_ = 0u;
  clear_has_id();
}
inline ::google::protobuf::uint32 Global_Commands::id() const {
  // @@protoc_insertion_point(field_get:vss_command.Global_Commands.id)
  return id_;
}
inline void Global_Commands::set_id(::google::protobuf::uint32 value) {
  set_has_id();
  id_ = value;
  // @@protoc_insertion_point(field_set:vss_command.Global_Commands.id)
}

// required bool is_team_yellow = 2;
inline bool Global_Commands::has_is_team_yellow() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Global_Commands::set_has_is_team_yellow() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Global_Commands::clear_has_is_team_yellow() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Global_Commands::clear_is_team_yellow() {
  is_team_yellow_ = false;
  clear_has_is_team_yellow();
}
inline bool Global_Commands::is_team_yellow() const {
  // @@protoc_insertion_point(field_get:vss_command.Global_Commands.is_team_yellow)
  return is_team_yellow_;
}
inline void Global_Commands::set_is_team_yellow(bool value) {
  set_has_is_team_yellow();
  is_team_yellow_ = value;
  // @@protoc_insertion_point(field_set:vss_command.Global_Commands.is_team_yellow)
}

// repeated .vss_command.Robot_Command robot_commands = 3;
inline int Global_Commands::robot_commands_size() const {
  return robot_commands_.size();
}
inline void Global_Commands::clear_robot_commands() {
  robot_commands_.Clear();
}
inline const ::vss_command::Robot_Command& Global_Commands::robot_commands(int index) const {
  // @@protoc_insertion_point(field_get:vss_command.Global_Commands.robot_commands)
  return robot_commands_.Get(index);
}
inline ::vss_command::Robot_Command* Global_Commands::mutable_robot_commands(int index) {
  // @@protoc_insertion_point(field_mutable:vss_command.Global_Commands.robot_commands)
  return robot_commands_.Mutable(index);
}
inline ::vss_command::Robot_Command* Global_Commands::add_robot_commands() {
  // @@protoc_insertion_point(field_add:vss_command.Global_Commands.robot_commands)
  return robot_commands_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::vss_command::Robot_Command >*
Global_Commands::mutable_robot_commands() {
  // @@protoc_insertion_point(field_mutable_list:vss_command.Global_Commands.robot_commands)
  return &robot_commands_;
}
inline const ::google::protobuf::RepeatedPtrField< ::vss_command::Robot_Command >&
Global_Commands::robot_commands() const {
  // @@protoc_insertion_point(field_list:vss_command.Global_Commands.robot_commands)
  return robot_commands_;
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace vss_command

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_command_2eproto__INCLUDED