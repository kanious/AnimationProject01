// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: UserInput.proto

#include "UserInput.pb.h"

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
constexpr UserInput::UserInput(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : messageid_(0)
  , input_(0)
  , tick_number_(int64_t{0}){}
struct UserInputDefaultTypeInternal {
  constexpr UserInputDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~UserInputDefaultTypeInternal() {}
  union {
    UserInput _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT UserInputDefaultTypeInternal _UserInput_default_instance_;
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_UserInput_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_UserInput_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_UserInput_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_UserInput_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::UserInput, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::UserInput, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::UserInput, messageid_),
  PROTOBUF_FIELD_OFFSET(::UserInput, input_),
  PROTOBUF_FIELD_OFFSET(::UserInput, tick_number_),
  0,
  1,
  2,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 9, -1, sizeof(::UserInput)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::_UserInput_default_instance_),
};

const char descriptor_table_protodef_UserInput_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\017UserInput.proto\"B\n\tUserInput\022\021\n\tmessag"
  "eId\030\001 \002(\005\022\r\n\005input\030\002 \002(\005\022\023\n\013tick_number\030"
  "\003 \002(\003"
  ;
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_UserInput_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_UserInput_2eproto = {
  false, false, 85, descriptor_table_protodef_UserInput_2eproto, "UserInput.proto", 
  &descriptor_table_UserInput_2eproto_once, nullptr, 0, 1,
  schemas, file_default_instances, TableStruct_UserInput_2eproto::offsets,
  file_level_metadata_UserInput_2eproto, file_level_enum_descriptors_UserInput_2eproto, file_level_service_descriptors_UserInput_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_UserInput_2eproto_getter() {
  return &descriptor_table_UserInput_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_UserInput_2eproto(&descriptor_table_UserInput_2eproto);

// ===================================================================

class UserInput::_Internal {
 public:
  using HasBits = decltype(std::declval<UserInput>()._has_bits_);
  static void set_has_messageid(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_input(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_tick_number(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static bool MissingRequiredFields(const HasBits& has_bits) {
    return ((has_bits[0] & 0x00000007) ^ 0x00000007) != 0;
  }
};

UserInput::UserInput(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:UserInput)
}
UserInput::UserInput(const UserInput& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::memcpy(&messageid_, &from.messageid_,
    static_cast<size_t>(reinterpret_cast<char*>(&tick_number_) -
    reinterpret_cast<char*>(&messageid_)) + sizeof(tick_number_));
  // @@protoc_insertion_point(copy_constructor:UserInput)
}

void UserInput::SharedCtor() {
::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
    reinterpret_cast<char*>(&messageid_) - reinterpret_cast<char*>(this)),
    0, static_cast<size_t>(reinterpret_cast<char*>(&tick_number_) -
    reinterpret_cast<char*>(&messageid_)) + sizeof(tick_number_));
}

UserInput::~UserInput() {
  // @@protoc_insertion_point(destructor:UserInput)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void UserInput::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void UserInput::ArenaDtor(void* object) {
  UserInput* _this = reinterpret_cast< UserInput* >(object);
  (void)_this;
}
void UserInput::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void UserInput::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void UserInput::Clear() {
// @@protoc_insertion_point(message_clear_start:UserInput)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    ::memset(&messageid_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&tick_number_) -
        reinterpret_cast<char*>(&messageid_)) + sizeof(tick_number_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* UserInput::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // required int32 messageId = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          _Internal::set_has_messageid(&has_bits);
          messageid_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // required int32 input = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
          _Internal::set_has_input(&has_bits);
          input_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // required int64 tick_number = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 24)) {
          _Internal::set_has_tick_number(&has_bits);
          tick_number_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
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
  _has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* UserInput::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:UserInput)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required int32 messageId = 1;
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(1, this->_internal_messageid(), target);
  }

  // required int32 input = 2;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(2, this->_internal_input(), target);
  }

  // required int64 tick_number = 3;
  if (cached_has_bits & 0x00000004u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt64ToArray(3, this->_internal_tick_number(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:UserInput)
  return target;
}

size_t UserInput::RequiredFieldsByteSizeFallback() const {
// @@protoc_insertion_point(required_fields_byte_size_fallback_start:UserInput)
  size_t total_size = 0;

  if (_internal_has_messageid()) {
    // required int32 messageId = 1;
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32SizePlusOne(this->_internal_messageid());
  }

  if (_internal_has_input()) {
    // required int32 input = 2;
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32SizePlusOne(this->_internal_input());
  }

  if (_internal_has_tick_number()) {
    // required int64 tick_number = 3;
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int64SizePlusOne(this->_internal_tick_number());
  }

  return total_size;
}
size_t UserInput::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:UserInput)
  size_t total_size = 0;

  if (((_has_bits_[0] & 0x00000007) ^ 0x00000007) == 0) {  // All required fields are present.
    // required int32 messageId = 1;
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32SizePlusOne(this->_internal_messageid());

    // required int32 input = 2;
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32SizePlusOne(this->_internal_input());

    // required int64 tick_number = 3;
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int64SizePlusOne(this->_internal_tick_number());

  } else {
    total_size += RequiredFieldsByteSizeFallback();
  }
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  return MaybeComputeUnknownFieldsSize(total_size, &_cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData UserInput::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    UserInput::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*UserInput::GetClassData() const { return &_class_data_; }

void UserInput::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<UserInput *>(to)->MergeFrom(
      static_cast<const UserInput &>(from));
}


void UserInput::MergeFrom(const UserInput& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:UserInput)
  GOOGLE_DCHECK_NE(&from, this);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    if (cached_has_bits & 0x00000001u) {
      messageid_ = from.messageid_;
    }
    if (cached_has_bits & 0x00000002u) {
      input_ = from.input_;
    }
    if (cached_has_bits & 0x00000004u) {
      tick_number_ = from.tick_number_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void UserInput::CopyFrom(const UserInput& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:UserInput)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool UserInput::IsInitialized() const {
  if (_Internal::MissingRequiredFields(_has_bits_)) return false;
  return true;
}

void UserInput::InternalSwap(UserInput* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(UserInput, tick_number_)
      + sizeof(UserInput::tick_number_)
      - PROTOBUF_FIELD_OFFSET(UserInput, messageid_)>(
          reinterpret_cast<char*>(&messageid_),
          reinterpret_cast<char*>(&other->messageid_));
}

::PROTOBUF_NAMESPACE_ID::Metadata UserInput::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_UserInput_2eproto_getter, &descriptor_table_UserInput_2eproto_once,
      file_level_metadata_UserInput_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::UserInput* Arena::CreateMaybeMessage< ::UserInput >(Arena* arena) {
  return Arena::CreateMessageInternal< ::UserInput >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
