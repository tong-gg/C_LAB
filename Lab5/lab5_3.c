#include <stdio.h>
int main(){
    char operator;
    double initial_val, valueTocal, total;
    printf("Initial Value: ");
    scanf("%lf", &initial_val);
    printf("\n");
    total = initial_val;
    printf("Operator: ");
    scanf(" %c", &operator);
    while (operator == '+' || operator == '-' || operator == '*' || operator =='/'){
        switch (operator){
        case '+':
            printf("Input Value: ");
            scanf(" %lf", &valueTocal);
            total += valueTocal;
            break;
        case '-':
            printf("Input Value: ");
            scanf(" %lf", &valueTocal);
            total -= valueTocal;
            break;
        case '*':
            printf("Input Value: ");
            scanf(" %lf", &valueTocal);
            total *= valueTocal;
            break;
        case '/':
            printf("Input Value: ");
            scanf(" %lf", &valueTocal);
            total /= valueTocal;
            break;
        }
        printf("Present Value is %.4lf\n", total);
        printf("\n");
        printf("Operator: ");
        scanf(" %c", &operator);
    }
    printf("\n");
    printf("Finish Calculation. Final Value is %.4lf", total);
}