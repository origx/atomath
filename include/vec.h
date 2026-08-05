#ifndef VEC_H
#define VEC_H

typedef struct _vec2 
{
    float x;
    float y;
} vec2;

typedef struct _vec3
{
    float x;
    float y;
    float z;
} vec3;

typedef struct _vec4
{
    float x;
    float y;
    float z;
    float w;
} vec4;

vec2 vec2_add(vec2 a, vec2 b);
vec3 vec3_add(vec3 a, vec3 b);
vec4 vec4_add(vec4 a, vec4 b);

vec2 vec2_sub(vec2 a, vec2 b);
vec3 vec3_sub(vec3 a, vec3 b);
vec4 vec4_sub(vec4 a, vec4 b);

#endif