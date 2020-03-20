#include <stdio.h>
#include <stdlib.h>
void main(){
    char str;
    str = getchar();
    if (str >= 65 && str <=90){
        printf("Output: upper case");
    }
    else if (str >= 97 && str <= 122){
        printf("Output: lower case");
    }
    else if (str >= 48 && str <= 57){
        printf("Output: digit");
    }
    else
    {
        printf("Output: others");
    }
    
}