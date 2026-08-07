#include <stdio.h>
#include <math.h>
#include "include/vec.h"
#include "include/mat.h"
#include "include/utils.h"


int main(void)
{
    mat4 trans = mat4_translation(1, 2, 3);
    mat4 rot = mat4_rotation_z_deg(90);
    mat4 scale = mat4_scale_inverse(2, 0, 2);

    mat4 temp, combined;
    mat4_mul(&rot, &trans, &temp);      // temp = rot * trans
    mat4_mul(&temp, &scale, &combined); // combined = rot * trans * scale

    vec4 v = {0, 0, 0, 1};
    vec4 result = mat4_mul_vec4(&combined, v);
    vec4_print(result);


    return 0;
}