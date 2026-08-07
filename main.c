#include <stdio.h>
#include <math.h>
#include "include/vec.h"
#include "include/mat.h"
#include "include/utils.h"


int main(void)
{
    vec3 v = {1, 2, 2};
    float n = vec3_norm(v);           // 3.0
    printf("\nn: %f\n", n);
    vec3 u = vec3_normalize(v);      // (0.33, 0.67, 0.67)
    printf("\nvec3 u:\n");
    vec3_print(u);

    mat4 m = mat4_translation(1, 2, 3);
    printf("\nmat4 m:\n");
    mat4_print(m);
    vec4 p = {0, 0, 0, 1};
    vec4 q = mat4_mul_vec4(&m, p);    // (1, 2, 3, 1)
    printf("\nvec4 q:\n");
    vec4_print(q);
    printf("\n\n");


    return 0;
}