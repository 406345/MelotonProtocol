// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: MessageBlockList.proto

#ifndef PROTOBUF_MessageBlockList_2eproto__INCLUDED
#define PROTOBUF_MessageBlockList_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2006000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_MessageBlockList_2eproto();
void protobuf_AssignDesc_MessageBlockList_2eproto();
void protobuf_ShutdownFile_MessageBlockList_2eproto();

class MessageBlockList;

// ===================================================================

class MessageBlockList : public ::google::protobuf::Message {
 public:
  MessageBlockList();
  virtual ~MessageBlockList();

  MessageBlockList(const MessageBlockList& from);

  inline MessageBlockList& operator=(const MessageBlockList& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const MessageBlockList& default_instance();

  void Swap(MessageBlockList* other);

  // implements Message ----------------------------------------------

  MessageBlockList* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const MessageBlockList& from);
  void MergeFrom(const MessageBlockList& from);
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
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required int32 BlockCount = 1;
  inline bool has_blockcount() const;
  inline void clear_blockcount();
  static const int kBlockCountFieldNumber = 1;
  inline ::google::protobuf::int32 blockcount() const;
  inline void set_blockcount(::google::protobuf::int32 value);

  // repeated string Token = 2;
  inline int token_size() const;
  inline void clear_token();
  static const int kTokenFieldNumber = 2;
  inline const ::std::string& token(int index) const;
  inline ::std::string* mutable_token(int index);
  inline void set_token(int index, const ::std::string& value);
  inline void set_token(int index, const char* value);
  inline void set_token(int index, const char* value, size_t size);
  inline ::std::string* add_token();
  inline void add_token(const ::std::string& value);
  inline void add_token(const char* value);
  inline void add_token(const char* value, size_t size);
  inline const ::google::protobuf::RepeatedPtrField< ::std::string>& token() const;
  inline ::google::protobuf::RepeatedPtrField< ::std::string>* mutable_token();

  // repeated string IP = 3;
  inline int ip_size() const;
  inline void clear_ip();
  static const int kIPFieldNumber = 3;
  inline const ::std::string& ip(int index) const;
  inline ::std::string* mutable_ip(int index);
  inline void set_ip(int index, const ::std::string& value);
  inline void set_ip(int index, const char* value);
  inline void set_ip(int index, const char* value, size_t size);
  inline ::std::string* add_ip();
  inline void add_ip(const ::std::string& value);
  inline void add_ip(const char* value);
  inline void add_ip(const char* value, size_t size);
  inline const ::google::protobuf::RepeatedPtrField< ::std::string>& ip() const;
  inline ::google::protobuf::RepeatedPtrField< ::std::string>* mutable_ip();

  // repeated int32 Port = 4;
  inline int port_size() const;
  inline void clear_port();
  static const int kPortFieldNumber = 4;
  inline ::google::protobuf::int32 port(int index) const;
  inline void set_port(int index, ::google::protobuf::int32 value);
  inline void add_port(::google::protobuf::int32 value);
  inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
      port() const;
  inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
      mutable_port();

  // repeated int64 Size = 5;
  inline int size_size() const;
  inline void clear_size();
  static const int kSizeFieldNumber = 5;
  inline ::google::protobuf::int64 size(int index) const;
  inline void set_size(int index, ::google::protobuf::int64 value);
  inline void add_size(::google::protobuf::int64 value);
  inline const ::google::protobuf::RepeatedField< ::google::protobuf::int64 >&
      size() const;
  inline ::google::protobuf::RepeatedField< ::google::protobuf::int64 >*
      mutable_size();

  // repeated int64 FileOffset = 6;
  inline int fileoffset_size() const;
  inline void clear_fileoffset();
  static const int kFileOffsetFieldNumber = 6;
  inline ::google::protobuf::int64 fileoffset(int index) const;
  inline void set_fileoffset(int index, ::google::protobuf::int64 value);
  inline void add_fileoffset(::google::protobuf::int64 value);
  inline const ::google::protobuf::RepeatedField< ::google::protobuf::int64 >&
      fileoffset() const;
  inline ::google::protobuf::RepeatedField< ::google::protobuf::int64 >*
      mutable_fileoffset();

  // repeated int64 PartId = 7;
  inline int partid_size() const;
  inline void clear_partid();
  static const int kPartIdFieldNumber = 7;
  inline ::google::protobuf::int64 partid(int index) const;
  inline void set_partid(int index, ::google::protobuf::int64 value);
  inline void add_partid(::google::protobuf::int64 value);
  inline const ::google::protobuf::RepeatedField< ::google::protobuf::int64 >&
      partid() const;
  inline ::google::protobuf::RepeatedField< ::google::protobuf::int64 >*
      mutable_partid();

