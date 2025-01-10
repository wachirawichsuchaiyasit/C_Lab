#include <stdio.h>

int main()
{

    int n = 0;

    scanf("%d", &n);

    int a, b, c;

    for (a = 1; a < n; a++)
    {
        for (b = a + 1; b < n; b++)
        {
            c = n - a - b;
            if (a * a + b * b == c * c)
            {
                printf("(%d %d %d)\n", a, b, c);
                return 0;
            }
        }
    }

    printf("No triple found.");

    return 1;
}