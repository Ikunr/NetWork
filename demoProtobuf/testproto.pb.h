// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: testproto.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_testproto_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_testproto_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_testproto_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_testproto_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[2]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_testproto_2eproto;
class SearchResponse;
class SearchResponseDefaultTypeInternal;
extern SearchResponseDefaultTypeInternal _SearchResponse_default_instance_;
class SearchResponse_Result;
class SearchResponse_ResultDefaultTypeInternal;
extern SearchResponse_ResultDefaultTypeInternal _SearchResponse_Result_default_instance_;
PROTOBUF_NAMESPACE_OPEN
template<> ::SearchResponse* Arena::CreateMaybeMessage<::SearchResponse>(Arena*);
template<> ::SearchResponse_Result* Arena::CreateMaybeMessage<::SearchResponse_Result>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

// ===================================================================

class SearchResponse_Result PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:SearchResponse.Result) */ {
 public:
  inline SearchResponse_Result() : SearchResponse_Result(nullptr) {};
  virtual ~SearchResponse_Result();

  SearchResponse_Result(const SearchResponse_Result& from);
  SearchResponse_Result(SearchResponse_Result&& from) noexcept
    : SearchResponse_Result() {
    *this = ::std::move(from);
  }

  inline SearchResponse_Result& operator=(const SearchResponse_Result& from) {
    CopyFrom(from);
    return *this;
  }
  inline SearchResponse_Result& operator=(SearchResponse_Result&& from) noexcept {
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
  static const SearchResponse_Result& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const SearchResponse_Result* internal_default_instance() {
    return reinterpret_cast<const SearchResponse_Result*>(
               &_SearchResponse_Result_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(SearchResponse_Result& a, SearchResponse_Result& b) {
    a.Swap(&b);
  }
  inline void Swap(SearchResponse_Result* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(SearchResponse_Result* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline SearchResponse_Result* New() const final {
    return CreateMaybeMessage<SearchResponse_Result>(nullptr);
  }

  SearchResponse_Result* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<SearchResponse_Result>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const SearchResponse_Result& from);
  void MergeFrom(const SearchResponse_Result& from);
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
  void InternalSwap(SearchResponse_Result* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "SearchResponse.Result";
  }
  protected:
  explicit SearchResponse_Result(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_testproto_2eproto);
    return ::descriptor_table_testproto_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kSnippetsFieldNumber = 4,
    kUrlFieldNumber = 1,
    kTitleFieldNumber = 2,
    kTelephoneFieldNumber = 3,
  };
  // repeated string snippets = 4;
  int snippets_size() const;
  private:
  int _internal_snippets_size() const;
  public:
  void clear_snippets();
  const std::string& snippets(int index) const;
  std::string* mutable_snippets(int index);
  void set_snippets(int index, const std::string& value);
  void set_snippets(int index, std::string&& value);
  void set_snippets(int index, const char* value);
  void set_snippets(int index, const char* value, size_t size);
  std::string* add_snippets();
  void add_snippets(const std::string& value);
  void add_snippets(std::string&& value);
  void add_snippets(const char* value);
  void add_snippets(const char* value, size_t size);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>& snippets() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>* mutable_snippets();
  private:
  const std::string& _internal_snippets(int index) const;
  std::string* _internal_add_snippets();
  public:

  // string url = 1;
  void clear_url();
  const std::string& url() const;
  void set_url(const std::string& value);
  void set_url(std::string&& value);
  void set_url(const char* value);
  void set_url(const char* value, size_t size);
  std::string* mutable_url();
  std::string* release_url();
  void set_allocated_url(std::string* url);
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  std::string* unsafe_arena_release_url();
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  void unsafe_arena_set_allocated_url(
      std::string* url);
  private:
  const std::string& _internal_url() const;
  void _internal_set_url(const std::string& value);
  std::string* _internal_mutable_url();
  public:

  // string title = 2;
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

  // int64 telephone = 3;
  void clear_telephone();
  ::PROTOBUF_NAMESPACE_ID::int64 telephone() const;
  void set_telephone(::PROTOBUF_NAMESPACE_ID::int64 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int64 _internal_telephone() const;
  void _internal_set_telephone(::PROTOBUF_NAMESPACE_ID::int64 value);
  public:

  // @@protoc_insertion_point(class_scope:SearchResponse.Result)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string> snippets_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr url_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr title_;
  ::PROTOBUF_NAMESPACE_ID::int64 telephone_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_testproto_2eproto;
};
// -------------------------------------------------------------------

class SearchResponse PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:SearchResponse) */ {
 public:
  inline SearchResponse() : SearchResponse(nullptr) {};
  virtual ~SearchResponse();

  SearchResponse(const SearchResponse& from);
  SearchResponse(SearchResponse&& from) noexcept
    : SearchResponse() {
    *this = ::std::move(from);
  }

  inline SearchResponse& operator=(const SearchResponse& from) {
    CopyFrom(from);
    return *this;
  }
  inline SearchResponse& operator=(SearchResponse&& from) noexcept {
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
  static const SearchResponse& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const SearchResponse* internal_default_instance() {
    return reinterpret_cast<const SearchResponse*>(
               &_SearchResponse_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(SearchResponse& a, SearchResponse& b) {
    a.Swap(&b);
  }
  inline void Swap(SearchResponse* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(SearchResponse* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline SearchResponse* New() const final {
    return CreateMaybeMessage<SearchResponse>(nullptr);
  }

  SearchResponse* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<SearchResponse>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const SearchResponse& from);
  void MergeFrom(const SearchResponse& from);
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
  void InternalSwap(SearchResponse* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "SearchResponse";
  }
  protected:
  explicit SearchResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_testproto_2eproto);
    return ::descriptor_table_testproto_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  typedef SearchResponse_Result Result;

  // accessors -------------------------------------------------------

  enum : int {
    kResultsFieldNumber = 1,
  };
  // repeated .SearchResponse.Result results = 1;
  int results_size() const;
  private:
  int _internal_results_size() const;
  public:
  void clear_results();
  ::SearchResponse_Result* mutable_results(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::SearchResponse_Result >*
      mutable_results();
  private:
  const ::SearchResponse_Result& _internal_results(int index) const;
  ::SearchResponse_Result* _internal_add_results();
  public:
  const ::SearchResponse_Result& results(int index) const;
  ::SearchResponse_Result* add_results();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::SearchResponse_Result >&
      results() const;

  // @@protoc_insertion_point(class_scope:SearchResponse)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::SearchResponse_Result > results_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_testproto_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// SearchResponse_Result

// string url = 1;
inline void SearchResponse_Result::clear_url() {
  url_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline const std::string& SearchResponse_Result::url() const {
  // @@protoc_insertion_point(field_get:SearchResponse.Result.url)
  return _internal_url();
}
inline void SearchResponse_Result::set_url(const std::string& value) {
  _internal_set_url(value);
  // @@protoc_insertion_point(field_set:SearchResponse.Result.url)
}
inline std::string* SearchResponse_Result::mutable_url() {
  // @@protoc_insertion_point(field_mutable:SearchResponse.Result.url)
  return _internal_mutable_url();
}
inline const std::string& SearchResponse_Result::_internal_url() const {
  return url_.Get();
}
inline void SearchResponse_Result::_internal_set_url(const std::string& value) {
  
  url_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value, GetArena());
}
inline void SearchResponse_Result::set_url(std::string&& value) {
  
  url_.Set(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:SearchResponse.Result.url)
}
inline void SearchResponse_Result::set_url(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  url_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArena());
  // @@protoc_insertion_point(field_set_char:SearchResponse.Result.url)
}
inline void SearchResponse_Result::set_url(const char* value,
    size_t size) {
  
  url_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:SearchResponse.Result.url)
}
inline std::string* SearchResponse_Result::_internal_mutable_url() {
  
  return url_.Mutable(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline std::string* SearchResponse_Result::release_url() {
  // @@protoc_insertion_point(field_release:SearchResponse.Result.url)
  return url_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void SearchResponse_Result::set_allocated_url(std::string* url) {
  if (url != nullptr) {
    
  } else {
    
  }
  url_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), url,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:SearchResponse.Result.url)
}
inline std::string* SearchResponse_Result::unsafe_arena_release_url() {
  // @@protoc_insertion_point(field_unsafe_arena_release:SearchResponse.Result.url)
  GOOGLE_DCHECK(GetArena() != nullptr);
  
  return url_.UnsafeArenaRelease(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      GetArena());
}
inline void SearchResponse_Result::unsafe_arena_set_allocated_url(
    std::string* url) {
  GOOGLE_DCHECK(GetArena() != nullptr);
  if (url != nullptr) {
    
  } else {
    
  }
  url_.UnsafeArenaSetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      url, GetArena());
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:SearchResponse.Result.url)
}

// string title = 2;
inline void SearchResponse_Result::clear_title() {
  title_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline const std::string& SearchResponse_Result::title() const {
  // @@protoc_insertion_point(field_get:SearchResponse.Result.title)
  return _internal_title();
}
inline void SearchResponse_Result::set_title(const std::string& value) {
  _internal_set_title(value);
  // @@protoc_insertion_point(field_set:SearchResponse.Result.title)
}
inline std::string* SearchResponse_Result::mutable_title() {
  // @@protoc_insertion_point(field_mutable:SearchResponse.Result.title)
  return _internal_mutable_title();
}
inline const std::string& SearchResponse_Result::_internal_title() const {
  return title_.Get();
}
inline void SearchResponse_Result::_internal_set_title(const std::string& value) {
  
  title_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value, GetArena());
}
inline void SearchResponse_Result::set_title(std::string&& value) {
  
  title_.Set(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:SearchResponse.Result.title)
}
inline void SearchResponse_Result::set_title(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  title_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArena());
  // @@protoc_insertion_point(field_set_char:SearchResponse.Result.title)
}
inline void SearchResponse_Result::set_title(const char* value,
    size_t size) {
  
  title_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:SearchResponse.Result.title)
}
inline std::string* SearchResponse_Result::_internal_mutable_title() {
  
  return title_.Mutable(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline std::string* SearchResponse_Result::release_title() {
  // @@protoc_insertion_point(field_release:SearchResponse.Result.title)
  return title_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void SearchResponse_Result::set_allocated_title(std::string* title) {
  if (title != nullptr) {
    
  } else {
    
  }
  title_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), title,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:SearchResponse.Result.title)
}
inline std::string* SearchResponse_Result::unsafe_arena_release_title() {
  // @@protoc_insertion_point(field_unsafe_arena_release:SearchResponse.Result.title)
  GOOGLE_DCHECK(GetArena() != nullptr);
  
  return title_.UnsafeArenaRelease(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      GetArena());
}
inline void SearchResponse_Result::unsafe_arena_set_allocated_title(
    std::string* title) {
  GOOGLE_DCHECK(GetArena() != nullptr);
  if (title != nullptr) {
    
  } else {
    
  }
  title_.UnsafeArenaSetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      title, GetArena());
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:SearchResponse.Result.title)
}

// int64 telephone = 3;
inline void SearchResponse_Result::clear_telephone() {
  telephone_ = PROTOBUF_LONGLONG(0);
}
inline ::PROTOBUF_NAMESPACE_ID::int64 SearchResponse_Result::_internal_telephone() const {
  return telephone_;
}
inline ::PROTOBUF_NAMESPACE_ID::int64 SearchResponse_Result::telephone() const {
  // @@protoc_insertion_point(field_get:SearchResponse.Result.telephone)
  return _internal_telephone();
}
inline void SearchResponse_Result::_internal_set_telephone(::PROTOBUF_NAMESPACE_ID::int64 value) {
  
  telephone_ = value;
}
inline void SearchResponse_Result::set_telephone(::PROTOBUF_NAMESPACE_ID::int64 value) {
  _internal_set_telephone(value);
  // @@protoc_insertion_point(field_set:SearchResponse.Result.telephone)
}

// repeated string snippets = 4;
inline int SearchResponse_Result::_internal_snippets_size() const {
  return snippets_.size();
}
inline int SearchResponse_Result::snippets_size() const {
  return _internal_snippets_size();
}
inline void SearchResponse_Result::clear_snippets() {
  snippets_.Clear();
}
inline std::string* SearchResponse_Result::add_snippets() {
  // @@protoc_insertion_point(field_add_mutable:SearchResponse.Result.snippets)
  return _internal_add_snippets();
}
inline const std::string& SearchResponse_Result::_internal_snippets(int index) const {
  return snippets_.Get(index);
}
inline const std::string& SearchResponse_Result::snippets(int index) const {
  // @@protoc_insertion_point(field_get:SearchResponse.Result.snippets)
  return _internal_snippets(index);
}
inline std::string* SearchResponse_Result::mutable_snippets(int index) {
  // @@protoc_insertion_point(field_mutable:SearchResponse.Result.snippets)
  return snippets_.Mutable(index);
}
inline void SearchResponse_Result::set_snippets(int index, const std::string& value) {
  // @@protoc_insertion_point(field_set:SearchResponse.Result.snippets)
  snippets_.Mutable(index)->assign(value);
}
inline void SearchResponse_Result::set_snippets(int index, std::string&& value) {
  // @@protoc_insertion_point(field_set:SearchResponse.Result.snippets)
  snippets_.Mutable(index)->assign(std::move(value));
}
inline void SearchResponse_Result::set_snippets(int index, const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  snippets_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:SearchResponse.Result.snippets)
}
inline void SearchResponse_Result::set_snippets(int index, const char* value, size_t size) {
  snippets_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:SearchResponse.Result.snippets)
}
inline std::string* SearchResponse_Result::_internal_add_snippets() {
  return snippets_.Add();
}
inline void SearchResponse_Result::add_snippets(const std::string& value) {
  snippets_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:SearchResponse.Result.snippets)
}
inline void SearchResponse_Result::add_snippets(std::string&& value) {
  snippets_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:SearchResponse.Result.snippets)
}
inline void SearchResponse_Result::add_snippets(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  snippets_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:SearchResponse.Result.snippets)
}
inline void SearchResponse_Result::add_snippets(const char* value, size_t size) {
  snippets_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:SearchResponse.Result.snippets)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>&
