#ifndef UTILS_H
#define UTILS_H

#include "vec.h"
#include "mat.h"

void vec2_print(vec2 v);
void vec3_print(vec3 v);
void vec4_print(vec4 v);

void mat4_print(mat4 m);

float deg_to_rad(float x);
float rad_to_deg(float x);

#endif