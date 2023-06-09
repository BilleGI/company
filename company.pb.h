// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: company.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_company_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_company_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3012000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3012004 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_company_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_company_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_company_2eproto;
class Company;
class CompanyDefaultTypeInternal;
extern CompanyDefaultTypeInternal _Company_default_instance_;
PROTOBUF_NAMESPACE_OPEN
template<> ::Company* Arena::CreateMaybeMessage<::Company>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

// ===================================================================

class Company PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:Company) */ {
 public:
  inline Company() : Company(nullptr) {};
  virtual ~Company();

  Company(const Company& from);
  Company(Company&& from) noexcept
    : Company() {
    *this = ::std::move(from);
  }

  inline Company& operator=(const Company& from) {
    CopyFrom(from);
    return *this;
  }
  inline Company& operator=(Company&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance);
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const Company& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Company* internal_default_instance() {
    return reinterpret_cast<const Company*>(
               &_Company_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Company& a, Company& b) {
    a.Swap(&b);
  }
  inline void Swap(Company* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Company* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Company* New() const final {
    return CreateMaybeMessage<Company>(nullptr);
  }

  Company* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Company>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Company& from);
  void MergeFrom(const Company& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Company* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "Company";
  }
  protected:
  explicit Company(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_company_2eproto);
    return ::descriptor_table_company_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kAddressFieldNumber = 2,
    kTitleFieldNumber = 3,
    kActivityFieldNumber = 4,
    kYearFieldNumber = 1,
    kEconomyFieldNumber = 5,
  };
  // required string address = 2;
  bool has_address() const;
  private:
  bool _internal_has_address() const;
  public:
  void clear_address();
  const std::string& address() const;
  void set_address(const std::string& value);
  void set_address(std::string&& value);
  void set_address(const char* value);
  void set_address(const char* value, size_t size);
  std::string* mutable_address();
  std::string* release_address();
  void set_allocated_address(std::string* address);
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  std::string* unsafe_arena_release_address();
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  void unsafe_arena_set_allocated_address(
      std::string* address);
  private:
  const std::string& _internal_address() const;
  void _internal_set_address(const std::string& value);
  std::string* _internal_mutable_address();
  public:

  // required string title = 3;
  bool has_title() const;
  private:
  bool _internal_has_title() const;
  public:
  void clear_title();
  const std::string& title() const;
  void set_title(const std::string& value);
  void set_title(std::string&& value);
  void set_title(const char* value);
  void set_title(const char* value, size_t size);
  std::string* mutable_title();
  std::string* release_title();
  void set_allocated_title(std::string* title);
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  std::string* unsafe_arena_release_title();
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  void unsafe_arena_set_allocated_title(
      std::string* title);
  private:
  const std::string& _internal_title() const;
  void _internal_set_title(const std::string& value);
  std::string* _internal_mutable_title();
  public:

  // optional string activity = 4;
  bool has_activity() const;
  private:
  bool _internal_has_activity() const;
  public:
  void clear_activity();
  const std::string& activity() const;
  void set_activity(const std::string& value);
  void set_activity(std::string&& value);
  void set_activity(const char* value);
  void set_activity(const char* value, size_t size);
  std::string* mutable_activity();
  std::string* release_activity();
  void set_allocated_activity(std::string* activity);
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  std::string* unsafe_arena_release_activity();
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  void unsafe_arena_set_allocated_activity(
      std::string* activity);
  private:
  const std::string& _internal_activity() const;
  void _internal_set_activity(const std::string& value);
  std::string* _internal_mutable_activity();
  public:

