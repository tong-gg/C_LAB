#include <stdio.h>
#include <stdlib.h>
void main(){
    char less_str[30], more_str[30];
    long long int less, more, result_gcd, result_lcm, factor;
    fgets(less_str, 30, stdin);
    fgets(more_str, 30, stdin);
    less = atoll(less_str);
    more = atoll(more_str);
    for (factor = 1; factor <= less && factor <= more; factor++){
        if (less % factor == 0 && more % factor == 0){
            result_gcd = factor;
        }
    }
    result_lcm = less * more / result_gcd;
    printf("GCD: %lld\n", result_gcd);
    printf("LCM: %lld", result_lcm);
}