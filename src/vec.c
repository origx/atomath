#include "vec.h"

// +
vec2 vec2_add(vec2 a, vec2 b)
{
    vec2 x_add;
    x_add.x = a.x + b.x;
    x_add.y = a.y + b.y;
    return x_add;
}

// -
vec2 vec2_sub(vec2 a, vec2 b)
{
    vec2 x_sub;
    x_sub.x = a.x - b.x;
    x_sub.y = a.y - b.y;
    return x_sub;
}