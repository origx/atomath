#ifndef VEC_H
#define VEC_H

typedef struct _vec2 
{
    float x, y;
} vec2;

typedef struct _vec3
{
    float x, y, z;
} vec3;

typedef struct _vec4
{
    float x, y, z, w;
} vec4;

vec2 vec2_add(vec2 a, vec2 b);
vec3 vec3_add(vec3 a, vec3 b);
vec4 vec4_add(vec4 a, vec4 b);

vec2 vec2_sub(vec2 a, vec2 b);
vec3 vec3_sub(vec3 a, vec3 b);
vec4 vec4_sub(vec4 a, vec4 b);

vec2 vec2_scale(vec2 v, float s);
vec3 vec3_scale(vec3 v, float s);
vec4 vec4_scale(vec4 v, float s);

float vec2_dot(vec2 a, vec2 b);
float vec3_dot(vec3 a, vec3 b);
float vec4_dot(vec4 a, vec4 b);

float vec2_norm(vec2 v);
float vec3_norm(vec3 v);
float vec4_norm(vec4 v);

vec2 vec2_normalize(vec2 v);
vec3 vec3_normalize(vec3 v);
vec4 vec4_normalize(vec4 v);

#endif