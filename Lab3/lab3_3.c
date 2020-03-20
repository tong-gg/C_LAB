#include <stdio.h>
#include <stdlib.h>
void main(){
    char numerator_str[10], denominator_str[10];
    int numerator, denominator, factor, gcd;
    fgets(numerator_str, 10, stdin);
    fgets(denominator_str, 10, stdin);
    numerator = atoi(numerator_str);
    denominator = atoi(denominator_str);
    for (factor = 1; factor <= numerator && factor <= denominator; factor++){
        if (numerator % factor == 0 && denominator % factor == 0){
            gcd = factor;
        }
    }
    numerator = numerator / gcd;
    denominator = denominator / gcd;
    if (denominator != 1){
        printf("= %d/%d",numerator, denominator);
    }
    else{
        printf("= %d", numerator);
    } 
}