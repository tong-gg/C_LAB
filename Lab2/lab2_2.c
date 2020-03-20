#include <stdio.h>
#include <stdlib.h>
void main(){
    char stamp_str[10], price_str[30];
    int stamp, stamp_left, discount;
    float price, total_price;
    fgets(stamp_str, 10, stdin);
    fgets(price_str, 30, stdin);
    stamp = atoi(stamp_str);
    price = atof(price_str);
    if (stamp == 1){
        discount = 10;
        total_price = price - (price * (discount/100.00));
        stamp_left = stamp - 1;
    }
    else if (stamp == 2){
        discount = 15;
        total_price = price - (price * (discount/100.00));
        stamp_left = stamp - 2;
    }
    else if (stamp > 2 && stamp < 6){
        discount = 20;
        total_price = price - (price * (discount/100.00));
        stamp_left = stamp - 3;
    }
    else if (stamp >= 6 && stamp < 9){
        discount = 30;
        total_price = price - (price * (discount/100.00));
        stamp_left = stamp - 6;
    }
    else if (stamp >= 9){
        discount = 40;
        total_price = price - (price * (discount/100.00));
        stamp_left = stamp - 9;
    }
    else if (stamp <= 0){
        total_price = price;
    }
    printf("You get %d percents discount.\n", discount);
    printf("Total amount due is %.2f Baht.\n", total_price);
    printf("And you have %d stickers left.", stamp_left);
}