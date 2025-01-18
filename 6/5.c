#include <stdio.h>
#define BOARD_SIZE 8

void bishopMoves(int x_pos, int y_pos)
{
    int board[BOARD_SIZE][BOARD_SIZE] = {0};

    board[y_pos][x_pos] = 1;

    for (int i = 1; i < BOARD_SIZE; i++)
    {
        if (y_pos - i >= 0 && x_pos - i >= 0)
            board[y_pos - i][x_pos - i] = 1;
        if (y_pos - i >= 0 && x_pos + i < BOARD_SIZE)
            board[y_pos - i][x_pos + i] = 1;
        if (y_pos + i < BOARD_SIZE && x_pos - i >= 0)
            board[y_pos + i][x_pos - i] = 1;
        if (y_pos + i < BOARD_SIZE && x_pos + i < BOARD_SIZE)
            board[y_pos + i][x_pos + i] = 1;
    }

    for (int j = 0; j < BOARD_SIZE; j++)
    {
        printf("%d|", j);
        for (int k = 0; k < BOARD_SIZE; k++)
        {
            if (j == y_pos && k == x_pos)
            {
                printf("B|");
            }
            else if (board[j][k] == 1)
            {
                printf("X|");
            }
            else
            {
                printf(" |");
            }
        }
        printf("\n------------------\n");
    }
}

int main()
{
    int x_pos, y_pos;

    printf("Enter Bishop's X Y position: ");
    scanf("%d %d", &x_pos, &y_pos);

    printf("  0 1 2 3 4 5 6 7\n");
    printf("------------------\n");

    bishopMoves(x_pos, y_pos);

    return 0;
}
