#ifndef VEC
#define VEC

#include <stdio.h>

#include "types.h"

typedef struct {
  U32 dim;
  double *elements;

} vec;

extern const vec VEC_UNDEFINED;

#endif // !VEC
