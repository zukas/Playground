#ifndef PLANE3_H
#define PLANE3_H

#include "vec3.h"

namespace glr {
namespace math {
struct plane3 {
  vec3 pos;
  vec3 normal;
};

struct plane3_bound {
  vec3 pos;
  vec3 normal;
  float width;
  float height;
};
}
}

#endif // PLANE3_H
