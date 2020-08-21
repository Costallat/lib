// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_LOGINDATA_CANARYLIB_H_
#define FLATBUFFERS_GENERATED_LOGINDATA_CANARYLIB_H_

#include "flatbuffers/flatbuffers.h"

namespace CanaryLib {

struct LoginData;
struct LoginDataBuilder;

struct LoginData FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef LoginDataBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_BODY = 4
  };
  const flatbuffers::Vector<uint8_t> *body() const {
    return GetPointer<const flatbuffers::Vector<uint8_t> *>(VT_BODY);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_BODY) &&
           verifier.VerifyVector(body()) &&
           verifier.EndTable();
  }
};

struct LoginDataBuilder {
  typedef LoginData Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_body(flatbuffers::Offset<flatbuffers::Vector<uint8_t>> body) {
    fbb_.AddOffset(LoginData::VT_BODY, body);
  }
  explicit LoginDataBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  flatbuffers::Offset<LoginData> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<LoginData>(end);
    return o;
  }
};

inline flatbuffers::Offset<LoginData> CreateLoginData(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<flatbuffers::Vector<uint8_t>> body = 0) {
  LoginDataBuilder builder_(_fbb);
  builder_.add_body(body);
  return builder_.Finish();
}

inline flatbuffers::Offset<LoginData> CreateLoginDataDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    const std::vector<uint8_t> *body = nullptr) {
  auto body__ = body ? _fbb.CreateVector<uint8_t>(*body) : 0;
  return CanaryLib::CreateLoginData(
      _fbb,
      body__);
}

inline const CanaryLib::LoginData *GetLoginData(const void *buf) {
  return flatbuffers::GetRoot<CanaryLib::LoginData>(buf);
}

inline const CanaryLib::LoginData *GetSizePrefixedLoginData(const void *buf) {
  return flatbuffers::GetSizePrefixedRoot<CanaryLib::LoginData>(buf);
}

inline bool VerifyLoginDataBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifyBuffer<CanaryLib::LoginData>(nullptr);
}

inline bool VerifySizePrefixedLoginDataBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifySizePrefixedBuffer<CanaryLib::LoginData>(nullptr);
}

inline void FinishLoginDataBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<CanaryLib::LoginData> root) {
  fbb.Finish(root);
}

inline void FinishSizePrefixedLoginDataBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<CanaryLib::LoginData> root) {
  fbb.FinishSizePrefixed(root);
}

}  // namespace CanaryLib

#endif  // FLATBUFFERS_GENERATED_LOGINDATA_CANARYLIB_H_