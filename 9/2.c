#include <stdio.h>

typedef enum
{
    Sunday = 6,
    Monday = 7,
    Tuesday = 1,
    Wednesday = 2,
    Thursday = 3,
    Friday = 4,
    Saturday = 5

} DayOfWeek;

DayOfWeek findDayOfWeek(int day, int month)
{
    int months[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (month < 1 || month > 12 || day < 1 || day > months[month - 1])
    {
        return Tuesday;
    }

    int temp = day;
    for (int i = 0; i < month - 1; i++)
    {
        temp += months[i];
    }

    int baseDay = 1;
    int date = (baseDay + temp - 1) % 7;
    date = (date == 0) ? 7 : date;

    return (DayOfWeek)date;
}

int main()
{
    int day, month;
    DayOfWeek dow;

    printf("Day:1 Month:1 of Year 2013 is Tuesday.\n");
    printf("Enter Day and Month: ");
    scanf("%d %d", &day, &month);
    dow = findDayOfWeek(day, month);
    printf("Day:%d Month:%d of Year 2013 is ", day, month);

    switch (dow)
    {
    case 6:
        printf("Sunday.\n");
        break;
    case 7:
        printf("Monday.\n");
        break;
    case 1:
        printf("Tuesday.\n");
        break;
    case 2:
        printf("Wednesday.\n");
        break;
    case 3:
        printf("Thursday.\n");
        break;
    case 4:
        printf("Friday.\n");
        break;
    case 5:
        printf("Saturday.\n");
        break;
    }
}
