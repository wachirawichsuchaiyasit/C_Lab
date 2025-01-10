#include <stdio.h>

int main()
{
    int n, step, current_pos, round = 1;

    printf("Input number of stairs: ");
    scanf("%d", &n);

    current_pos = n - 1;

    while (1)
    {
        printf("---- round %d ----\n", round);

        // วาดบันได
        for (int i = 0; i < n; i++)
        {
            if (i == current_pos - 1)
            {
                printf("|-O-|\n");
            }
            else if (i == current_pos)
            {
                printf("|-^-|\n");
            }
            else
            {
                printf("|---|\n");
            }
        }

        printf("Input step command: ");
        scanf("%d", &step);

        if (step == 0)
        {
            break;
        }

        current_pos -= step;
        if (current_pos <= 0)
        {
            current_pos = 1;
        }
        if (current_pos >= n)
        {
            current_pos = n - 1;
        }

        round++;
    }

    return 0;
}
