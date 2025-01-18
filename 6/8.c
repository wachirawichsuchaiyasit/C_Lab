#include <stdio.h>

void removeKilled(int *array, int size, int killedPrisoner)
{
}

int main()
{
    int numPrisoners, m, i;

    scanf("%d", &numPrisoners);
    scanf("%d", &m);

    int prisoners[numPrisoners];
    int killed[numPrisoners];

    for (i = 0; i < numPrisoners; i++)
    {
        prisoners[i] = i + 1;
    }

    int *killerPtr = &prisoners[0];

    for (i = 0; i < numPrisoners; i++)
    {
        // implement

        // end

        killed[i] = *killerPtr;

        removeKilled(&prisoners[0], numPrisoners, *killerPtr);
    }

    for (i = 0; i < numPrisoners; i++)
    {
        printf("%d ", killed[i]);
    }

    return 0;
}