#include <stdio.h>
#define BOARD_SIZE 8
void setPieceonTable (int board[][BOARD_SIZE], char piece, int xPos, int yPos);
int main(){
    int numPiece, i, j, xPos, yPos, count = 0;
    char pieceChar;
    int board[8][BOARD_SIZE] = {0};
    scanf("%d", &numPiece);
    while (count < numPiece){
    scanf("\n%c(%d, %d)",&pieceChar, &xPos, &yPos);
    board[yPos][xPos] = pieceChar;
    count++;
    }
    printf("------------------\n");
    printf("  0 1 2 3 4 5 6 7\n");
    for (i = 0; i < BOARD_SIZE; i++){
        printf("%d|", i);
        for (j = 0; j < BOARD_SIZE; j++){
            if (board[i][j] == 0){
                printf(" |");
            }
            else{
                printf("%c|", board[i][j]);
            }
        }
        printf("\n");
    }
}      
