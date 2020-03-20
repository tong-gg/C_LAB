#include <stdio.h>
int main(){
    int n;
    double pi_total = 0, denominator = 1.0;
    printf("Enter n: ");
    scanf("%d", &n);
    for (int count = 1; count <= n; count++){
        if (count % 2 != 0 ){
            pi_total += (4.0 / denominator);
        }
        else{
            pi_total -= (4.0 / denominator);
        }
        denominator += 2;
    }
    printf("%.10f", pi_total);   
}