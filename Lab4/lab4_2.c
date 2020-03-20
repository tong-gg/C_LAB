#include <stdio.h>
#include <stdlib.h>
int is_prime(int x){
    int factor, count = 0; //Don't forget to ask teacher about declare the variable (count)
    if (x == 1){
        return 0;
    }
    else{
        for (factor = 1; factor <= x; factor++){
            if (x % factor == 0){
                count +=1;
            }
        }
        if (count == 2){
            return 1;
        }
        else{
            return 0;
        }
    }
}
int main(){
    char input[5];
    fgets(input, 5, stdin);
    int i, n, x, count;
    n = atoi(input);
    for (i = 1; i <= n; i = i+1){
        if (is_prime(i)){
            printf("%d is a prime number.\n", i);
            count += 1;
        }
    }
    printf("%d", count);
    return 0;
}