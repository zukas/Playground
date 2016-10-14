#ifndef RAY3_H
#define RAY3_H

#include "plane3.h"
#include "vec3.h"

namespace glr {
namespace math {

struct ray3 {
  vec3 pos;
  vec3 dir;
};

vec3 ray3_intersect_plane3(ray3 ray, plane3 plane);
}
}

#endif // RAY3_H