  // @@protoc_insertion_point(class_scope:MessageBlockList)
 private:
  inline void set_has_blockcount();
  inline void clear_has_blockcount();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::std::string> token_;
  ::google::protobuf::RepeatedPtrField< ::std::string> ip_;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 > port_;
  ::google::protobuf::RepeatedField< ::google::protobuf::int64 > size_;
  ::google::protobuf::RepeatedField< ::google::protobuf::int64 > fileoffset_;
  ::google::protobuf::RepeatedField< ::google::protobuf::int64 > partid_;
  ::google::protobuf::int32 blockcount_;
  friend void  protobuf_AddDesc_MessageBlockList_2eproto();
  friend void protobuf_AssignDesc_MessageBlockList_2eproto();
  friend void protobuf_ShutdownFile_MessageBlockList_2eproto();

  void InitAsDefaultInstance();
  static MessageBlockList* default_instance_;
};
// ===================================================================


// ===================================================================

// MessageBlockList

// required int32 BlockCount = 1;
inline bool MessageBlockList::has_blockcount() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void MessageBlockList::set_has_blockcount() {
  _has_bits_[0] |= 0x00000001u;
}
inline void MessageBlockList::clear_has_blockcount() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void MessageBlockList::clear_blockcount() {
  blockcount_ = 0;
  clear_has_blockcount();
}
inline ::google::protobuf::int32 MessageBlockList::blockcount() const {
  // @@protoc_insertion_point(field_get:MessageBlockList.BlockCount)
  return blockcount_;
}
inline void MessageBlockList::set_blockcount(::google::protobuf::int32 value) {
  set_has_blockcount();
  blockcount_ = value;
  // @@protoc_insertion_point(field_set:MessageBlockList.BlockCount)
}

// repeated string Token = 2;
inline int MessageBlockList::token_size() const {
  return token_.size();
}
inline void MessageBlockList::clear_token() {
  token_.Clear();
}
inline const ::std::string& MessageBlockList::token(int index) const {
  // @@protoc_insertion_point(field_get:MessageBlockList.Token)
  return token_.Get(index);
}
inline ::std::string* MessageBlockList::mutable_token(int index) {
  // @@protoc_insertion_point(field_mutable:MessageBlockList.Token)
  return token_.Mutable(index);
}
inline void MessageBlockList::set_token(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:MessageBlockList.Token)
  token_.Mutable(index)->assign(value);
}
inline void MessageBlockList::set_token(int index, const char* value) {
  token_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:MessageBlockList.Token)
}
inline void MessageBlockList::set_token(int index, const char* value, size_t size) {
  token_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:MessageBlockList.Token)
}
inline ::std::string* MessageBlockList::add_token() {
  return token_.Add();
}
inline void MessageBlockList::add_token(const ::std::string& value) {
  token_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:MessageBlockList.Token)
}
inline void MessageBlockList::add_token(const char* value) {
  token_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:MessageBlockList.Token)
}
inline void MessageBlockList::add_token(const char* value, size_t size) {
  token_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:MessageBlockList.Token)
}
inline const ::google::protobuf::RepeatedPtrField< ::std::string>&
MessageBlockList::token() const {
  // @@protoc_insertion_point(field_list:MessageBlockList.Token)
  return token_;
}
inline ::google::protobuf::RepeatedPtrField< ::std::string>*
MessageBlockList::mutable_token() {
  // @@protoc_insertion_point(field_mutable_list:MessageBlockList.Token)
  return &token_;
}

// repeated string IP = 3;
inline int MessageBlockList::ip_size() const {
  return ip_.size();
}
inline void MessageBlockList::clear_ip() {
  ip_.Clear();
}
inline const ::std::string& MessageBlockList::ip(int index) const {
  // @@protoc_insertion_point(field_get:MessageBlockList.IP)
  return ip_.Get(index);
}
inline ::std::string* MessageBlockList::mutable_ip(int index) {
  // @@protoc_insertion_point(field_mutable:MessageBlockList.IP)
  return ip_.Mutable(index);
}
inline void MessageBlockList::set_ip(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:MessageBlockList.IP)
  ip_.Mutable(index)->assign(value);
}
inline void MessageBlockList::set_ip(int index, const char* value) {
  ip_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:MessageBlockList.IP)
}
inline void MessageBlockList::set_ip(int index, const char* value, size_t size) {
  ip_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:MessageBlockList.IP)
}
inline ::std::string* MessageBlockList::add_ip() {
  return ip_.Add();
}
inline void MessageBlockList::add_ip(const ::std::string& value) {
  ip_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:MessageBlockList.IP)
}
inline void MessageBlockList::add_ip(const char* value) {
  ip_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:MessageBlockList.IP)
}
inline void MessageBlockList::add_ip(const char* value, size_t size) {
  ip_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:MessageBlockList.IP)
}
inline const ::google::protobuf::RepeatedPtrField< ::std::string>&
MessageBlockList::ip() const {
  // @@protoc_insertion_point(field_list:MessageBlockList.IP)
  return ip_;
}
inline ::google::protobuf::RepeatedPtrField< ::std::string>*
MessageBlockList::mutable_ip() {
  // @@protoc_insertion_point(field_mutable_list:MessageBlockList.IP)
  return &ip_;
}

