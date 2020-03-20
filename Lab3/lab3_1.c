#include <stdio.h>
#include <stdlib.h>
void main(){
    char count_str[20];
    int count;
    fgets(count_str, 20, stdin);
    count = atoi(count_str);
    while (count >= 0)
    {
        printf("%d\n", count);
        count--;
    }
}