  // required int32 year = 1;
  bool has_year() const;
  private:
  bool _internal_has_year() const;
  public:
  void clear_year();
  ::PROTOBUF_NAMESPACE_ID::int32 year() const;
  void set_year(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_year() const;
  void _internal_set_year(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // optional bool economy = 5;
  bool has_economy() const;
  private:
  bool _internal_has_economy() const;
  public:
  void clear_economy();
  bool economy() const;
  void set_economy(bool value);
  private:
  bool _internal_economy() const;
  void _internal_set_economy(bool value);
  public:

  // @@protoc_insertion_point(class_scope:Company)
 private:
  class _Internal;

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr address_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr title_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr activity_;
  ::PROTOBUF_NAMESPACE_ID::int32 year_;
  bool economy_;
  friend struct ::TableStruct_company_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Company

// required int32 year = 1;
inline bool Company::_internal_has_year() const {
  bool value = (_has_bits_[0] & 0x00000008u) != 0;
  return value;
}
inline bool Company::has_year() const {
  return _internal_has_year();
}
inline void Company::clear_year() {
  year_ = 0;
  _has_bits_[0] &= ~0x00000008u;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Company::_internal_year() const {
  return year_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Company::year() const {
  // @@protoc_insertion_point(field_get:Company.year)
  return _internal_year();
}
inline void Company::_internal_set_year(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _has_bits_[0] |= 0x00000008u;
  year_ = value;
}
inline void Company::set_year(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_year(value);
  // @@protoc_insertion_point(field_set:Company.year)
}

// required string address = 2;
inline bool Company::_internal_has_address() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool Company::has_address() const {
  return _internal_has_address();
}
inline void Company::clear_address() {
  address_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  _has_bits_[0] &= ~0x00000001u;
}
inline const std::string& Company::address() const {
  // @@protoc_insertion_point(field_get:Company.address)
  return _internal_address();
}
inline void Company::set_address(const std::string& value) {
  _internal_set_address(value);
  // @@protoc_insertion_point(field_set:Company.address)
}
inline std::string* Company::mutable_address() {
  // @@protoc_insertion_point(field_mutable:Company.address)
  return _internal_mutable_address();
}
inline const std::string& Company::_internal_address() const {
  return address_.Get();
}
inline void Company::_internal_set_address(const std::string& value) {
  _has_bits_[0] |= 0x00000001u;
  address_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value, GetArena());
}
inline void Company::set_address(std::string&& value) {
  _has_bits_[0] |= 0x00000001u;
  address_.Set(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:Company.address)
}
inline void Company::set_address(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _has_bits_[0] |= 0x00000001u;
  address_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArena());
  // @@protoc_insertion_point(field_set_char:Company.address)
}
inline void Company::set_address(const char* value,
    size_t size) {
  _has_bits_[0] |= 0x00000001u;
  address_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:Company.address)
}
inline std::string* Company::_internal_mutable_address() {
  _has_bits_[0] |= 0x00000001u;
  return address_.Mutable(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline std::string* Company::release_address() {
  // @@protoc_insertion_point(field_release:Company.address)
  if (!_internal_has_address()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000001u;
  return address_.ReleaseNonDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void Company::set_allocated_address(std::string* address) {
  if (address != nullptr) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  address_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), address,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:Company.address)
}
inline std::string* Company::unsafe_arena_release_address() {
  // @@protoc_insertion_point(field_unsafe_arena_release:Company.address)
  GOOGLE_DCHECK(GetArena() != nullptr);
  _has_bits_[0] &= ~0x00000001u;
  return address_.UnsafeArenaRelease(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      GetArena());
}
inline void Company::unsafe_arena_set_allocated_address(
    std::string* address) {
  GOOGLE_DCHECK(GetArena() != nullptr);
  if (address != nullptr) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  address_.UnsafeArenaSetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      address, GetArena());
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:Company.address)
}

// required string title = 3;
inline bool Company::_internal_has_title() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool Company::has_title() const {
  return _internal_has_title();
}
inline void Company::clear_title() {
  title_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  _has_bits_[0] &= ~0x00000002u;
}
inline const std::string& Company::title() const {
  // @@protoc_insertion_point(field_get:Company.title)
  return _internal_title();
}
inline void Company::set_title(const std::string& value) {
  _internal_set_title(value);
  // @@protoc_insertion_point(field_set:Company.title)
}
inline std::string* Company::mutable_title() {
  // @@protoc_insertion_point(field_mutable:Company.title)
  return _internal_mutable_title();
}
inline const std::string& Company::_internal_title() const {
  return title_.Get();
}
inline void Company::_internal_set_title(const std::string& value) {
  _has_bits_[0] |= 0x00000002u;
  title_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value, GetArena());
}
inline void Company::set_title(std::string&& value) {
  _has_bits_[0] |= 0x00000002u;
  title_.Set(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:Company.title)
}
inline void Company::set_title(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _has_bits_[0] |= 0x00000002u;
  title_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArena());
  // @@protoc_insertion_point(field_set_char:Company.title)
}
inline void Company::set_title(const char* value,
    size_t size) {
  _has_bits_[0] |= 0x00000002u;
  title_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:Company.title)
}
inline std::string* Company::_internal_mutable_title() {
  _has_bits_[0] |= 0x00000002u;
  return title_.Mutable(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline std::string* Company::release_title() {
  // @@protoc_insertion_point(field_release:Company.title)
  if (!_internal_has_title()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000002u;
  return title_.ReleaseNonDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void Company::set_allocated_title(std::string* title) {
  if (title != nullptr) {
    _has_bits_[0] |= 0x00000002u;
  } else {
    _has_bits_[0] &= ~0x00000002u;
  }
  title_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), title,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:Company.title)
}
inline std::string* Company::unsafe_arena_release_title() {
  // @@protoc_insertion_point(field_unsafe_arena_release:Company.title)
  GOOGLE_DCHECK(GetArena() != nullptr);
  _has_bits_[0] &= ~0x00000002u;
  return title_.UnsafeArenaRelease(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      GetArena());
}
inline void Company::unsafe_arena_set_allocated_title(
    std::string* title) {
  GOOGLE_DCHECK(GetArena() != nullptr);
  if (title != nullptr) {
    _has_bits_[0] |= 0x00000002u;
  } else {
    _has_bits_[0] &= ~0x00000002u;
  }
  title_.UnsafeArenaSetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      title, GetArena());
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:Company.title)
}

