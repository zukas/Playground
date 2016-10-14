#include "ray3.h"

glr::math::vec3 glr::math::ray3_intersect_plane3(glr::math::ray3 ray,
                                                 glr::math::plane3 plane) {
  vec3 res;
  float dot_rp = glr::math::vec3_dot(ray.dir, plane.normal);
  if (dot_rp != 0.f) {
    float dot_in = glr::math::vec3_dot(plane.pos - ray.pos, plane.normal);
    if (dot_in != 0.f) {
      res = ray.pos + ray.dir * dot_in;
    }
  }
  return res;
}
