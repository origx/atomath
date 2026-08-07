#ifndef UTILS_H
#define UTILS_H

#include <stdio.h>

#include "vec.h"
#include "mat.h"

// NDEBUG: suggest adding this in production env.
// #define NDEBUG
#include <assert.h>

void vec2_print(vec2 v);
void vec3_print(vec3 v);
void vec4_print(vec4 v);

void mat4_print(mat4 m);

float deg_to_rad(float x);
float rad_to_deg(float x);

// error assert
#define ASSERT(cond, msg) \
    do { \
        if (!(cond)) { \
            fprintf(stderr, "[Err]%s\n", msg); \
            assert(cond); \
        } \
    } while(0)

#endif