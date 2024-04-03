// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: StratifiedCurrentVelocity.proto

#ifndef PROTOBUF_INCLUDED_StratifiedCurrentVelocity_2eproto
#define PROTOBUF_INCLUDED_StratifiedCurrentVelocity_2eproto

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3006001
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include "vector3d.pb.h"
#include "any.pb.h"
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_StratifiedCurrentVelocity_2eproto 

namespace protobuf_StratifiedCurrentVelocity_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[1];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
}  // namespace protobuf_StratifiedCurrentVelocity_2eproto
namespace dave_gazebo_world_plugins_msgs {
namespace msgs {
class StratifiedCurrentVelocity;
class StratifiedCurrentVelocityDefaultTypeInternal;
extern StratifiedCurrentVelocityDefaultTypeInternal _StratifiedCurrentVelocity_default_instance_;
}  // namespace msgs
}  // namespace dave_gazebo_world_plugins_msgs
namespace google {
namespace protobuf {
template<> ::dave_gazebo_world_plugins_msgs::msgs::StratifiedCurrentVelocity* Arena::CreateMaybeMessage<::dave_gazebo_world_plugins_msgs::msgs::StratifiedCurrentVelocity>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace dave_gazebo_world_plugins_msgs {
namespace msgs {

// ===================================================================

class StratifiedCurrentVelocity : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:dave_gazebo_world_plugins_msgs.msgs.StratifiedCurrentVelocity) */ {
 public:
  StratifiedCurrentVelocity();
  virtual ~StratifiedCurrentVelocity();

  StratifiedCurrentVelocity(const StratifiedCurrentVelocity& from);

  inline StratifiedCurrentVelocity& operator=(const StratifiedCurrentVelocity& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  StratifiedCurrentVelocity(StratifiedCurrentVelocity&& from) noexcept
    : StratifiedCurrentVelocity() {
    *this = ::std::move(from);
  }

  inline StratifiedCurrentVelocity& operator=(StratifiedCurrentVelocity&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const StratifiedCurrentVelocity& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const StratifiedCurrentVelocity* internal_default_instance() {
    return reinterpret_cast<const StratifiedCurrentVelocity*>(
               &_StratifiedCurrentVelocity_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(StratifiedCurrentVelocity* other);
  friend void swap(StratifiedCurrentVelocity& a, StratifiedCurrentVelocity& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline StratifiedCurrentVelocity* New() const final {
    return CreateMaybeMessage<StratifiedCurrentVelocity>(NULL);
  }

  StratifiedCurrentVelocity* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<StratifiedCurrentVelocity>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const StratifiedCurrentVelocity& from);
  void MergeFrom(const StratifiedCurrentVelocity& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(StratifiedCurrentVelocity* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .gazebo.msgs.Vector3d velocity = 1;
  int velocity_size() const;
  void clear_velocity();
  static const int kVelocityFieldNumber = 1;
  ::gazebo::msgs::Vector3d* mutable_velocity(int index);
  ::google::protobuf::RepeatedPtrField< ::gazebo::msgs::Vector3d >*
      mutable_velocity();
  const ::gazebo::msgs::Vector3d& velocity(int index) const;
  ::gazebo::msgs::Vector3d* add_velocity();
  const ::google::protobuf::RepeatedPtrField< ::gazebo::msgs::Vector3d >&
      velocity() const;

  // repeated double depth = 2;
  int depth_size() const;
  void clear_depth();
  static const int kDepthFieldNumber = 2;
  double depth(int index) const;
  void set_depth(int index, double value);
  void add_depth(double value);
  const ::google::protobuf::RepeatedField< double >&
      depth() const;
  ::google::protobuf::RepeatedField< double >*
      mutable_depth();

  // @@protoc_insertion_point(class_scope:dave_gazebo_world_plugins_msgs.msgs.StratifiedCurrentVelocity)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::gazebo::msgs::Vector3d > velocity_;
  ::google::protobuf::RepeatedField< double > depth_;
  friend struct ::protobuf_StratifiedCurrentVelocity_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// StratifiedCurrentVelocity

// repeated .gazebo.msgs.Vector3d velocity = 1;
inline int StratifiedCurrentVelocity::velocity_size() const {
  return velocity_.size();
}
inline ::gazebo::msgs::Vector3d* StratifiedCurrentVelocity::mutable_velocity(int index) {
  // @@protoc_insertion_point(field_mutable:dave_gazebo_world_plugins_msgs.msgs.StratifiedCurrentVelocity.velocity)
  return velocity_.Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField< ::gazebo::msgs::Vector3d >*
StratifiedCurrentVelocity::mutable_velocity() {
  // @@protoc_insertion_point(field_mutable_list:dave_gazebo_world_plugins_msgs.msgs.StratifiedCurrentVelocity.velocity)
  return &velocity_;
}
inline const ::gazebo::msgs::Vector3d& StratifiedCurrentVelocity::velocity(int index) const {
  // @@protoc_insertion_point(field_get:dave_gazebo_world_plugins_msgs.msgs.StratifiedCurrentVelocity.velocity)
  return velocity_.Get(index);
}
inline ::gazebo::msgs::Vector3d* StratifiedCurrentVelocity::add_velocity() {
  // @@protoc_insertion_point(field_add:dave_gazebo_world_plugins_msgs.msgs.StratifiedCurrentVelocity.velocity)
  return velocity_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::gazebo::msgs::Vector3d >&
StratifiedCurrentVelocity::velocity() const {
  // @@protoc_insertion_point(field_list:dave_gazebo_world_plugins_msgs.msgs.StratifiedCurrentVelocity.velocity)
  return velocity_;
}

// repeated double depth = 2;
inline int StratifiedCurrentVelocity::depth_size() const {
  return depth_.size();
}
inline void StratifiedCurrentVelocity::clear_depth() {
  depth_.Clear();
}
inline double StratifiedCurrentVelocity::depth(int index) const {
  // @@protoc_insertion_point(field_get:dave_gazebo_world_plugins_msgs.msgs.StratifiedCurrentVelocity.depth)
  return depth_.Get(index);
}
inline void StratifiedCurrentVelocity::set_depth(int index, double value) {
  depth_.Set(index, value);
  // @@protoc_insertion_point(field_set:dave_gazebo_world_plugins_msgs.msgs.StratifiedCurrentVelocity.depth)
}
inline void StratifiedCurrentVelocity::add_depth(double value) {
  depth_.Add(value);
  // @@protoc_insertion_point(field_add:dave_gazebo_world_plugins_msgs.msgs.StratifiedCurrentVelocity.depth)
}
inline const ::google::protobuf::RepeatedField< double >&
StratifiedCurrentVelocity::depth() const {
  // @@protoc_insertion_point(field_list:dave_gazebo_world_plugins_msgs.msgs.StratifiedCurrentVelocity.depth)
  return depth_;
}
inline ::google::protobuf::RepeatedField< double >*
StratifiedCurrentVelocity::mutable_depth() {
  // @@protoc_insertion_point(field_mutable_list:dave_gazebo_world_plugins_msgs.msgs.StratifiedCurrentVelocity.depth)
  return &depth_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace dave_gazebo_world_plugins_msgs

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_StratifiedCurrentVelocity_2eproto
