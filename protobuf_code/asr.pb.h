// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: asr.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_asr_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_asr_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3021000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3021002 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_asr_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_asr_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_asr_2eproto;
class Environment;
struct EnvironmentDefaultTypeInternal;
extern EnvironmentDefaultTypeInternal _Environment_default_instance_;
class Training;
struct TrainingDefaultTypeInternal;
extern TrainingDefaultTypeInternal _Training_default_instance_;
class Unit;
struct UnitDefaultTypeInternal;
extern UnitDefaultTypeInternal _Unit_default_instance_;
PROTOBUF_NAMESPACE_OPEN
template<> ::Environment* Arena::CreateMaybeMessage<::Environment>(Arena*);
template<> ::Training* Arena::CreateMaybeMessage<::Training>(Arena*);
template<> ::Unit* Arena::CreateMaybeMessage<::Unit>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

// ===================================================================

class Unit final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:Unit) */ {
 public:
  inline Unit() : Unit(nullptr) {}
  ~Unit() override;
  explicit PROTOBUF_CONSTEXPR Unit(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  Unit(const Unit& from);
  Unit(Unit&& from) noexcept
    : Unit() {
    *this = ::std::move(from);
  }

  inline Unit& operator=(const Unit& from) {
    CopyFrom(from);
    return *this;
  }
  inline Unit& operator=(Unit&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const Unit& default_instance() {
    return *internal_default_instance();
  }
  static inline const Unit* internal_default_instance() {
    return reinterpret_cast<const Unit*>(
               &_Unit_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Unit& a, Unit& b) {
    a.Swap(&b);
  }
  inline void Swap(Unit* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Unit* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  Unit* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<Unit>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const Unit& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const Unit& from) {
    Unit::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena, bool is_message_owned);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Unit* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "Unit";
  }
  protected:
  explicit Unit(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kActionsIdFieldNumber = 2,
    kUnitIdFieldNumber = 1,
  };
  // repeated int32 actions_id = 2;
  int actions_id_size() const;
  private:
  int _internal_actions_id_size() const;
  public:
  void clear_actions_id();
  private:
  int32_t _internal_actions_id(int index) const;
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< int32_t >&
      _internal_actions_id() const;
  void _internal_add_actions_id(int32_t value);
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< int32_t >*
      _internal_mutable_actions_id();
  public:
  int32_t actions_id(int index) const;
  void set_actions_id(int index, int32_t value);
  void add_actions_id(int32_t value);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< int32_t >&
      actions_id() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< int32_t >*
      mutable_actions_id();

  // int32 unit_id = 1;
  void clear_unit_id();
  int32_t unit_id() const;
  void set_unit_id(int32_t value);
  private:
  int32_t _internal_unit_id() const;
  void _internal_set_unit_id(int32_t value);
  public:

  // @@protoc_insertion_point(class_scope:Unit)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::RepeatedField< int32_t > actions_id_;
    mutable std::atomic<int> _actions_id_cached_byte_size_;
    int32_t unit_id_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_asr_2eproto;
};
// -------------------------------------------------------------------

class Environment final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:Environment) */ {
 public:
  inline Environment() : Environment(nullptr) {}
  ~Environment() override;
  explicit PROTOBUF_CONSTEXPR Environment(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  Environment(const Environment& from);
  Environment(Environment&& from) noexcept
    : Environment() {
    *this = ::std::move(from);
  }

  inline Environment& operator=(const Environment& from) {
    CopyFrom(from);
    return *this;
  }
  inline Environment& operator=(Environment&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const Environment& default_instance() {
    return *internal_default_instance();
  }
  static inline const Environment* internal_default_instance() {
    return reinterpret_cast<const Environment*>(
               &_Environment_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(Environment& a, Environment& b) {
    a.Swap(&b);
  }
  inline void Swap(Environment* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Environment* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  Environment* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<Environment>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const Environment& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const Environment& from) {
    Environment::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena, bool is_message_owned);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Environment* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "Environment";
  }
  protected:
  explicit Environment(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kUnitsFieldNumber = 2,
    kEnvironmentIdFieldNumber = 1,
    kHasBeenFoundFieldNumber = 3,
  };
  // repeated .Unit units = 2;
  int units_size() const;
  private:
  int _internal_units_size() const;
  public:
  void clear_units();
  ::Unit* mutable_units(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::Unit >*
      mutable_units();
  private:
  const ::Unit& _internal_units(int index) const;
  ::Unit* _internal_add_units();
  public:
  const ::Unit& units(int index) const;
  ::Unit* add_units();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::Unit >&
      units() const;

  // int32 environment_id = 1;
  void clear_environment_id();
  int32_t environment_id() const;
  void set_environment_id(int32_t value);
  private:
  int32_t _internal_environment_id() const;
  void _internal_set_environment_id(int32_t value);
  public:

  // optional bool has_been_found = 3;
  bool has_has_been_found() const;
  private:
  bool _internal_has_has_been_found() const;
  public:
  void clear_has_been_found();
  bool has_been_found() const;
  void set_has_been_found(bool value);
  private:
  bool _internal_has_been_found() const;
  void _internal_set_has_been_found(bool value);
  public:

  // @@protoc_insertion_point(class_scope:Environment)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
    ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::Unit > units_;
    int32_t environment_id_;
    bool has_been_found_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_asr_2eproto;
};
// -------------------------------------------------------------------

class Training final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:Training) */ {
 public:
  inline Training() : Training(nullptr) {}
  ~Training() override;
  explicit PROTOBUF_CONSTEXPR Training(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  Training(const Training& from);
  Training(Training&& from) noexcept
    : Training() {
    *this = ::std::move(from);
  }

  inline Training& operator=(const Training& from) {
    CopyFrom(from);
    return *this;
  }
  inline Training& operator=(Training&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const Training& default_instance() {
    return *internal_default_instance();
  }
  static inline const Training* internal_default_instance() {
    return reinterpret_cast<const Training*>(
               &_Training_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  friend void swap(Training& a, Training& b) {
    a.Swap(&b);
  }
  inline void Swap(Training* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Training* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  Training* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<Training>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const Training& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const Training& from) {
    Training::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena, bool is_message_owned);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Training* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "Training";
  }
  protected:
  explicit Training(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kEnvironmentsFieldNumber = 1,
  };
  // repeated .Environment environments = 1;
  int environments_size() const;
  private:
  int _internal_environments_size() const;
  public:
  void clear_environments();
  ::Environment* mutable_environments(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::Environment >*
      mutable_environments();
  private:
  const ::Environment& _internal_environments(int index) const;
  ::Environment* _internal_add_environments();
  public:
  const ::Environment& environments(int index) const;
  ::Environment* add_environments();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::Environment >&
      environments() const;

  // @@protoc_insertion_point(class_scope:Training)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::Environment > environments_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_asr_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Unit

// int32 unit_id = 1;
inline void Unit::clear_unit_id() {
  _impl_.unit_id_ = 0;
}
inline int32_t Unit::_internal_unit_id() const {
  return _impl_.unit_id_;
}
inline int32_t Unit::unit_id() const {
  // @@protoc_insertion_point(field_get:Unit.unit_id)
  return _internal_unit_id();
}
inline void Unit::_internal_set_unit_id(int32_t value) {
  
  _impl_.unit_id_ = value;
}
inline void Unit::set_unit_id(int32_t value) {
  _internal_set_unit_id(value);
  // @@protoc_insertion_point(field_set:Unit.unit_id)
}

// repeated int32 actions_id = 2;
inline int Unit::_internal_actions_id_size() const {
  return _impl_.actions_id_.size();
}
inline int Unit::actions_id_size() const {
  return _internal_actions_id_size();
}
inline void Unit::clear_actions_id() {
  _impl_.actions_id_.Clear();
}
inline int32_t Unit::_internal_actions_id(int index) const {
  return _impl_.actions_id_.Get(index);
}
inline int32_t Unit::actions_id(int index) const {
  // @@protoc_insertion_point(field_get:Unit.actions_id)
  return _internal_actions_id(index);
}
inline void Unit::set_actions_id(int index, int32_t value) {
  _impl_.actions_id_.Set(index, value);
  // @@protoc_insertion_point(field_set:Unit.actions_id)
}
inline void Unit::_internal_add_actions_id(int32_t value) {
  _impl_.actions_id_.Add(value);
}
inline void Unit::add_actions_id(int32_t value) {
  _internal_add_actions_id(value);
  // @@protoc_insertion_point(field_add:Unit.actions_id)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< int32_t >&
Unit::_internal_actions_id() const {
  return _impl_.actions_id_;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< int32_t >&
Unit::actions_id() const {
  // @@protoc_insertion_point(field_list:Unit.actions_id)
  return _internal_actions_id();
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< int32_t >*
Unit::_internal_mutable_actions_id() {
  return &_impl_.actions_id_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< int32_t >*
Unit::mutable_actions_id() {
  // @@protoc_insertion_point(field_mutable_list:Unit.actions_id)
  return _internal_mutable_actions_id();
}

// -------------------------------------------------------------------

// Environment

// int32 environment_id = 1;
inline void Environment::clear_environment_id() {
  _impl_.environment_id_ = 0;
}
inline int32_t Environment::_internal_environment_id() const {
  return _impl_.environment_id_;
}
inline int32_t Environment::environment_id() const {
  // @@protoc_insertion_point(field_get:Environment.environment_id)
  return _internal_environment_id();
}
inline void Environment::_internal_set_environment_id(int32_t value) {
  
  _impl_.environment_id_ = value;
}
inline void Environment::set_environment_id(int32_t value) {
  _internal_set_environment_id(value);
  // @@protoc_insertion_point(field_set:Environment.environment_id)
}

// repeated .Unit units = 2;
inline int Environment::_internal_units_size() const {
  return _impl_.units_.size();
}
inline int Environment::units_size() const {
  return _internal_units_size();
}
inline void Environment::clear_units() {
  _impl_.units_.Clear();
}
inline ::Unit* Environment::mutable_units(int index) {
  // @@protoc_insertion_point(field_mutable:Environment.units)
  return _impl_.units_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::Unit >*
Environment::mutable_units() {
  // @@protoc_insertion_point(field_mutable_list:Environment.units)
  return &_impl_.units_;
}
inline const ::Unit& Environment::_internal_units(int index) const {
  return _impl_.units_.Get(index);
}
inline const ::Unit& Environment::units(int index) const {
  // @@protoc_insertion_point(field_get:Environment.units)
  return _internal_units(index);
}
inline ::Unit* Environment::_internal_add_units() {
  return _impl_.units_.Add();
}
inline ::Unit* Environment::add_units() {
  ::Unit* _add = _internal_add_units();
  // @@protoc_insertion_point(field_add:Environment.units)
  return _add;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::Unit >&
Environment::units() const {
  // @@protoc_insertion_point(field_list:Environment.units)
  return _impl_.units_;
}

// optional bool has_been_found = 3;
inline bool Environment::_internal_has_has_been_found() const {
  bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool Environment::has_has_been_found() const {
  return _internal_has_has_been_found();
}
inline void Environment::clear_has_been_found() {
  _impl_.has_been_found_ = false;
  _impl_._has_bits_[0] &= ~0x00000001u;
}
inline bool Environment::_internal_has_been_found() const {
  return _impl_.has_been_found_;
}
inline bool Environment::has_been_found() const {
  // @@protoc_insertion_point(field_get:Environment.has_been_found)
  return _internal_has_been_found();
}
inline void Environment::_internal_set_has_been_found(bool value) {
  _impl_._has_bits_[0] |= 0x00000001u;
  _impl_.has_been_found_ = value;
}
inline void Environment::set_has_been_found(bool value) {
  _internal_set_has_been_found(value);
  // @@protoc_insertion_point(field_set:Environment.has_been_found)
}

// -------------------------------------------------------------------

// Training

// repeated .Environment environments = 1;
inline int Training::_internal_environments_size() const {
  return _impl_.environments_.size();
}
inline int Training::environments_size() const {
  return _internal_environments_size();
}
inline void Training::clear_environments() {
  _impl_.environments_.Clear();
}
inline ::Environment* Training::mutable_environments(int index) {
  // @@protoc_insertion_point(field_mutable:Training.environments)
  return _impl_.environments_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::Environment >*
Training::mutable_environments() {
  // @@protoc_insertion_point(field_mutable_list:Training.environments)
  return &_impl_.environments_;
}
inline const ::Environment& Training::_internal_environments(int index) const {
  return _impl_.environments_.Get(index);
}
inline const ::Environment& Training::environments(int index) const {
  // @@protoc_insertion_point(field_get:Training.environments)
  return _internal_environments(index);
}
inline ::Environment* Training::_internal_add_environments() {
  return _impl_.environments_.Add();
}
inline ::Environment* Training::add_environments() {
  ::Environment* _add = _internal_add_environments();
  // @@protoc_insertion_point(field_add:Training.environments)
  return _add;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::Environment >&
Training::environments() const {
  // @@protoc_insertion_point(field_list:Training.environments)
  return _impl_.environments_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_asr_2eproto
