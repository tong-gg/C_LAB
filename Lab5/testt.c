#include <stdio.h>
int main(){
    int c=5;
    int *p;
    p = &c;
    printf("c = %d\n",c);
    printf("*p = %d\n",*p);
}