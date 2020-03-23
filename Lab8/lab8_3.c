#include <stdio.h>
struct vector{
    float x, y, z;
};

int main(){
    struct vector cross_product;
    struct vector u, v;
    printf("Enter u: ");
    scanf("%f %f %f",&u.x, &u.y, &u.z);
    printf("Enter v: ");
    scanf("%f %f %f",&v.x, &v.y, &v.z);
    cross_product.x = (u.y * v.z) - (u.z * v.y);
    cross_product.y = (u.z * v.x) - (u.x * v.z);
    cross_product.z = (u.x * v.y) - (u.y * v.x);
    printf("u x v = %.1f %.1f %.1f", cross_product.x, cross_product.y, cross_product.z);

}