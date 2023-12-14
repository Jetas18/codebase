#include "cmath.h"
#include "types.h"
#include <stdbool.h>
U64 factorial(U8 x) {
  if (x == 0) {
    return 1;
  } else if (x == 1) {
    return 1;
  }

  else {
    U64 ans = 1;

    for (U8 i = 1; i <= x; i++) {
      ans = ans * i;
    }
    return ans;
  }
}

U64 fib(U16 x) {
  if (x == 1 || x == 0) {
    return 1;
  }

  else {
    return round((1 + pow(gold_f64, x)) / sqrt(5));
  }
}

bool is_prime(U64 x) {
  if (x == 1 || x % 2 == 0) {
    return false;
  }

  U64 root = (U64)round(sqrt(x));

  for (U64 i = 2; i < root; i++) {
    if (x % i == 0) {
      return false;
    }
  }
  return true;
}