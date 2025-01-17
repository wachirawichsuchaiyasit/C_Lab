#include <stdio.h>

#define BOARD_SIZE 8

void setPieceOnTable(int board[][BOARD_SIZE], char piece, int xPos, int yPos)  {
    board[xPos][yPos] = piece;
}

int main() {

    int numPiece = 0 ; 
    int i  , xPos , yPos ;
    int board[][BOARD_SIZE] = {0} ;
    
    char pieceChar  ;
    scanf("%d",&numPiece);

    i = numPiece ;

    while (i != 0 ) {
        scanf("\n%c(%d,%d)",&pieceChar,&xPos,&yPos);
        setPieceOnTable(board,pieceChar,xPos,yPos);
        i -- ;
    }

    printf("------------------\n");
    printf("  0 1 2 3 4 5 6 7\n");
    for (i = 0; i < BOARD_SIZE ; i ++ ) {
        printf("%d|",i);
        for (int j = 0 ; j < BOARD_SIZE ; j ++ ) {
            if (board[i][j])
        }
        printf("\n");
    }







    return 0 ;
}