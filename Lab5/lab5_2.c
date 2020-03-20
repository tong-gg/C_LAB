#include <stdio.h>
#include <math.h>
int main(){
    int a, b, c, n, count = 0, a_max, b_max,  c_max;
    scanf("%d", &n);
    for (a = 1; a < n; a++){
        for (b = 1; b < n; b++ ){
            c = n - (a + b);
            if (((n == a + b + c) && (c*c == a*a + b*b) && (a < b) && (b < c))){
                a_max = a;
                b_max = b;
                c_max = c;
                count +=1;
            }
        }
    }
    if (count > 0){
        printf("(%d, %d, %d)", a_max, b_max, c_max);
    }
    if (count == 0){
        printf("No triple found.");
    }
}