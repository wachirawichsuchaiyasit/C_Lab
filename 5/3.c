#include <stdio.h>
#include <stdlib.h>

void shift_left(char str[], int n)
{
    // หาขนาด
    int len = 0;

    char *str_clone = str;

    while (*str_clone != '\0')
    {
        len++;
        str_clone++;
    }

    if (len == 0)
    {
        return;
    }

    n = n % len;

    char temp[100];

    for (int i = 0; i < n; i++)
    {
        temp[i] = str[i];
    }

    // shift
    int temp_i = 0;
    for (int i = n; i < len; i++)
    {
        str[temp_i] = str[i];
        temp_i++;
    }

    int temp_i2 = 0;
    for (int i = temp_i; i < len; i++)
    {
        str[i] = temp[temp_i2];
        temp_i2++;
    }

    return;
}

int main()
{
    char str[80], *c;

    int n;

    printf("String: ");

    fgets(str, sizeof(str), stdin);

    c = str;

    for (c = str; *c && *c != '\n'; c++)
        ;

    *c = 0;

    printf("     n: ");

    scanf("%d", &n);

    shift_left(str, n);

    printf("Output: >>%s<<\n", str);
    return 0;
}