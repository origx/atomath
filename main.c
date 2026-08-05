#include <stdio.h>
#include "include/vec.h"

int main(int argc, char const *argv[])
{
    vec2 x1 = {4, 3};
    vec2 x2 = {1, 2};

    printf("%f %f \n", vec2_add(x1, x2).x, vec2_add(x1, x2).y);
    printf("%f %f \n", vec2_sub(x1, x2).x, vec2_sub(x1, x2).y);

    return 0;
}
