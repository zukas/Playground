#ifndef VEC3_H
#define VEC3_H

namespace glr {

namespace math {
struct vec3 {
  float x;
  float y;
  float z;
};

vec3 operator-(vec3 v1, vec3 v2);
vec3 operator+(vec3 v1, vec3 v2);
vec3 operator*(vec3 v, float c);
vec3 operator*(float c, vec3 v);
vec3 operator/(vec3 v, float c);

float vec3_dot(vec3 v1, vec3 v2);
float vec3_length_sq(vec3 v);
float vec3_length(vec3 v);
vec3 normalize(vec3 vec);
vec3 vec3_cross(vec3 v1, vec3 v2);

bool vec3_has_intersect(vec3 normal, vec3 vec);
vec3 vec3_reflect(vec3 normal, vec3 vec);
}
}

#endif // VEC3_H
