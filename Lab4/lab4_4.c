#include <stdio.h>
#include <stdlib.h>
int main(){
    char height_str[10], width_str[10];
    int height, width, i, j, k, space;
    fgets(height_str, 10, stdin);
    fgets(width_str, 10, stdin);
    height = atoi(height_str);
    width = atoi(width_str);
    for (i = 1; i <= width; i++){
        if (i == 1){
            for (j = 1; j <= height; j++){
                printf("*");
            }
        }
        else{
            for (k = 0; k<i - 1; k++){
                printf(" ");
            }
            if (i == width){
                for (j = 1; j <= height; j++){
                    printf("*");
                }
                break;
            }
            printf("*");
            for (space = 0; space < height - 2; space++){
                printf(" ");
            }
            printf("*");
        }
        printf("\n");
        }
}