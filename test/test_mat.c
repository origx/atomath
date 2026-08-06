#include <stdio.h>
#include <math.h>
#include "include/vec.h"
#include "include/mat.h"
#include "include/utils.h"


int test_mat_mul(int argc, char const *argv[])
{
    mat4 a = {{
        {1,2,3,2},
        {1,3,5,9},
        {5,6,2,4},
        {5,6,3,1},
    }};

    mat4 b = mat4_scale(5,6,4);
    mat4 c = mat4_scale_inverse(5,6,4);

    mat4 m1, m2;

    mat4_mul(&a, &b, &m1);
    mat4_mul(&a, &c, &m2);

    mat4_print(m1);
    mat4_print(m2);

    mat4 m3, m4;

    mat4_mul(&m1, &m2, &m3);

    mat4_mul(&b, &c, &m4);

    mat4_print(m3);

    mat4_print(m4);

    return 0;
}

int test_scale()
{
    mat4 trans = mat4_translation(1, 2, 3);
    mat4 rot = mat4_rotation_z_deg(90);
    mat4 scale = mat4_scale(2, 2, 2);

    mat4 temp, combined;
    mat4_mul(&rot, &trans, &temp);      // temp = rot * trans
    mat4_mul(&temp, &scale, &combined); // combined = rot * trans * scale

    vec4 v = {0, 0, 0, 1};
    vec4 result = mat4_mul_vec4(&combined, v);
    vec4_print(result);
}