// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: asr.proto

#include "asr.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG

namespace _pb = ::PROTOBUF_NAMESPACE_ID;
namespace _pbi = _pb::internal;

PROTOBUF_CONSTEXPR Unit::Unit(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.actions_id_)*/{}
  , /*decltype(_impl_._actions_id_cached_byte_size_)*/{0}
  , /*decltype(_impl_.unit_id_)*/0
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct UnitDefaultTypeInternal {
  PROTOBUF_CONSTEXPR UnitDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~UnitDefaultTypeInternal() {}
  union {
    Unit _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 UnitDefaultTypeInternal _Unit_default_instance_;
PROTOBUF_CONSTEXPR Environment::Environment(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_._has_bits_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}
  , /*decltype(_impl_.units_)*/{}
  , /*decltype(_impl_.environment_id_)*/0
  , /*decltype(_impl_.has_been_found_)*/false} {}
struct EnvironmentDefaultTypeInternal {
  PROTOBUF_CONSTEXPR EnvironmentDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~EnvironmentDefaultTypeInternal() {}
  union {
    Environment _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 EnvironmentDefaultTypeInternal _Environment_default_instance_;
PROTOBUF_CONSTEXPR Training::Training(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.environments_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct TrainingDefaultTypeInternal {
  PROTOBUF_CONSTEXPR TrainingDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~TrainingDefaultTypeInternal() {}
  union {
    Training _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 TrainingDefaultTypeInternal _Training_default_instance_;
static ::_pb::Metadata file_level_metadata_asr_2eproto[3];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_asr_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_asr_2eproto = nullptr;

const uint32_t TableStruct_asr_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::Unit, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::Unit, _impl_.unit_id_),
  PROTOBUF_FIELD_OFFSET(::Unit, _impl_.actions_id_),
  PROTOBUF_FIELD_OFFSET(::Environment, _impl_._has_bits_),
  PROTOBUF_FIELD_OFFSET(::Environment, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::Environment, _impl_.environment_id_),
  PROTOBUF_FIELD_OFFSET(::Environment, _impl_.units_),
  PROTOBUF_FIELD_OFFSET(::Environment, _impl_.has_been_found_),
  ~0u,
  ~0u,
  0,
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::Training, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::Training, _impl_.environments_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::Unit)},
  { 8, 17, -1, sizeof(::Environment)},
  { 20, -1, -1, sizeof(::Training)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::_Unit_default_instance_._instance,
  &::_Environment_default_instance_._instance,
  &::_Training_default_instance_._instance,
};

const char descriptor_table_protodef_asr_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\tasr.proto\"+\n\004Unit\022\017\n\007unit_id\030\001 \001(\005\022\022\n\n"
  "actions_id\030\002 \003(\005\"k\n\013Environment\022\026\n\016envir"
  "onment_id\030\001 \001(\005\022\024\n\005units\030\002 \003(\0132\005.Unit\022\033\n"
  "\016has_been_found\030\003 \001(\010H\000\210\001\001B\021\n\017_has_been_"
  "found\".\n\010Training\022\"\n\014environments\030\001 \003(\0132"
  "\014.Environmentb\006proto3"
  ;
static ::_pbi::once_flag descriptor_table_asr_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_asr_2eproto = {
    false, false, 221, descriptor_table_protodef_asr_2eproto,
    "asr.proto",
    &descriptor_table_asr_2eproto_once, nullptr, 0, 3,
    schemas, file_default_instances, TableStruct_asr_2eproto::offsets,
    file_level_metadata_asr_2eproto, file_level_enum_descriptors_asr_2eproto,
    file_level_service_descriptors_asr_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_asr_2eproto_getter() {
  return &descriptor_table_asr_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_asr_2eproto(&descriptor_table_asr_2eproto);

// ===================================================================

class Unit::_Internal {
 public:
};

Unit::Unit(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:Unit)
}
Unit::Unit(const Unit& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  Unit* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.actions_id_){from._impl_.actions_id_}
    , /*decltype(_impl_._actions_id_cached_byte_size_)*/{0}
    , decltype(_impl_.unit_id_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _this->_impl_.unit_id_ = from._impl_.unit_id_;
  // @@protoc_insertion_point(copy_constructor:Unit)
}

inline void Unit::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.actions_id_){arena}
    , /*decltype(_impl_._actions_id_cached_byte_size_)*/{0}
    , decltype(_impl_.unit_id_){0}
    , /*decltype(_impl_._cached_size_)*/{}
  };
}

Unit::~Unit() {
  // @@protoc_insertion_point(destructor:Unit)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void Unit::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.actions_id_.~RepeatedField();
}

void Unit::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void Unit::Clear() {
// @@protoc_insertion_point(message_clear_start:Unit)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.actions_id_.Clear();
  _impl_.unit_id_ = 0;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Unit::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // int32 unit_id = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          _impl_.unit_id_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // repeated int32 actions_id = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::PackedInt32Parser(_internal_mutable_actions_id(), ptr, ctx);
          CHK_(ptr);
        } else if (static_cast<uint8_t>(tag) == 16) {
          _internal_add_actions_id(::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr));
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* Unit::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:Unit)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 unit_id = 1;
  if (this->_internal_unit_id() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(1, this->_internal_unit_id(), target);
  }

  // repeated int32 actions_id = 2;
  {
    int byte_size = _impl_._actions_id_cached_byte_size_.load(std::memory_order_relaxed);
    if (byte_size > 0) {
      target = stream->WriteInt32Packed(
          2, _internal_actions_id(), byte_size, target);
    }
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Unit)
  return target;
}

