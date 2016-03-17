// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: MessageReadBlock.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "MessageReadBlock.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace {

const ::google::protobuf::Descriptor* MessageReadBlock_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  MessageReadBlock_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_MessageReadBlock_2eproto() {
  protobuf_AddDesc_MessageReadBlock_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "MessageReadBlock.proto");
  GOOGLE_CHECK(file != NULL);
  MessageReadBlock_descriptor_ = file->message_type(0);
  static const int MessageReadBlock_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MessageReadBlock, token_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MessageReadBlock, size_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MessageReadBlock, offset_),
  };
  MessageReadBlock_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      MessageReadBlock_descriptor_,
      MessageReadBlock::default_instance_,
      MessageReadBlock_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MessageReadBlock, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MessageReadBlock, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(MessageReadBlock));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_MessageReadBlock_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    MessageReadBlock_descriptor_, &MessageReadBlock::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_MessageReadBlock_2eproto() {
  delete MessageReadBlock::default_instance_;
  delete MessageReadBlock_reflection_;
}

void protobuf_AddDesc_MessageReadBlock_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\026MessageReadBlock.proto\"\?\n\020MessageReadB"
    "lock\022\r\n\005Token\030\001 \002(\t\022\014\n\004Size\030\002 \002(\003\022\016\n\006Off"
    "set\030\003 \002(\003", 89);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "MessageReadBlock.proto", &protobuf_RegisterTypes);
  MessageReadBlock::default_instance_ = new MessageReadBlock();
  MessageReadBlock::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_MessageReadBlock_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_MessageReadBlock_2eproto {
  StaticDescriptorInitializer_MessageReadBlock_2eproto() {
    protobuf_AddDesc_MessageReadBlock_2eproto();
  }
} static_descriptor_initializer_MessageReadBlock_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int MessageReadBlock::kTokenFieldNumber;
const int MessageReadBlock::kSizeFieldNumber;
const int MessageReadBlock::kOffsetFieldNumber;
#endif  // !_MSC_VER

MessageReadBlock::MessageReadBlock()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:MessageReadBlock)
}

void MessageReadBlock::InitAsDefaultInstance() {
}

MessageReadBlock::MessageReadBlock(const MessageReadBlock& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:MessageReadBlock)
}

void MessageReadBlock::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  token_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  size_ = GOOGLE_LONGLONG(0);
  offset_ = GOOGLE_LONGLONG(0);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

MessageReadBlock::~MessageReadBlock() {
  // @@protoc_insertion_point(destructor:MessageReadBlock)
  SharedDtor();
}

void MessageReadBlock::SharedDtor() {
  if (token_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete token_;
  }
  if (this != default_instance_) {
  }
}

void MessageReadBlock::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* MessageReadBlock::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return MessageReadBlock_descriptor_;
}

const MessageReadBlock& MessageReadBlock::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_MessageReadBlock_2eproto();
  return *default_instance_;
}

MessageReadBlock* MessageReadBlock::default_instance_ = NULL;

MessageReadBlock* MessageReadBlock::New() const {
  return new MessageReadBlock;
}

void MessageReadBlock::Clear() {
#define OFFSET_OF_FIELD_(f) (reinterpret_cast<char*>(      \
  &reinterpret_cast<MessageReadBlock*>(16)->f) - \
   reinterpret_cast<char*>(16))

#define ZR_(first, last) do {                              \
    size_t f = OFFSET_OF_FIELD_(first);                    \
    size_t n = OFFSET_OF_FIELD_(last) - f + sizeof(last);  \
    ::memset(&first, 0, n);                                \
  } while (0)

  if (_has_bits_[0 / 32] & 7) {
    ZR_(size_, offset_);
    if (has_token()) {
      if (token_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
        token_->clear();
      }
    }
  }

#undef OFFSET_OF_FIELD_
#undef ZR_

  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool MessageReadBlock::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:MessageReadBlock)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required string Token = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_token()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->token().data(), this->token().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "token");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_Size;
        break;
      }

      // required int64 Size = 2;
      case 2: {
        if (tag == 16) {
         parse_Size:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &size_)));
          set_has_size();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(24)) goto parse_Offset;
        break;
      }

      // required int64 Offset = 3;
      case 3: {
        if (tag == 24) {
         parse_Offset:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &offset_)));
          set_has_offset();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:MessageReadBlock)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:MessageReadBlock)
  return false;
#undef DO_
}

void MessageReadBlock::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:MessageReadBlock)
  // required string Token = 1;
  if (has_token()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->token().data(), this->token().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "token");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->token(), output);
  }

  // required int64 Size = 2;
  if (has_size()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(2, this->size(), output);
  }

  // required int64 Offset = 3;
  if (has_offset()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(3, this->offset(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:MessageReadBlock)
}

::google::protobuf::uint8* MessageReadBlock::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:MessageReadBlock)
  // required string Token = 1;
  if (has_token()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->token().data(), this->token().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "token");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->token(), target);
  }

  // required int64 Size = 2;
  if (has_size()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(2, this->size(), target);
  }

  // required int64 Offset = 3;
  if (has_offset()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(3, this->offset(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:MessageReadBlock)
  return target;
}

int MessageReadBlock::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required string Token = 1;
    if (has_token()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->token());
    }

    // required int64 Size = 2;
    if (has_size()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int64Size(
          this->size());
    }

    // required int64 Offset = 3;
    if (has_offset()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int64Size(
          this->offset());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void MessageReadBlock::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const MessageReadBlock* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const MessageReadBlock*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void MessageReadBlock::MergeFrom(const MessageReadBlock& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_token()) {
      set_token(from.token());
    }
    if (from.has_size()) {
      set_size(from.size());
    }
    if (from.has_offset()) {
      set_offset(from.offset());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void MessageReadBlock::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void MessageReadBlock::CopyFrom(const MessageReadBlock& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MessageReadBlock::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000007) != 0x00000007) return false;

  return true;
}

void MessageReadBlock::Swap(MessageReadBlock* other) {
  if (other != this) {
    std::swap(token_, other->token_);
    std::swap(size_, other->size_);
    std::swap(offset_, other->offset_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata MessageReadBlock::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = MessageReadBlock_descriptor_;
  metadata.reflection = MessageReadBlock_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)