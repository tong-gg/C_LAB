#include <stdio.h>
#include <stdlib.h>
int main(){
    char goalAmount_str[20], addMoney_str[20];
    float goalAmount, addMoney, total, sum_of_money = 0;
    int count = 0;
    printf("Enter your goal amount: ");
    fgets(goalAmount_str, 20, stdin);
    goalAmount = atof(goalAmount_str);
    total = goalAmount;
    while (1){
        printf("Enter money collected today: ");
        fgets(addMoney_str, 20, stdin);
        addMoney = atof(addMoney_str);
        total -= addMoney;
        count += 1;
        sum_of_money += addMoney;
        if (total <= 0 && count > 1){
            printf("Congratulations! You take %d days to reach your goal.", count);
            break;
        }
        else if (total <= 0 && count == 1){
            printf("Congratulations! You take %d day to reach your goal.", count); //บั๊คอยู่ที่แกรมม่าภาษาอังกฤษ น่าเกลียดมาก มายก้อด
            break;
            }
        printf("Total money collected up to day %d is %.2f. You need %.2f more.\n", count, sum_of_money, total);
        }
       
}