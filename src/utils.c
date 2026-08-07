#include "utils.h"
#include <math.h>
#include <stdio.h>


/*
    print tools
*/
void vec2_print(vec2 v)
{
    printf("(%.6f, %.6f)\n", v.x, v.y);
}

void vec3_print(vec3 v)
{
    printf("(%.6f, %.6f, %.6f)\n", v.x, v.y, v.z);
}

void vec4_print(vec4 v)
{
    printf("(%.6f, %.6f, %.6f, %.6f)\n", v.x, v.y, v.z, v.w);
}

void mat4_print(mat4 m)
{
    // i row → ; j col ↓
    for (int j = 0; j < 4; ++j)
    {
        j == 0 ? printf("[") : printf(" ");
        for (int i = 0; i < 4; ++i)
        {
            i == 3 ? printf("%.6f", m.mat[i][j]) : printf("%.6f, ", m.mat[i][j]);
        }
        j == 3 ? printf("]\n") : printf("\n");
    }
}

/*
    transform
*/
float deg_to_rad(float x)
{
    return x * 3.14159265f / 180.0f;
}

float rad_to_deg(float x)
{
    return x * 180.0f / 3.14159265f;
}