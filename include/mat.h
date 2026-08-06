#ifndef MAT_H
#define MAT_H

#include "vec.h"

typedef struct mat4
{
    float mat[4][4];
} mat4;


mat4 mat4_identity(void);


mat4 mat4_translation(float tx, float ty, float tz);
mat4 mat4_translation_inverse(float tx, float ty, float tz);


mat4 mat4_scale(float sx, float sy, float sz);
mat4 mat4_scale_inverse(float sx, float sy, float sz);


mat4 mat4_rotation_x(float rad);
mat4 mat4_rotation_y(float rad);
mat4 mat4_rotation_z(float rad);

mat4 mat4_rotation_x_deg(float deg);
mat4 mat4_rotation_y_deg(float deg);
mat4 mat4_rotation_z_deg(float deg);


vec4 mat4_mul_vec4(mat4* m, vec4 v);


void mat4_mul(const mat4* a, const mat4* b, mat4* x);
void mat4_transpose(const mat4* src, mat4* dst);

#endif