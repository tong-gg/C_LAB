#include <stdio.h>
#include <stdlib.h>
long int binary_func(long int n){
    if (n == 0){
        return 0;
    }
    else {
        return (n % 2 + 10*(binary_func(n / 2)));
    }
}
int main(){
    char dec_str[20];
    long int dec;
    fgets(dec_str, 20, stdin);
    dec = atol(dec_str);
    printf("%ld", binary_func(dec));
}