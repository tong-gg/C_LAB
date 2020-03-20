#include <stdio.h>
#include <stdlib.h>
void main(){
    char start_str[5];
    int start, reflect, a = 97, count, target;
    fgets(start_str, 5, stdin);
    start = atoi(start_str);
    target = 97 + (start - 1);
    if (start == 0 || start > 26 || start < 0){
        printf("-");
    }
    else if (start == 1){
        printf("a");
    }
    else if (start <= 26){
        for (count = 0; target != 96; target--){
            printf("%c-", target);
    }
        target += 2;
        for (count = 0; target != 97 + start; target++){
            printf("%c",target);
            if (target == 97 + start - 1){
                break;
        }
        printf("-");
    }
    }
}