size_t Unit::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:Unit)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated int32 actions_id = 2;
  {
    size_t data_size = ::_pbi::WireFormatLite::
      Int32Size(this->_impl_.actions_id_);
    if (data_size > 0) {
      total_size += 1 +
        ::_pbi::WireFormatLite::Int32Size(static_cast<int32_t>(data_size));
    }
    int cached_size = ::_pbi::ToCachedSize(data_size);
    _impl_._actions_id_cached_byte_size_.store(cached_size,
                                    std::memory_order_relaxed);
    total_size += data_size;
  }

  // int32 unit_id = 1;
  if (this->_internal_unit_id() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_unit_id());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData Unit::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    Unit::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*Unit::GetClassData() const { return &_class_data_; }


void Unit::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<Unit*>(&to_msg);
  auto& from = static_cast<const Unit&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:Unit)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_impl_.actions_id_.MergeFrom(from._impl_.actions_id_);
  if (from._internal_unit_id() != 0) {
    _this->_internal_set_unit_id(from._internal_unit_id());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void Unit::CopyFrom(const Unit& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:Unit)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Unit::IsInitialized() const {
  return true;
}

void Unit::InternalSwap(Unit* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  _impl_.actions_id_.InternalSwap(&other->_impl_.actions_id_);
  swap(_impl_.unit_id_, other->_impl_.unit_id_);
}

::PROTOBUF_NAMESPACE_ID::Metadata Unit::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_asr_2eproto_getter, &descriptor_table_asr_2eproto_once,
      file_level_metadata_asr_2eproto[0]);
}

// ===================================================================

class Environment::_Internal {
 public:
  using HasBits = decltype(std::declval<Environment>()._impl_._has_bits_);
  static void set_has_has_been_found(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
};

Environment::Environment(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:Environment)
}
Environment::Environment(const Environment& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  Environment* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){from._impl_._has_bits_}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.units_){from._impl_.units_}
    , decltype(_impl_.environment_id_){}
    , decltype(_impl_.has_been_found_){}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::memcpy(&_impl_.environment_id_, &from._impl_.environment_id_,
    static_cast<size_t>(reinterpret_cast<char*>(&_impl_.has_been_found_) -
    reinterpret_cast<char*>(&_impl_.environment_id_)) + sizeof(_impl_.has_been_found_));
  // @@protoc_insertion_point(copy_constructor:Environment)
}

inline void Environment::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.units_){arena}
    , decltype(_impl_.environment_id_){0}
    , decltype(_impl_.has_been_found_){false}
  };
}

Environment::~Environment() {
  // @@protoc_insertion_point(destructor:Environment)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void Environment::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.units_.~RepeatedPtrField();
}

void Environment::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void Environment::Clear() {
// @@protoc_insertion_point(message_clear_start:Environment)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.units_.Clear();
  _impl_.environment_id_ = 0;
  _impl_.has_been_found_ = false;
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Environment::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // int32 environment_id = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          _impl_.environment_id_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // repeated .Unit units = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_units(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<18>(ptr));
        } else
          goto handle_unusual;
        continue;
      // optional bool has_been_found = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 24)) {
          _Internal::set_has_has_been_found(&has_bits);
          _impl_.has_been_found_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  _impl_._has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* Environment::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:Environment)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 environment_id = 1;
  if (this->_internal_environment_id() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(1, this->_internal_environment_id(), target);
  }

  // repeated .Unit units = 2;
  for (unsigned i = 0,
      n = static_cast<unsigned>(this->_internal_units_size()); i < n; i++) {
    const auto& repfield = this->_internal_units(i);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
        InternalWriteMessage(2, repfield, repfield.GetCachedSize(), target, stream);
  }

  // optional bool has_been_found = 3;
  if (_internal_has_has_been_found()) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteBoolToArray(3, this->_internal_has_been_found(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Environment)
  return target;
}

