#include <stdio.h>
#include <stdlib.h>

int main()
{
    char input_str[9];
    int input;

    fgets(input_str, 9, stdin);
    input = atoi(input_str);

    if (input < 1 || input > 26)
    {
        printf("-");
        return 1;
    }

    for (int i = input - 1; i >= 0; i--)
    {
        printf("%c", 'a' + i);
        if (i > 0) {
            printf("-");
        }
    }

    for (int i = 1; i < input; i++)
    {
        printf("-%c", 'a' + i);
    }

    printf("\n");
    return 0;
}