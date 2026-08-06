a lightweight math lib.

**🚧 It’s still developing.**

---

#### PROCESS:

##### VEC(2/3/4): add sub scale dot norm normalize
> 向量(2/3/4)：加减、标量乘、点积、范数、归一化
```c
vec2 vec2_add(vec2 a, vec2 b);
vec3 vec3_add(vec3 a, vec3 b);
vec4 vec4_add(vec4 a, vec4 b);

vec2 vec2_sub(vec2 a, vec2 b);
vec3 vec3_sub(vec3 a, vec3 b);
vec4 vec4_sub(vec4 a, vec4 b);

vec2 vec2_scale(vec2 v, float s);
vec3 vec3_scale(vec3 v, float s);
vec4 vec4_scale(vec4 v, float s);

float vec2_dot(vec2 a, vec2 b);
float vec3_dot(vec3 a, vec3 b);
float vec4_dot(vec4 a, vec4 b);

float vec2_norm(vec2 v);
float vec3_norm(vec3 v);
float vec4_norm(vec4 v);

vec2 vec2_normalize(vec2 v);
vec3 vec3_normalize(vec3 v);
vec4 vec4_normalize(vec4 v);
```

##### MAT(4): identity mul transpose mat_mul_vec...
> 矩阵(4)：单位阵、乘法、转置、矩阵乘向量...
```c
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
```

##### TOOLS: print convert_rad&deg
> 工具：打印函数、转换rad&deg

```c
void vec2_print(vec2 v);
void vec3_print(vec3 v);
void vec4_print(vec4 v);

void mat4_print(mat4 m);

float deg_to_rad(float x);
float rad_to_deg(float x);
```

---

welcome pr/issue.

MIT.
