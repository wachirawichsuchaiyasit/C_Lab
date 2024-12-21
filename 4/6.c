#include <stdio.h>
#include <stdlib.h>

int main()
{
    char goal_str[9], current_str[9];
    double goal, current, total_collected = 0;
    int day = 0;

    printf("Enter your goal amount: ");
    fgets(goal_str, 9, stdin);
    goal = atof(goal_str);

    while (total_collected < goal)
    {
        printf("Enter money collected today: ");
        fgets(current_str, 9, stdin);
        current = atof(current_str);
        total_collected += current;
        day++;

        if (total_collected < goal)
        {
            printf("Total money collected up to day %d is %.2f. You need %.2f more.\n", day, total_collected, goal - total_collected);
        }
    }

    if (day == 1)
    {

        printf("Congratulations! You take %d day to reach your goal.\n", day);
    }
    else
    {

        printf("Congratulations! You take %d days to reach your goal.\n", day);
    }
    return 0;
}