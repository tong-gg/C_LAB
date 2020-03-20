#include <stdio.h>
#include <stdlib.h>
#define BUF 20
#define MAX 20
void main(){
    char side_A_str[BUF], side_B_str[BUF], side_C_str[BUF];
    int side_A, side_B, side_C;
    printf("Enter length of side A: ");
    fgets(side_A_str, MAX, stdin);
    printf("Enter length of side B: ");
    fgets(side_B_str, MAX, stdin);
    printf("Enter length of side C: ");
    fgets(side_C_str, MAX, stdin);
    side_A = atoi(side_A_str);
    side_B = atoi(side_B_str);
    side_C = atoi(side_C_str);
    if (((side_A + side_B <= side_C) || (side_A + side_C <= side_B) || (side_B + side_C <= side_A))){
        printf("Triangle type is invalid.");
    }
    else if (side_A <= 0 || side_B <= 0 || side_C <= 0){
        printf("Triangle type is invalid.");
    }
    else if (side_A == side_B && side_B == side_C && side_A == side_C){
        printf("Triangle type is equilateral.");
    }
    else if ((side_A == side_B) || (side_A == side_C) || (side_B == side_C)){
        printf("Triangle type is isosceles.");
    }
    else if (side_A != side_B && side_B != side_C && side_A != side_C){
        printf("Triangle type is scalene.");
    }
}