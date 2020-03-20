#include <stdio.h>
#include <math.h>
long int count_func(long int n){
long int count = 0, digit;
    while (1){
        if (n == 0){
            break;
        }
        digit = n % 10;
        count += 1;
        n = n / 10;
    }
    return count;
}
int main(){
    long int n;
    printf("Input n = ");
    scanf("%d", &n);
    long int count = count_func(n);
    long int checker = ceil(pow(10, count));
    long int power = pow(n, 2);
    if (n % checker == power % checker){
        printf("n^2 = %ld\n", power);
        printf("Yes. %ld is automorphic number.", n);
    }
    else{
        printf("n^2 = %ld\n", power);
        printf("No. %ld is not automorphic number.", n);
    }
}