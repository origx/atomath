#include "mat.h"
#include <math.h>
#include "types.h"
#include "utils.h"


mat4 mat4_identity(void)
{
    static const mat4 identity = {{
        {1, 0, 0, 0},
        {0, 1, 0, 0},
        {0, 0, 1, 0},
        {0, 0, 0, 1}
    }};
    return identity;
}

// -- 
mat4 mat4_translation(float tx, float ty, float tz)
{
    return (mat4){{
        {1, 0, 0, tx}, {0, 1, 0, ty}, {0, 0, 1, tz}, {0, 0, 0, 1}
    }};
}

mat4 mat4_translation_inverse(float tx, float ty, float tz)
{
    return (mat4){{
        {1, 0, 0, -tx}, {0, 1, 0, -ty}, {0, 0, 1, -tz}, {0, 0, 0, 1}
    }};
}

// --
mat4 mat4_scale(float sx, float sy, float sz)
{
    return (mat4){{
        {sx, 0, 0, 0}, {0, sy, 0, 0}, {0, 0, sz, 0}, {0, 0, 0, 1}
    }};
}

mat4 mat4_scale_inverse(float sx, float sy, float sz)
{
    ASSERT(sx != 0, "scale_inverse: sx is zero");
    ASSERT(sy != 0, "scale_inverse: sy is zero");
    ASSERT(sz != 0, "scale_inverse: sz is zero");
    return (mat4){{
        {1/sx, 0, 0, 0}, {0, 1/sy, 0, 0}, {0, 0, 1/sz, 0}, {0, 0, 0, 1}
    }};
}

// --
mat4 mat4_rotation_x(float rad)
{
    float s = sinf(rad);
    float c = cosf(rad);
    return (mat4){{
        {1, 0, 0, 0}, {0, c, -s, 0}, {0, s, c, 0}, {0, 0, 0, 1}
    }};
}

mat4 mat4_rotation_y(float rad)
{
    float s = sinf(rad);
    float c = cosf(rad);
    return (mat4){{
        {c, 0, s, 0}, {0, 1, 0, 0}, {-s, 0, c, 0}, {0, 0, 0, 1}
    }};
}

mat4 mat4_rotation_z(float rad)
{
    float s = sinf(rad);
    float c = cosf(rad);
    return (mat4){{
        {c, -s, 0, 0}, {s, c, 0, 0}, {0, 0, 1, 0}, {0, 0, 0, 1}
    }};
}

mat4 mat4_rotation_x_deg(float deg)
{
    return mat4_rotation_x(deg_to_rad(deg));
}

mat4 mat4_rotation_y_deg(float deg)
{
    return mat4_rotation_y(deg_to_rad(deg));
}

mat4 mat4_rotation_z_deg(float deg)
{
    return mat4_rotation_z(deg_to_rad(deg));
}

// --
void mat4_mul(const mat4* a, const mat4* b, mat4* x)
{
    // i row → ; j col ↓
    for (int i = 0; i < 4; ++i)
    {
        for (int j = 0; j < 4; ++j)
        {
            // x(i, j) = a col(j) * b row(i)
            x->mat[i][j] = 
            a->mat[i][0] * b->mat[0][j] + a->mat[i][1] * b->mat[1][j] +
            a->mat[i][2] * b->mat[2][j] + a->mat[i][3] * b->mat[3][j];
        }
    }
}

void mat4_transpose(const mat4* src, mat4* dst)
{
    for (int i = 0; i < 4; ++i)
    {
        for (int j = 0; j < 4; ++j)
        {
            dst->mat[i][j] = src->mat[j][i];
        }
    }
}


/*
    [m00, m01, m02, m03          [x         [m00x + m01y + m02z + m03w
     m10, m11, m12, m13   (mul)   y    (=)   m10x + m11y + m12z + m13w
     m20, m21, m22, m23           z          m20x + m21y + m22z + m23w
     m30, m31, m32, m33]          w]         m30x + m31y + m32z + m33w]

*/
vec4 mat4_mul_vec4(const mat4* m, vec4 v)
{
    vec4 x_mul = {0};
    float k[4] = {v.x, v.y, v.z, v.w};

    for (int j = 0; j < 4; j++)
    {
        x_mul.x += m->mat[0][j] * k[j];
        x_mul.y += m->mat[1][j] * k[j];
        x_mul.z += m->mat[2][j] * k[j];
        x_mul.w += m->mat[3][j] * k[j];
    }

    return x_mul;
}
