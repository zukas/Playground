#include "vec3.h"
#include <cmath>

float glr::math::vec3_dot(glr::math::vec3 v1, vec3 v2) {
  return v1.x * v2.x + v1.y * v2.y + v1.z * v2.z;
}

float glr::math::vec3_length_sq(glr::math::vec3 v) {
  return v.x * v.x + v.y * v.y + v.z * v.z;
}

float glr::math::vec3_length(glr::math::vec3 v) {
  return std::sqrt(vec3_length_sq(v));
}

glr::math::vec3 glr::math::vec3_cross(glr::math::vec3 v1, glr::math::vec3 v2) {
  return vec3{v1.y * v2.z - v1.z * v2.y, v1.z * v2.x - v1.x * v2.z,
              v1.x * v2.y - v1.y * v2.x};
}

glr::math::vec3 glr::math::operator-(glr::math::vec3 v1, glr::math::vec3 v2) {
  return vec3{v1.x - v2.x, v1.y - v2.y, v1.z - v2.z};
}

glr::math::vec3 glr::math::operator+(glr::math::vec3 v1, glr::math::vec3 v2) {
  return vec3{v1.x + v2.x, v1.y + v2.y, v1.z + v2.z};
}

glr::math::vec3 glr::math::operator*(glr::math::vec3 v, float c) {
  return vec3{v.x * c, v.y * c, v.z * c};
}

glr::math::vec3 glr::math::operator*(float c, glr::math::vec3 v) {
  return vec3{v.x * c, v.y * c, v.z * c};
}

glr::math::vec3 glr::math::operator/(glr::math::vec3 v, float c) {
  return vec3{v.x / c, v.y / c, v.z / c};
}

glr::math::vec3 glr::math::normalize(glr::math::vec3 vec) {
  return vec / vec3_length(vec);
}

bool glr::math::vec3_has_intersect(glr::math::vec3 normal,
                                   glr::math::vec3 vec) {
  return glr::math::vec3_dot(normal, vec) != 0.f;
}

glr::math::vec3 glr::math::vec3_reflect(glr::math::vec3 normal,
                                        glr::math::vec3 vec) {
  return vec - 2 * glr::math::vec3_dot(normal, vec) * normal;
}
