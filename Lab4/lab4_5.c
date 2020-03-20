#include <stdio.h>
#include <stdlib.h>
int main(){
    char n_str[5];
    int n, start, end, i, j, print_line, more_n,k, char_n,p, final_n,b = 98,a=1;
    fgets(n_str, 5, stdin);
    n = atoi(n_str);
    more_n = n;
    final_n = 1;
    char_n = n;
    print_line = (n * 2) - 1;
    start = 97 + (n - 1);
    if (n > 0 || n <= 26){
        for (i = 1; i <= print_line; i++){ //control print line
            if (i <= n-1) {
                for (j = 0;j < more_n-1 ;j++){
                    printf("--");
            }
            if (i==1)
                printf("%c",start);
            else
                printf("%c", start);
                for (k = start-1; k >= start - (i-1) ;k--){
                    printf("-%c",k);
                }
                for (k = start - (i-2); k <= start; k++){
                    printf("-%c", k);
                }
            for (j = 0;j < more_n-1 ;j++){
                printf("--");
            }
            more_n -= 1;
            printf("\n");
        }
        else if (i == n) {
            printf("%c", start);
            for (p = start-1; p >= 97;p--) {
                printf("-%c", p);
            }
            for (p = 97+1; p <= start; p++){
                printf("-%c", p);
            }
            printf("\n");
        }
        else {
            for (j = 0; j < final_n ;j++){
                if (final_n > print_line-1) {
                    break;
                }
                printf("--");
            }
            if (j == print_line) {
                printf("%c",start);
            }
            else {
                printf("%c", start);
                for (k = start-1; k >= b ;k--){
                    printf("-%c", k);
                }
                b += 1;
                for (k = b; k <= start; k++){
                    printf("-%c", k);
                }
            }
            for (j = 1; j <= a ; j++){
                if (a>start-1) {
                    break;
                }
                printf("--");
            }
            a += 1;
            final_n += 1;
            printf("\n");
        
        }
    }
    }
    else{
        printf("-");
    }
}