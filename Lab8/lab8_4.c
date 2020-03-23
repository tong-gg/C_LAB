#include <stdio.h>
#include <string.h>

typedef struct{
    char id[11];
    int midterm, final, total;
} studentRecord;

void calculateScore (studentRecord list[], int size){
    for (int i = 0; i < size; i++){
        list[i].total = list[i].midterm + list[i].final;
    }
}
void printfRecord (studentRecord list[], int size){
    for (int i = 0; i < size; i++){
        printf("Student ID %s receives grade ", list[i].id);
        if (list[i].total >= 80){
            printf("A.");
        }
        else if (list[i].total >= 70 && list[i].total <= 79){
            printf("B.");
        }
        else if (list[i].total >= 60 && list[i].total <= 69){
            printf("C.");
        }
        else if (list[i].total >= 50 && list[i].total <= 59){
            printf("D.");
        }
        else if (list[i].total < 50){
            printf("F.");
        }
        putchar("\n");
    }
}
int main(){
    studentRecord list[5];
    char id[11];
    int midtermScore, finalScore;
    for (int i = 0; i < 5; i++){
        printf("Enter Student ID: ");
        scanf("%s", id);
        printf("Enter Student Midterm: ");
        scanf("%d", &midtermScore);
        printf("Enter Student Final: ");
        scanf("%d", &finalScore);
        sprintf(list[i].id, "%s", id);
        list[i].midterm = midtermScore;
        list[i].final = finalScore;
    }
    calculateScore(list, 5);
    printfRecord(list, 5);
}