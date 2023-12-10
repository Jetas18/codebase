#include "trignometry.h"

bool is_pyth_triplet(U16 base, U16 height, U16 hypo) {
  return (sqrt(pow(base, 2) + pow(height, 2)) == hypo);
}
