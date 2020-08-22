// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_LOGININFO_CANARYLIB_H_
#define FLATBUFFERS_GENERATED_LOGININFO_CANARYLIB_H_

#include "flatbuffers/flatbuffers.h"

namespace CanaryLib {

struct Challenge;
struct ChallengeBuilder;

struct GameLoginInfo;
struct GameLoginInfoBuilder;

struct LoginInfo;
struct LoginInfoBuilder;

struct Challenge FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef ChallengeBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_TIMESTAMP = 4,
    VT_RANDOM = 6
  };
  uint32_t timestamp() const {
    return GetField<uint32_t>(VT_TIMESTAMP, 0);
  }
  uint8_t random() const {
    return GetField<uint8_t>(VT_RANDOM, 0);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<uint32_t>(verifier, VT_TIMESTAMP) &&
           VerifyField<uint8_t>(verifier, VT_RANDOM) &&
           verifier.EndTable();
  }
};

struct ChallengeBuilder {
  typedef Challenge Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_timestamp(uint32_t timestamp) {
    fbb_.AddElement<uint32_t>(Challenge::VT_TIMESTAMP, timestamp, 0);
  }
  void add_random(uint8_t random) {
    fbb_.AddElement<uint8_t>(Challenge::VT_RANDOM, random, 0);
  }
  explicit ChallengeBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  flatbuffers::Offset<Challenge> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<Challenge>(end);
    return o;
  }
};

inline flatbuffers::Offset<Challenge> CreateChallenge(
    flatbuffers::FlatBufferBuilder &_fbb,
    uint32_t timestamp = 0,
    uint8_t random = 0) {
  ChallengeBuilder builder_(_fbb);
  builder_.add_timestamp(timestamp);
  builder_.add_random(random);
  return builder_.Finish();
}

struct GameLoginInfo FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef GameLoginInfoBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_SESSION_KEY = 4,
    VT_CHAR_NAME = 6,
    VT_CHALLENGE = 8
  };
  const flatbuffers::String *session_key() const {
    return GetPointer<const flatbuffers::String *>(VT_SESSION_KEY);
  }
  const flatbuffers::String *char_name() const {
    return GetPointer<const flatbuffers::String *>(VT_CHAR_NAME);
  }
  const CanaryLib::Challenge *challenge() const {
    return GetPointer<const CanaryLib::Challenge *>(VT_CHALLENGE);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_SESSION_KEY) &&
           verifier.VerifyString(session_key()) &&
           VerifyOffset(verifier, VT_CHAR_NAME) &&
           verifier.VerifyString(char_name()) &&
           VerifyOffset(verifier, VT_CHALLENGE) &&
           verifier.VerifyTable(challenge()) &&
           verifier.EndTable();
  }
};

struct GameLoginInfoBuilder {
  typedef GameLoginInfo Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_session_key(flatbuffers::Offset<flatbuffers::String> session_key) {
    fbb_.AddOffset(GameLoginInfo::VT_SESSION_KEY, session_key);
  }
  void add_char_name(flatbuffers::Offset<flatbuffers::String> char_name) {
    fbb_.AddOffset(GameLoginInfo::VT_CHAR_NAME, char_name);
  }
  void add_challenge(flatbuffers::Offset<CanaryLib::Challenge> challenge) {
    fbb_.AddOffset(GameLoginInfo::VT_CHALLENGE, challenge);
  }
  explicit GameLoginInfoBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  flatbuffers::Offset<GameLoginInfo> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<GameLoginInfo>(end);
    return o;
  }
};

inline flatbuffers::Offset<GameLoginInfo> CreateGameLoginInfo(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<flatbuffers::String> session_key = 0,
    flatbuffers::Offset<flatbuffers::String> char_name = 0,
    flatbuffers::Offset<CanaryLib::Challenge> challenge = 0) {
  GameLoginInfoBuilder builder_(_fbb);
  builder_.add_challenge(challenge);
  builder_.add_char_name(char_name);
  builder_.add_session_key(session_key);
  return builder_.Finish();
}

inline flatbuffers::Offset<GameLoginInfo> CreateGameLoginInfoDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    const char *session_key = nullptr,
    const char *char_name = nullptr,
    flatbuffers::Offset<CanaryLib::Challenge> challenge = 0) {
  auto session_key__ = session_key ? _fbb.CreateString(session_key) : 0;
  auto char_name__ = char_name ? _fbb.CreateString(char_name) : 0;
  return CanaryLib::CreateGameLoginInfo(
      _fbb,
      session_key__,
      char_name__,
      challenge);
}

