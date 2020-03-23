#include <stdio.h>
struct complex {
    float num1, num2;
};

struct complex add_complex (struct complex C, struct complex D){
    struct complex result;
    result.num1 = C.num1 + D.num1;
    result.num2 = C.num2 + D.num2;
    return result;
};

struct complex multiply_complex (struct complex C, struct complex D){
    struct complex result;
    result.num1 = (C.num1 * D.num1 - C.num2 * D.num2);
    result.num2 = (C.num1 * D.num2 + C.num2 * D.num1);
    return result;
};

void print_complex (char str[], struct complex result){
    printf("%s", str);
    if (result.num1 > 0 && result.num2 > 0){
        printf("%.1f + %.1fi\n", result.num1, result.num2);
    }
    else if (result.num1 < 0 && result.num2 > 0){
        printf("%.1f + %.1fi\n", result.num1, result.num2);
    }
    else if (result.num1 == 0 && result.num2 > 0){
        printf("%.1fi\n",result.num2);
    }
    else if (result.num1 < 0 && result.num2 == 0){
        printf("%.1f\n",result.num1);
    }
    else if (result.num1 > 0 && result.num2 < 0){
        printf("%.1f - %.1fi\n", result.num1, result.num2 * (-1.0));
    }
    else if (result.num1 == 0 && result.num2 == 0){
        printf("0.0\n");
    }
    else if (result.num1 < 0 && result.num2 < 0){
        printf("%.1f - %.1fi\n", result.num1, result.num2 * (-1.0));
    }
};

int main()
{
    struct complex C, D, E, F;
    printf("Enter C: ");
    scanf("%f %f", &C.num1, &C.num2);
    printf("Enter D: ");
    scanf("%f %f", &D.num1, &D.num2);

    E = add_complex(C, D);
    F = multiply_complex(C, D);
    print_complex("C + D = ", E);
    print_complex("C x D = ", F);

    return 0;
}