// repeated int32 Port = 4;
inline int MessageBlockList::port_size() const {
  return port_.size();
}
inline void MessageBlockList::clear_port() {
  port_.Clear();
}
inline ::google::protobuf::int32 MessageBlockList::port(int index) const {
  // @@protoc_insertion_point(field_get:MessageBlockList.Port)
  return port_.Get(index);
}
inline void MessageBlockList::set_port(int index, ::google::protobuf::int32 value) {
  port_.Set(index, value);
  // @@protoc_insertion_point(field_set:MessageBlockList.Port)
}
inline void MessageBlockList::add_port(::google::protobuf::int32 value) {
  port_.Add(value);
  // @@protoc_insertion_point(field_add:MessageBlockList.Port)
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
MessageBlockList::port() const {
  // @@protoc_insertion_point(field_list:MessageBlockList.Port)
  return port_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
MessageBlockList::mutable_port() {
  // @@protoc_insertion_point(field_mutable_list:MessageBlockList.Port)
  return &port_;
}

// repeated int64 Size = 5;
inline int MessageBlockList::size_size() const {
  return size_.size();
}
inline void MessageBlockList::clear_size() {
  size_.Clear();
}
inline ::google::protobuf::int64 MessageBlockList::size(int index) const {
  // @@protoc_insertion_point(field_get:MessageBlockList.Size)
  return size_.Get(index);
}
inline void MessageBlockList::set_size(int index, ::google::protobuf::int64 value) {
  size_.Set(index, value);
  // @@protoc_insertion_point(field_set:MessageBlockList.Size)
}
inline void MessageBlockList::add_size(::google::protobuf::int64 value) {
  size_.Add(value);
  // @@protoc_insertion_point(field_add:MessageBlockList.Size)
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::int64 >&
MessageBlockList::size() const {
  // @@protoc_insertion_point(field_list:MessageBlockList.Size)
  return size_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::int64 >*
MessageBlockList::mutable_size() {
  // @@protoc_insertion_point(field_mutable_list:MessageBlockList.Size)
  return &size_;
}

// repeated int64 FileOffset = 6;
inline int MessageBlockList::fileoffset_size() const {
  return fileoffset_.size();
}
inline void MessageBlockList::clear_fileoffset() {
  fileoffset_.Clear();
}
inline ::google::protobuf::int64 MessageBlockList::fileoffset(int index) const {
  // @@protoc_insertion_point(field_get:MessageBlockList.FileOffset)
  return fileoffset_.Get(index);
}
inline void MessageBlockList::set_fileoffset(int index, ::google::protobuf::int64 value) {
  fileoffset_.Set(index, value);
  // @@protoc_insertion_point(field_set:MessageBlockList.FileOffset)
}
inline void MessageBlockList::add_fileoffset(::google::protobuf::int64 value) {
  fileoffset_.Add(value);
  // @@protoc_insertion_point(field_add:MessageBlockList.FileOffset)
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::int64 >&
MessageBlockList::fileoffset() const {
  // @@protoc_insertion_point(field_list:MessageBlockList.FileOffset)
  return fileoffset_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::int64 >*
MessageBlockList::mutable_fileoffset() {
  // @@protoc_insertion_point(field_mutable_list:MessageBlockList.FileOffset)
  return &fileoffset_;
}

// repeated int64 PartId = 7;
inline int MessageBlockList::partid_size() const {
  return partid_.size();
}
inline void MessageBlockList::clear_partid() {
  partid_.Clear();
}
inline ::google::protobuf::int64 MessageBlockList::partid(int index) const {
  // @@protoc_insertion_point(field_get:MessageBlockList.PartId)
  return partid_.Get(index);
}
inline void MessageBlockList::set_partid(int index, ::google::protobuf::int64 value) {
  partid_.Set(index, value);
  // @@protoc_insertion_point(field_set:MessageBlockList.PartId)
}
inline void MessageBlockList::add_partid(::google::protobuf::int64 value) {
  partid_.Add(value);
  // @@protoc_insertion_point(field_add:MessageBlockList.PartId)
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::int64 >&
MessageBlockList::partid() const {
  // @@protoc_insertion_point(field_list:MessageBlockList.PartId)
  return partid_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::int64 >*
MessageBlockList::mutable_partid() {
  // @@protoc_insertion_point(field_mutable_list:MessageBlockList.PartId)
  return &partid_;
}


// @@protoc_insertion_point(namespace_scope)

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_MessageBlockList_2eproto__INCLUDED