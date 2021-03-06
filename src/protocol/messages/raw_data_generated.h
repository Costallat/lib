// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_RAWDATA_CANARYLIB_H_
#define FLATBUFFERS_GENERATED_RAWDATA_CANARYLIB_H_

#include "flatbuffers/flatbuffers.h"

namespace CanaryLib {

struct RawData;
struct RawDataBuilder;

struct RawData FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef RawDataBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_BODY = 4,
    VT_SIZE = 6
  };
  const flatbuffers::Vector<uint8_t> *body() const {
    return GetPointer<const flatbuffers::Vector<uint8_t> *>(VT_BODY);
  }
  uint16_t size() const {
    return GetField<uint16_t>(VT_SIZE, 0);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_BODY) &&
           verifier.VerifyVector(body()) &&
           VerifyField<uint16_t>(verifier, VT_SIZE) &&
           verifier.EndTable();
  }
};

struct RawDataBuilder {
  typedef RawData Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_body(flatbuffers::Offset<flatbuffers::Vector<uint8_t>> body) {
    fbb_.AddOffset(RawData::VT_BODY, body);
  }
  void add_size(uint16_t size) {
    fbb_.AddElement<uint16_t>(RawData::VT_SIZE, size, 0);
  }
  explicit RawDataBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  flatbuffers::Offset<RawData> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<RawData>(end);
    return o;
  }
};

inline flatbuffers::Offset<RawData> CreateRawData(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<flatbuffers::Vector<uint8_t>> body = 0,
    uint16_t size = 0) {
  RawDataBuilder builder_(_fbb);
  builder_.add_body(body);
  builder_.add_size(size);
  return builder_.Finish();
}

inline flatbuffers::Offset<RawData> CreateRawDataDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    const std::vector<uint8_t> *body = nullptr,
    uint16_t size = 0) {
  auto body__ = body ? _fbb.CreateVector<uint8_t>(*body) : 0;
  return CanaryLib::CreateRawData(
      _fbb,
      body__,
      size);
}

inline const CanaryLib::RawData *GetRawData(const void *buf) {
  return flatbuffers::GetRoot<CanaryLib::RawData>(buf);
}

inline const CanaryLib::RawData *GetSizePrefixedRawData(const void *buf) {
  return flatbuffers::GetSizePrefixedRoot<CanaryLib::RawData>(buf);
}

inline bool VerifyRawDataBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifyBuffer<CanaryLib::RawData>(nullptr);
}

inline bool VerifySizePrefixedRawDataBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifySizePrefixedBuffer<CanaryLib::RawData>(nullptr);
}

inline void FinishRawDataBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<CanaryLib::RawData> root) {
  fbb.Finish(root);
}

inline void FinishSizePrefixedRawDataBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<CanaryLib::RawData> root) {
  fbb.FinishSizePrefixed(root);
}

}  // namespace CanaryLib

#endif  // FLATBUFFERS_GENERATED_RAWDATA_CANARYLIB_H_
