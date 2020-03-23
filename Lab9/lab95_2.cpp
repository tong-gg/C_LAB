#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    char result[100];
    char name[100];
    float salary, goodPrice, goodPriceSum;
    cin >> name >> salary;
    for (int i = 1; i <= 12; i++){
        cin >> goodPrice;
        goodPriceSum += goodPrice * 0.15;
    }
    sprintf(result, "%s %.2f", name, (salary * 12 + goodPriceSum));
    cout << result;
}