#include <stdio.h>
#include <stdlib.h>

int main()
{

    char input_str[4];

    int input, s1, s2, s3, s4;

    fgets(input_str, 4, stdin);

    input = atoi(input_str);

    s1 = input & 1;
    s2 = input >> 1 & 1;
    s3 = input >> 2 & 1;
    s4 = input >> 3 & 1;

    printf("Binary number of %d is %d%d%d%d.", input, s4, s3, s2, s1);

    return 0;
}