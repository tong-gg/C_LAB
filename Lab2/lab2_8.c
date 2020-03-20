#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define FIXEDCOST 5
#define BASECOST 2
void main(){
    char pizza_size_str[5], pepperoni_str[5], cheese_str[5], mushroom_str[5];
    float total_price, cost, area, extracost;
    int pizza_size, pepperoni, cheese, mushroom;
    printf("Welcome to My Pizza Shop!!\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("Enter pizza size (1=s, 2=m, or 3=l): ");
    fgets(pizza_size_str, 5, stdin);
    printf("Extra pepperoni? (1=yes, 0=no): ");
    fgets(pepperoni_str, 5, stdin);
    printf("Extra cheese? (1=yes, 0=no): ");
    fgets(cheese_str, 5, stdin);
    printf("Extra mushroom? (1=yes, 0=no): ");
    fgets(mushroom_str, 5, stdin);
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    pizza_size = atoi(pizza_size_str);
    if (pizza_size == 1){
        area = (M_PI * pow(10, 2))/4;
    }
    else if (pizza_size == 2){
        area = (M_PI * pow(16, 2))/4;
    }
    else if (pizza_size == 3){
        area = (M_PI * pow(20, 2))/4;
    }
    pepperoni = atoi(pepperoni_str);
    cheese = atoi(cheese_str);
    mushroom = atoi(mushroom_str);
    if (pepperoni == 1){
        extracost += 0.5;
    }
    else
    {
        extracost += 0;
    }
    if (cheese == 1){
        extracost += 0.25;
    }
    else
    {
        extracost +=0;
    }
    if (mushroom == 1){
        extracost += 0.30;
    }
    else
    {
        extracost += 0;
    }
    cost = FIXEDCOST + (BASECOST * area) + (extracost * area);
    total_price = 1.5 * cost;
    printf("Your order costs %.2f baht.\n", total_price);
    printf("Thank you.");
}