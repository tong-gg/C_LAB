#include <stdio.h>
#define BOARD_SIZE 8

void bishopMoves(int xPos, int yPos){
    int sum = xPos + yPos, i, j, neg = xPos - yPos;
    printf("------------------\n");
    for (i = 0; i < BOARD_SIZE; i++){
        printf("%d|", i);
        for (j = 0; j < BOARD_SIZE; j++)
            if (j == xPos && i == yPos){
                printf("B|");
            }
            else{
                if (j != sum && j != neg){
                    printf(" |");
                }
                else{
                    printf("X|");
                }
            }
        sum -= 1;
        neg += 1;
        printf("\n");
        printf("------------------\n"); 
        }   
}
int main(){
    int initial_xPos, initial_yPos;
    printf("Enter Bishop's X Y position: ");
    scanf("%d %d", &initial_xPos, &initial_yPos);
    printf("  0 1 2 3 4 5 6 7\n");
    bishopMoves(initial_xPos, initial_yPos);
}