#define MUST_USE_FUNC __attribute__((warn_unused_result))
#define MUST_USE_STRUCT __attribute__((warn_unused))
#define MUST_USE_ENUM /* nothing */


#include <stdarg.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>
#include <uchar.h>

enum MaybeOwnedPtr_i32_Tag {
  Owned_i32,
  None_i32,
};
typedef uint8_t MaybeOwnedPtr_i32_Tag;

struct Owned_Body_i32 {
  int32_t *_0;
};

struct MaybeOwnedPtr_i32 {
  enum MaybeOwnedPtr_i32_Tag tag;
  union {
    struct Owned_Body_i32 owned;
  };
};

struct MUST_USE_STRUCT OwnedPtr_i32 {
  int32_t *ptr;
};

MUST_USE_FUNC struct MaybeOwnedPtr_i32 maybe_consume(struct OwnedPtr_i32 input);
