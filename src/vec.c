#include "vec.h"
#include <math.h>
#include "utils.h"

// +
vec2 vec2_add(vec2 a, vec2 b)
{
    return (vec2){a.x + b.x, a.y + b.y};
}

vec3 vec3_add(vec3 a, vec3 b)
{
    return (vec3){a.x + b.x, a.y + b.y, a.z + b.z};
}

vec4 vec4_add(vec4 a, vec4 b)
{
    return (vec4){a.x + b.x, a.y + b.y, a.z + b.z, a.w + b.w};
}

// -
vec2 vec2_sub(vec2 a, vec2 b)
{
    return (vec2){a.x - b.x, a.y - b.y};
}

vec3 vec3_sub(vec3 a, vec3 b)
{
    return (vec3){a.x - b.x, a.y - b.y, a.z - b.z};
}

vec4 vec4_sub(vec4 a, vec4 b)
{
    return (vec4){a.x - b.x, a.y - b.y, a.z - b.z, a.w - b.w};
}

// scale
vec2 vec2_scale(vec2 v, float s)
{
    return (vec2){v.x * s, v.y * s};
}

vec3 vec3_scale(vec3 v, float s)
{
    return (vec3){v.x * s, v.y * s, v.z * s};
}

vec4 vec4_scale(vec4 v, float s)
{
    return (vec4){v.x * s, v.y * s, v.z * s, v.w * s};
}

// dot
float vec2_dot(vec2 a, vec2 b) {
    return a.x * b.x + a.y * b.y;
}

float vec3_dot(vec3 a, vec3 b) {
    return a.x * b.x + a.y * b.y + a.z * b.z;
}

float vec4_dot(vec4 a, vec4 b) {
    return a.x * b.x + a.y * b.y + a.z * b.z + a.w * b.w;
}

// norm
float vec2_norm(vec2 v)
{
    return sqrtf(v.x*v.x + v.y*v.y);
}

float vec3_norm(vec3 v)
{
    return sqrtf(v.x*v.x + v.y*v.y + v.z*v.z);
}

float vec4_norm(vec4 v)
{
    return sqrtf(v.x*v.x + v.y*v.y + v.z*v.z + v.w*v.w);
}

// normalize
vec2 vec2_normalize(vec2 v)
{
    float n = vec2_norm(v);
    ASSERT(n > 1e-8f, "vec2_normalize: zero vector");
    return (vec2){v.x/n, v.y/n};
}

vec3 vec3_normalize(vec3 v)
{
    float n = vec3_norm(v);
    ASSERT(n > 1e-8f, "vec3_normalize: zero vector");
    return (vec3){v.x/n, v.y/n, v.z/n};
}

vec4 vec4_normalize(vec4 v)
{
    float n = vec4_norm(v);
    ASSERT(n > 1e-8f, "vec4_normalize: zero vector");
    return (vec4){v.x/n, v.y/n, v.z/n, v.w/n};
}