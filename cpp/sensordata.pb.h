// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: sensordata.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_sensordata_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_sensordata_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_sensordata_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_sensordata_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_sensordata_2eproto;
class SensorData;
class SensorDataDefaultTypeInternal;
extern SensorDataDefaultTypeInternal _SensorData_default_instance_;
PROTOBUF_NAMESPACE_OPEN
template<> ::SensorData* Arena::CreateMaybeMessage<::SensorData>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

// ===================================================================

class SensorData PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:SensorData) */ {
 public:
  inline SensorData() : SensorData(nullptr) {};
  virtual ~SensorData();

  SensorData(const SensorData& from);
  SensorData(SensorData&& from) noexcept
    : SensorData() {
    *this = ::std::move(from);
  }

  inline SensorData& operator=(const SensorData& from) {
    CopyFrom(from);
    return *this;
  }
  inline SensorData& operator=(SensorData&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
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
  static const SensorData& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const SensorData* internal_default_instance() {
    return reinterpret_cast<const SensorData*>(
               &_SensorData_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(SensorData& a, SensorData& b) {
    a.Swap(&b);
  }
  inline void Swap(SensorData* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(SensorData* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline SensorData* New() const final {
    return CreateMaybeMessage<SensorData>(nullptr);
  }

  SensorData* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<SensorData>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const SensorData& from);
  void MergeFrom(const SensorData& from);
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
  void InternalSwap(SensorData* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "SensorData";
  }
  protected:
  explicit SensorData(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_sensordata_2eproto);
    return ::descriptor_table_sensordata_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kNameFieldNumber = 2,
    kUnitFieldNumber = 3,
    kValueFieldNumber = 1,
  };
  // string name = 2;
  void clear_name();
  const std::string& name() const;
  void set_name(const std::string& value);
  void set_name(std::string&& value);
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  std::string* mutable_name();
  std::string* release_name();
  void set_allocated_name(std::string* name);
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  std::string* unsafe_arena_release_name();
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  void unsafe_arena_set_allocated_name(
      std::string* name);
  private:
  const std::string& _internal_name() const;
  void _internal_set_name(const std::string& value);
  std::string* _internal_mutable_name();
  public:

  // string unit = 3;
  void clear_unit();
  const std::string& unit() const;
  void set_unit(const std::string& value);
  void set_unit(std::string&& value);
  void set_unit(const char* value);
  void set_unit(const char* value, size_t size);
  std::string* mutable_unit();
  std::string* release_unit();
  void set_allocated_unit(std::string* unit);
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  std::string* unsafe_arena_release_unit();
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  void unsafe_arena_set_allocated_unit(
      std::string* unit);
  private:
  const std::string& _internal_unit() const;
  void _internal_set_unit(const std::string& value);
  std::string* _internal_mutable_unit();
  public:

  // float value = 1;
  void clear_value();
  float value() const;
  void set_value(float value);
  private:
  float _internal_value() const;
  void _internal_set_value(float value);
  public:

  // @@protoc_insertion_point(class_scope:SensorData)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr name_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr unit_;
  float value_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_sensordata_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// SensorData

// float value = 1;
inline void SensorData::clear_value() {
  value_ = 0;
}
inline float SensorData::_internal_value() const {
  return value_;
}
inline float SensorData::value() const {
  // @@protoc_insertion_point(field_get:SensorData.value)
  return _internal_value();
}
inline void SensorData::_internal_set_value(float value) {
  
  value_ = value;
}
inline void SensorData::set_value(float value) {
  _internal_set_value(value);
  // @@protoc_insertion_point(field_set:SensorData.value)
}

// string name = 2;
inline void SensorData::clear_name() {
  name_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline const std::string& SensorData::name() const {
  // @@protoc_insertion_point(field_get:SensorData.name)
  return _internal_name();
}
inline void SensorData::set_name(const std::string& value) {
  _internal_set_name(value);
  // @@protoc_insertion_point(field_set:SensorData.name)
}
inline std::string* SensorData::mutable_name() {
  // @@protoc_insertion_point(field_mutable:SensorData.name)
  return _internal_mutable_name();
}
inline const std::string& SensorData::_internal_name() const {
  return name_.Get();
}
inline void SensorData::_internal_set_name(const std::string& value) {
  
  name_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value, GetArena());
}
inline void SensorData::set_name(std::string&& value) {
  
  name_.Set(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:SensorData.name)
}
inline void SensorData::set_name(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  name_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArena());
  // @@protoc_insertion_point(field_set_char:SensorData.name)
}
inline void SensorData::set_name(const char* value,
    size_t size) {
  
  name_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:SensorData.name)
}
inline std::string* SensorData::_internal_mutable_name() {
  
  return name_.Mutable(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline std::string* SensorData::release_name() {
  // @@protoc_insertion_point(field_release:SensorData.name)
  return name_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void SensorData::set_allocated_name(std::string* name) {
  if (name != nullptr) {
    
  } else {
    
  }
  name_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), name,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:SensorData.name)
}
inline std::string* SensorData::unsafe_arena_release_name() {
  // @@protoc_insertion_point(field_unsafe_arena_release:SensorData.name)
  GOOGLE_DCHECK(GetArena() != nullptr);
  
  return name_.UnsafeArenaRelease(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      GetArena());
}
inline void SensorData::unsafe_arena_set_allocated_name(
    std::string* name) {
  GOOGLE_DCHECK(GetArena() != nullptr);
  if (name != nullptr) {
    
  } else {
    
  }
  name_.UnsafeArenaSetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      name, GetArena());
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:SensorData.name)
}

// string unit = 3;
inline void SensorData::clear_unit() {
  unit_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline const std::string& SensorData::unit() const {
  // @@protoc_insertion_point(field_get:SensorData.unit)
  return _internal_unit();
}
inline void SensorData::set_unit(const std::string& value) {
  _internal_set_unit(value);
  // @@protoc_insertion_point(field_set:SensorData.unit)
}
inline std::string* SensorData::mutable_unit() {
  // @@protoc_insertion_point(field_mutable:SensorData.unit)
  return _internal_mutable_unit();
}
inline const std::string& SensorData::_internal_unit() const {
  return unit_.Get();
}
inline void SensorData::_internal_set_unit(const std::string& value) {
  
  unit_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value, GetArena());
}
inline void SensorData::set_unit(std::string&& value) {
  
  unit_.Set(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:SensorData.unit)
}
inline void SensorData::set_unit(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  unit_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArena());
  // @@protoc_insertion_point(field_set_char:SensorData.unit)
}
inline void SensorData::set_unit(const char* value,
    size_t size) {
  
  unit_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:SensorData.unit)
}
inline std::string* SensorData::_internal_mutable_unit() {
  
  return unit_.Mutable(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline std::string* SensorData::release_unit() {
  // @@protoc_insertion_point(field_release:SensorData.unit)
  return unit_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void SensorData::set_allocated_unit(std::string* unit) {
  if (unit != nullptr) {
    
  } else {
    
  }
  unit_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), unit,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:SensorData.unit)
}
inline std::string* SensorData::unsafe_arena_release_unit() {
  // @@protoc_insertion_point(field_unsafe_arena_release:SensorData.unit)
  GOOGLE_DCHECK(GetArena() != nullptr);
  
  return unit_.UnsafeArenaRelease(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      GetArena());
}
inline void SensorData::unsafe_arena_set_allocated_unit(
    std::string* unit) {
  GOOGLE_DCHECK(GetArena() != nullptr);
  if (unit != nullptr) {
    
  } else {
    
  }
  unit_.UnsafeArenaSetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      unit, GetArena());
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:SensorData.unit)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_sensordata_2eproto