size_t Environment::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:Environment)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .Unit units = 2;
  total_size += 1UL * this->_internal_units_size();
  for (const auto& msg : this->_impl_.units_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  // int32 environment_id = 1;
  if (this->_internal_environment_id() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_environment_id());
  }

  // optional bool has_been_found = 3;
  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    total_size += 1 + 1;
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData Environment::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    Environment::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*Environment::GetClassData() const { return &_class_data_; }


void Environment::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<Environment*>(&to_msg);
  auto& from = static_cast<const Environment&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:Environment)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_impl_.units_.MergeFrom(from._impl_.units_);
  if (from._internal_environment_id() != 0) {
    _this->_internal_set_environment_id(from._internal_environment_id());
  }
  if (from._internal_has_has_been_found()) {
    _this->_internal_set_has_been_found(from._internal_has_been_found());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void Environment::CopyFrom(const Environment& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:Environment)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Environment::IsInitialized() const {
  return true;
}

void Environment::InternalSwap(Environment* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  _impl_.units_.InternalSwap(&other->_impl_.units_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(Environment, _impl_.has_been_found_)
      + sizeof(Environment::_impl_.has_been_found_)
      - PROTOBUF_FIELD_OFFSET(Environment, _impl_.environment_id_)>(
          reinterpret_cast<char*>(&_impl_.environment_id_),
          reinterpret_cast<char*>(&other->_impl_.environment_id_));
}

::PROTOBUF_NAMESPACE_ID::Metadata Environment::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_asr_2eproto_getter, &descriptor_table_asr_2eproto_once,
      file_level_metadata_asr_2eproto[1]);
}

// ===================================================================

class Training::_Internal {
 public:
};

Training::Training(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:Training)
}
Training::Training(const Training& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  Training* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.environments_){from._impl_.environments_}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:Training)
}

inline void Training::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.environments_){arena}
    , /*decltype(_impl_._cached_size_)*/{}
  };
}

Training::~Training() {
  // @@protoc_insertion_point(destructor:Training)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void Training::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.environments_.~RepeatedPtrField();
}

void Training::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void Training::Clear() {
// @@protoc_insertion_point(message_clear_start:Training)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.environments_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Training::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // repeated .Environment environments = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_environments(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<10>(ptr));
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* Training::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:Training)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .Environment environments = 1;
  for (unsigned i = 0,
      n = static_cast<unsigned>(this->_internal_environments_size()); i < n; i++) {
    const auto& repfield = this->_internal_environments(i);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
        InternalWriteMessage(1, repfield, repfield.GetCachedSize(), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Training)
  return target;
}

size_t Training::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:Training)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .Environment environments = 1;
  total_size += 1UL * this->_internal_environments_size();
  for (const auto& msg : this->_impl_.environments_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData Training::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    Training::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*Training::GetClassData() const { return &_class_data_; }


void Training::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<Training*>(&to_msg);
  auto& from = static_cast<const Training&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:Training)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_impl_.environments_.MergeFrom(from._impl_.environments_);
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void Training::CopyFrom(const Training& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:Training)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Training::IsInitialized() const {
  return true;
}

void Training::InternalSwap(Training* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  _impl_.environments_.InternalSwap(&other->_impl_.environments_);
}

::PROTOBUF_NAMESPACE_ID::Metadata Training::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_asr_2eproto_getter, &descriptor_table_asr_2eproto_once,
      file_level_metadata_asr_2eproto[2]);
}

// @@protoc_insertion_point(namespace_scope)
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::Unit*
Arena::CreateMaybeMessage< ::Unit >(Arena* arena) {
  return Arena::CreateMessageInternal< ::Unit >(arena);
}
template<> PROTOBUF_NOINLINE ::Environment*
Arena::CreateMaybeMessage< ::Environment >(Arena* arena) {
  return Arena::CreateMessageInternal< ::Environment >(arena);
}
template<> PROTOBUF_NOINLINE ::Training*
Arena::CreateMaybeMessage< ::Training >(Arena* arena) {
  return Arena::CreateMessageInternal< ::Training >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
