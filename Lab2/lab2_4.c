#include <stdio.h>
#include <stdlib.h>
#define FIVE 0.05
#define TEN 0.10
void main(){
    char salary_str[30];
    float salary, total_price, part_one, part_two;
    fgets(salary_str, 30, stdin);
    salary = atof(salary_str);
    if (salary <= 300000 && salary >= 0){
        total_price = salary * FIVE;
        printf("%.2f", total_price);
    }
    else if (salary >= 300000.01){
        part_one = 300000 * FIVE;
        part_two = (salary - 300000) * TEN;
        total_price = part_one + part_two;      
        printf("%.2f", total_price);
    }
    else
    {
        printf("Error: Salary must be greater or equal to 0");
    }
}