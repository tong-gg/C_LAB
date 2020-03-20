#include <stdio.h>
#include <stdlib.h>
void main(){
    char dec_str[5];
    int dec, bit[4], count;
    fgets(dec_str, 5, stdin);
    dec = atoi(dec_str);
    printf("Binary number of %d is ", dec);
    for (count = 3; count >=0; count--){
        bit[count] = dec & 1;
        dec >>= 1;
    }
    for (count = 0; count <=3; count++){
        printf("%d", bit[count]);
    }
    putchar('.');
}