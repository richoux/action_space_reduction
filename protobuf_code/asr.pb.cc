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
PROTOBUF_CONSTEXPR State::State(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_._has_bits_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}
  , /*decltype(_impl_.units_)*/{}
  , /*decltype(_impl_.find_solution_)*/false} {}
struct StateDefaultTypeInternal {
  PROTOBUF_CONSTEXPR StateDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~StateDefaultTypeInternal() {}
  union {
    State _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 StateDefaultTypeInternal _State_default_instance_;
static ::_pb::Metadata file_level_metadata_asr_2eproto[2];
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
  PROTOBUF_FIELD_OFFSET(::State, _impl_._has_bits_),
  PROTOBUF_FIELD_OFFSET(::State, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::State, _impl_.units_),
  PROTOBUF_FIELD_OFFSET(::State, _impl_.find_solution_),
  ~0u,
  0,
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::Unit)},
  { 8, 16, -1, sizeof(::State)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::_Unit_default_instance_._instance,
  &::_State_default_instance_._instance,
};

const char descriptor_table_protodef_asr_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\tasr.proto\"+\n\004Unit\022\017\n\007unit_id\030\001 \001(\005\022\022\n\n"
  "actions_id\030\002 \003(\005\"K\n\005State\022\024\n\005units\030\001 \003(\013"
  "2\005.Unit\022\032\n\rfind_solution\030\002 \001(\010H\000\210\001\001B\020\n\016_"
  "find_solutionb\006proto3"
  ;
static ::_pbi::once_flag descriptor_table_asr_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_asr_2eproto = {
    false, false, 141, descriptor_table_protodef_asr_2eproto,
    "asr.proto",
    &descriptor_table_asr_2eproto_once, nullptr, 0, 2,
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

class State::_Internal {
 public:
  using HasBits = decltype(std::declval<State>()._impl_._has_bits_);
  static void set_has_find_solution(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
};

State::State(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:State)
}
State::State(const State& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  State* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){from._impl_._has_bits_}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.units_){from._impl_.units_}
    , decltype(_impl_.find_solution_){}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _this->_impl_.find_solution_ = from._impl_.find_solution_;
  // @@protoc_insertion_point(copy_constructor:State)
}

inline void State::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.units_){arena}
    , decltype(_impl_.find_solution_){false}
  };
}

State::~State() {
  // @@protoc_insertion_point(destructor:State)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void State::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.units_.~RepeatedPtrField();
}

void State::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void State::Clear() {
// @@protoc_insertion_point(message_clear_start:State)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.units_.Clear();
  _impl_.find_solution_ = false;
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* State::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // repeated .Unit units = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_units(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<10>(ptr));
        } else
          goto handle_unusual;
        continue;
      // optional bool find_solution = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 16)) {
          _Internal::set_has_find_solution(&has_bits);
          _impl_.find_solution_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
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

uint8_t* State::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:State)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .Unit units = 1;
  for (unsigned i = 0,
      n = static_cast<unsigned>(this->_internal_units_size()); i < n; i++) {
    const auto& repfield = this->_internal_units(i);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
        InternalWriteMessage(1, repfield, repfield.GetCachedSize(), target, stream);
  }

  // optional bool find_solution = 2;
  if (_internal_has_find_solution()) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteBoolToArray(2, this->_internal_find_solution(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:State)
  return target;
}

size_t State::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:State)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .Unit units = 1;
  total_size += 1UL * this->_internal_units_size();
  for (const auto& msg : this->_impl_.units_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  // optional bool find_solution = 2;
  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    total_size += 1 + 1;
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData State::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    State::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*State::GetClassData() const { return &_class_data_; }


void State::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<State*>(&to_msg);
  auto& from = static_cast<const State&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:State)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_impl_.units_.MergeFrom(from._impl_.units_);
  if (from._internal_has_find_solution()) {
    _this->_internal_set_find_solution(from._internal_find_solution());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void State::CopyFrom(const State& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:State)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool State::IsInitialized() const {
  return true;
}

void State::InternalSwap(State* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  _impl_.units_.InternalSwap(&other->_impl_.units_);
  swap(_impl_.find_solution_, other->_impl_.find_solution_);
}

::PROTOBUF_NAMESPACE_ID::Metadata State::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_asr_2eproto_getter, &descriptor_table_asr_2eproto_once,
      file_level_metadata_asr_2eproto[1]);
}

// @@protoc_insertion_point(namespace_scope)
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::Unit*
Arena::CreateMaybeMessage< ::Unit >(Arena* arena) {
  return Arena::CreateMessageInternal< ::Unit >(arena);
}
template<> PROTOBUF_NOINLINE ::State*
Arena::CreateMaybeMessage< ::State >(Arena* arena) {
  return Arena::CreateMessageInternal< ::State >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
