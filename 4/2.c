#include <stdio.h>
#include <stdlib.h>

int is_prime(int x)
{
    int x2 = (x + 1) / 2;

    if ( x == 2 || x == 3 || x == 5) {
        return 1;
    }

    for (int i = 2; i <= x2; i++)
    {
        if (x % i == 0)
        {
            return 0;
        }

    }
    return 1;
}

int main()
{

    char num_str[10];

    int num, prime;

    fgets(num_str, 10, stdin);

    num = atoi(num_str);

    for (int i = 2; i <= num; i++)
    {
        prime = is_prime(i);

        if (prime)
        {
            printf("%d is a prime number.\n", i);
        }
    }

    return 0;
}