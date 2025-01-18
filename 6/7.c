#include <stdio.h>

void removeTarget(int *array, int size, int target)
{

    int temp[size];
    int j = 0;

    for (int i = 0; i < size; i++)
    {
        if (array[i] != target)
        {
            temp[j] = array[i];
            j++;
        }
    }

    for (int i = j; i < size; i++)
    {
        temp[i] = 0;
    }

    for (int i = 0; i < size; i++)
    {
        array[i] = temp[i];
    }

    return;
}

int main()
{

    int num, count, target, i;

    scanf("%d", &num);
    scanf("%d", &count);

    int numbers[num];
    int *numbersPtr = &numbers[0];

    for (i = 0; i < num; i++, numbersPtr++)
    {
        *numbersPtr = i + 1;
    }

    for (i = 0; i < count; i++)
    {
        scanf("%d", &target);
        removeTarget(&numbers[0], num, target);
    }

    numbersPtr = &numbers[0];

    for (i = 0; i < num; i++, numbersPtr++)
    {
        printf("%d ", *numbersPtr);
    }

    puts("");

    return 0;
}