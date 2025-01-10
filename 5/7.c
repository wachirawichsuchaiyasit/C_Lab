#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n, i, j;

    printf("Enter the number of rows or columns: ");
    scanf("%d", &n);

    int **a = (int **)malloc(n * sizeof(int *));

    for (i = 0; i < n; i++)
    {
        a[i] = (int *)malloc(n * sizeof(n));
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            a[i][j] = i + j + 1;
        }
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%2d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}