#include <stdio.h>
#include <stdlib.h>

int getMaxRow(int n)
{
    return (n - 1) * 2;
}

int getMaxCol(int n)
{
    return ((n - 1) * 2) + 1;
}

int getChar(int n)
{
    return 'a' + (n - 1);
}

int printRow(int ch_num, int n)
{

    int max_row = getMaxRow(n);
    int ch;

    if (ch_num > 0)
    {
        int use_text = 0;
        int text_num = n;

        for (int i = max_row; i > 0; i--)
        {
            if (i > (ch_num * 2))
            {
                printf("-");
                continue;
            }

            if (use_text == 0)
            {
                printf("%c", getChar(text_num));
                text_num -= 1;
                use_text = 1;
            }
            else
            {
                printf("-");
                use_text = 0;
            }
        }

        printf("%c", getChar(n - ch_num));

        text_num += 1;
        use_text = 1;

        for (int i = 0; i < max_row; i++)
        {
            if (i > (ch_num * 2))
            {
                printf("-");
                continue;
            }

            if (use_text == 0)
            {
                printf("%c", getChar(text_num));
                text_num += 1;
                use_text = 1;
            }
            else
            {
                printf("-");
                use_text = 0;
            }
        }
    } else {
        for ( int i = 0 ; i < max_row ; i ++ ) {
            printf("-");
        }
        printf("%c",getChar(n));
        for ( int i = 0 ; i < max_row ; i ++ ) {
            printf("-");
        }
    }

    printf("\n");

    return 0 ; 
}

int main()
{

    char n_str[6];

    fgets(n_str, 6, stdin);

    int n = atoi(n_str);

    if ( n <= 0  || n > 26) {
        printf("-");
        return 0 ;
    }

    int max_row = getMaxRow(n);
    int max_col = getMaxCol(n);

    for (int i = 0; i < n-1; i++)
    {

        printRow(i, n);
    }

    for (int i = n-1; i >= 0; i--)
    {

        printRow(i, n);
    }
    return 0;
}