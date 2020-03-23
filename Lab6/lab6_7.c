#include <stdio.h>
void removeTarget(int *array, int size, int target);

int main()
{
    int num, count, target, i;

    scanf("%d", &num);
    scanf("%d", &count);

    int numbers[num];
    int *numbersPtr = &numbers[0];

    // initialize array numbers from 1 to num by numbersPtr
    for (i = 1; i <= num; i++ && numbersPtr++) {
       *numbersPtr = i;
    }
    for (int j = 1; j <= count; j++){
        scanf("%d", &target);
        removeTarget(&numbers[0], num, target);
    }
    numbersPtr = &numbers[0];
    for (i = 1; i <= num ;i++ && numbersPtr++){
        printf("%d ", *numbersPtr);
    }
}
void removeTarget(int *array, int size, int target){
    int i = 0;
    int *sec, *first;
    first = &array[0];
    sec = &array[1];
    for (i = 0; i <= size; i++ && array++){
        if (*array == target){
            *array = 0;
        }
    }
    for (i = 0; i < size; i++ && first++ && sec++){
        if (*first == 0){
            *first = *sec;
            *sec = 0;
        }
    }
}