SearchResponse_Result::snippets() const {
  // @@protoc_insertion_point(field_list:SearchResponse.Result.snippets)
  return snippets_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>*
SearchResponse_Result::mutable_snippets() {
  // @@protoc_insertion_point(field_mutable_list:SearchResponse.Result.snippets)
  return &snippets_;
}

// -------------------------------------------------------------------

// SearchResponse

// repeated .SearchResponse.Result results = 1;
inline int SearchResponse::_internal_results_size() const {
  return results_.size();
}
inline int SearchResponse::results_size() const {
  return _internal_results_size();
}
inline void SearchResponse::clear_results() {
  results_.Clear();
}
inline ::SearchResponse_Result* SearchResponse::mutable_results(int index) {
  // @@protoc_insertion_point(field_mutable:SearchResponse.results)
  return results_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::SearchResponse_Result >*
SearchResponse::mutable_results() {
  // @@protoc_insertion_point(field_mutable_list:SearchResponse.results)
  return &results_;
}
inline const ::SearchResponse_Result& SearchResponse::_internal_results(int index) const {
  return results_.Get(index);
}
inline const ::SearchResponse_Result& SearchResponse::results(int index) const {
  // @@protoc_insertion_point(field_get:SearchResponse.results)
  return _internal_results(index);
}
inline ::SearchResponse_Result* SearchResponse::_internal_add_results() {
  return results_.Add();
}
inline ::SearchResponse_Result* SearchResponse::add_results() {
  // @@protoc_insertion_point(field_add:SearchResponse.results)
  return _internal_add_results();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::SearchResponse_Result >&
SearchResponse::results() const {
  // @@protoc_insertion_point(field_list:SearchResponse.results)
  return results_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_testproto_2eproto
