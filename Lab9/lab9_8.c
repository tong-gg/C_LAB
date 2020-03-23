#include <stdio.h>
#include <string.h>

typedef struct _product {
    char name[30];
    int amount;
    double totalCost;
} Product;

void printStock(Product stock[], int nStock)
{
    int i;
    printf("%-20s|%6s|%-10s\n", "    Product Name", "Amount", "     Total");
    for (i = 0; i < nStock; i++) {
        printf("%-20s|%6d|%10.2lf\n",
            stock[i].name, stock[i].amount, stock[i].totalCost);
    }
}

#include <stdlib.h>

void reportStock (char *filename){
    char line[100], clothes[100];
    char *token;
    int  total = 0, count = 0, index = 0, i = 0;
    float price;
    Product stock[4] = {0};
    FILE *fp;
    fp = fopen(filename, "r");
    fgets(line, 100, fp);
    int num_of_goods = atoi(line);
    while (fgets(line, 100, fp) != NULL){
        token = strtok(line, ",");
        token = strtok(NULL, ",");
        token = strtok(NULL, ",");
        strcpy(clothes, token);
        token = strtok(NULL, ",");
        total = atoi(token);
        token = strtok(NULL, ",");
        price = atof(token);
        if (count == 0){
            strcpy(stock[index].name, clothes);
            stock[index].amount = total;
            stock[index].totalCost = price;
            count++;
        }
        else{
            for (i = 0 ; i < count; i++){
                if (strcmp(clothes, stock[i].name) == 0){
                    stock[i].amount += total;
                    stock[i].totalCost += price;
                    break;
                }
            }
            if (i == count){
                strcpy(stock[count].name, clothes);
                stock[count].amount += total;
                stock[count].totalCost += price;
                count++;
            }
        }
    }
    printStock(stock, num_of_goods);
}


int main()
{
    char filename[20];
    double average;
    scanf("%s", filename);
    reportStock(filename);
}