// optional string activity = 4;
inline bool Company::_internal_has_activity() const {
  bool value = (_has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline bool Company::has_activity() const {
  return _internal_has_activity();
}
inline void Company::clear_activity() {
  activity_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  _has_bits_[0] &= ~0x00000004u;
}
inline const std::string& Company::activity() const {
  // @@protoc_insertion_point(field_get:Company.activity)
  return _internal_activity();
}
inline void Company::set_activity(const std::string& value) {
  _internal_set_activity(value);
  // @@protoc_insertion_point(field_set:Company.activity)
}
inline std::string* Company::mutable_activity() {
  // @@protoc_insertion_point(field_mutable:Company.activity)
  return _internal_mutable_activity();
}
inline const std::string& Company::_internal_activity() const {
  return activity_.Get();
}
inline void Company::_internal_set_activity(const std::string& value) {
  _has_bits_[0] |= 0x00000004u;
  activity_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value, GetArena());
}
inline void Company::set_activity(std::string&& value) {
  _has_bits_[0] |= 0x00000004u;
  activity_.Set(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:Company.activity)
}
inline void Company::set_activity(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _has_bits_[0] |= 0x00000004u;
  activity_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArena());
  // @@protoc_insertion_point(field_set_char:Company.activity)
}
inline void Company::set_activity(const char* value,
    size_t size) {
  _has_bits_[0] |= 0x00000004u;
  activity_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:Company.activity)
}
inline std::string* Company::_internal_mutable_activity() {
  _has_bits_[0] |= 0x00000004u;
  return activity_.Mutable(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline std::string* Company::release_activity() {
  // @@protoc_insertion_point(field_release:Company.activity)
  if (!_internal_has_activity()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000004u;
  return activity_.ReleaseNonDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void Company::set_allocated_activity(std::string* activity) {
  if (activity != nullptr) {
    _has_bits_[0] |= 0x00000004u;
  } else {
    _has_bits_[0] &= ~0x00000004u;
  }
  activity_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), activity,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:Company.activity)
}
inline std::string* Company::unsafe_arena_release_activity() {
  // @@protoc_insertion_point(field_unsafe_arena_release:Company.activity)
  GOOGLE_DCHECK(GetArena() != nullptr);
  _has_bits_[0] &= ~0x00000004u;
  return activity_.UnsafeArenaRelease(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      GetArena());
}
inline void Company::unsafe_arena_set_allocated_activity(
    std::string* activity) {
  GOOGLE_DCHECK(GetArena() != nullptr);
  if (activity != nullptr) {
    _has_bits_[0] |= 0x00000004u;
  } else {
    _has_bits_[0] &= ~0x00000004u;
  }
  activity_.UnsafeArenaSetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      activity, GetArena());
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:Company.activity)
}

// optional bool economy = 5;
inline bool Company::_internal_has_economy() const {
  bool value = (_has_bits_[0] & 0x00000010u) != 0;
  return value;
}
inline bool Company::has_economy() const {
  return _internal_has_economy();
}
inline void Company::clear_economy() {
  economy_ = false;
  _has_bits_[0] &= ~0x00000010u;
}
inline bool Company::_internal_economy() const {
  return economy_;
}
inline bool Company::economy() const {
  // @@protoc_insertion_point(field_get:Company.economy)
  return _internal_economy();
}
inline void Company::_internal_set_economy(bool value) {
  _has_bits_[0] |= 0x00000010u;
  economy_ = value;
}
inline void Company::set_economy(bool value) {
  _internal_set_economy(value);
  // @@protoc_insertion_point(field_set:Company.economy)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_company_2eproto