struct LoginInfo FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef LoginInfoBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_ACCOUNT = 4,
    VT_AUTH_TOKEN = 6,
    VT_PASSWORD = 8,
    VT_XTEA_KEY = 10,
    VT_GAME_LOGIN_INFO = 12
  };
  const flatbuffers::String *account() const {
    return GetPointer<const flatbuffers::String *>(VT_ACCOUNT);
  }
  const flatbuffers::String *auth_token() const {
    return GetPointer<const flatbuffers::String *>(VT_AUTH_TOKEN);
  }
  const flatbuffers::String *password() const {
    return GetPointer<const flatbuffers::String *>(VT_PASSWORD);
  }
  const flatbuffers::Vector<uint32_t> *xtea_key() const {
    return GetPointer<const flatbuffers::Vector<uint32_t> *>(VT_XTEA_KEY);
  }
  const CanaryLib::GameLoginInfo *game_login_info() const {
    return GetPointer<const CanaryLib::GameLoginInfo *>(VT_GAME_LOGIN_INFO);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_ACCOUNT) &&
           verifier.VerifyString(account()) &&
           VerifyOffset(verifier, VT_AUTH_TOKEN) &&
           verifier.VerifyString(auth_token()) &&
           VerifyOffset(verifier, VT_PASSWORD) &&
           verifier.VerifyString(password()) &&
           VerifyOffset(verifier, VT_XTEA_KEY) &&
           verifier.VerifyVector(xtea_key()) &&
           VerifyOffset(verifier, VT_GAME_LOGIN_INFO) &&
           verifier.VerifyTable(game_login_info()) &&
           verifier.EndTable();
  }
};

struct LoginInfoBuilder {
  typedef LoginInfo Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_account(flatbuffers::Offset<flatbuffers::String> account) {
    fbb_.AddOffset(LoginInfo::VT_ACCOUNT, account);
  }
  void add_auth_token(flatbuffers::Offset<flatbuffers::String> auth_token) {
    fbb_.AddOffset(LoginInfo::VT_AUTH_TOKEN, auth_token);
  }
  void add_password(flatbuffers::Offset<flatbuffers::String> password) {
    fbb_.AddOffset(LoginInfo::VT_PASSWORD, password);
  }
  void add_xtea_key(flatbuffers::Offset<flatbuffers::Vector<uint32_t>> xtea_key) {
    fbb_.AddOffset(LoginInfo::VT_XTEA_KEY, xtea_key);
  }
  void add_game_login_info(flatbuffers::Offset<CanaryLib::GameLoginInfo> game_login_info) {
    fbb_.AddOffset(LoginInfo::VT_GAME_LOGIN_INFO, game_login_info);
  }
  explicit LoginInfoBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  flatbuffers::Offset<LoginInfo> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<LoginInfo>(end);
    return o;
  }
};

inline flatbuffers::Offset<LoginInfo> CreateLoginInfo(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<flatbuffers::String> account = 0,
    flatbuffers::Offset<flatbuffers::String> auth_token = 0,
    flatbuffers::Offset<flatbuffers::String> password = 0,
    flatbuffers::Offset<flatbuffers::Vector<uint32_t>> xtea_key = 0,
    flatbuffers::Offset<CanaryLib::GameLoginInfo> game_login_info = 0) {
  LoginInfoBuilder builder_(_fbb);
  builder_.add_game_login_info(game_login_info);
  builder_.add_xtea_key(xtea_key);
  builder_.add_password(password);
  builder_.add_auth_token(auth_token);
  builder_.add_account(account);
  return builder_.Finish();
}

inline flatbuffers::Offset<LoginInfo> CreateLoginInfoDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    const char *account = nullptr,
    const char *auth_token = nullptr,
    const char *password = nullptr,
    const std::vector<uint32_t> *xtea_key = nullptr,
    flatbuffers::Offset<CanaryLib::GameLoginInfo> game_login_info = 0) {
  auto account__ = account ? _fbb.CreateString(account) : 0;
  auto auth_token__ = auth_token ? _fbb.CreateString(auth_token) : 0;
  auto password__ = password ? _fbb.CreateString(password) : 0;
  auto xtea_key__ = xtea_key ? _fbb.CreateVector<uint32_t>(*xtea_key) : 0;
  return CanaryLib::CreateLoginInfo(
      _fbb,
      account__,
      auth_token__,
      password__,
      xtea_key__,
      game_login_info);
}

inline const CanaryLib::LoginInfo *GetLoginInfo(const void *buf) {
  return flatbuffers::GetRoot<CanaryLib::LoginInfo>(buf);
}

inline const CanaryLib::LoginInfo *GetSizePrefixedLoginInfo(const void *buf) {
  return flatbuffers::GetSizePrefixedRoot<CanaryLib::LoginInfo>(buf);
}

inline bool VerifyLoginInfoBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifyBuffer<CanaryLib::LoginInfo>(nullptr);
}

inline bool VerifySizePrefixedLoginInfoBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifySizePrefixedBuffer<CanaryLib::LoginInfo>(nullptr);
}

inline void FinishLoginInfoBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<CanaryLib::LoginInfo> root) {
  fbb.Finish(root);
}

inline void FinishSizePrefixedLoginInfoBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<CanaryLib::LoginInfo> root) {
  fbb.FinishSizePrefixed(root);
}

}  // namespace CanaryLib

#endif  // FLATBUFFERS_GENERATED_LOGININFO_CANARYLIB_H_
