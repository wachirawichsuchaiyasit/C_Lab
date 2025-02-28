#include <stdio.h>
#include <string.h>

struct Word
{
    char word[21];
    int count;
};

int main()
{
    char input[21];
    int i, last_word = 0, find = 0;
    struct Word data[20] = {0};
    scanf("%20s", input);


    while ( strcmp(input,"exit") != 0 )
    {
        find = 0;
        // Loop for find word
        for (int j = 0  ; j < last_word  ; j ++ ) {
            if (strcmp(input,data[j].word) == 0 && data[j].count <= 20) {
                find = 1 ;
                data[j].count ++ ;
                break ;
            }
        }
        // add new word
        if (find == 0) {
            strcpy(data[last_word].word,input);
            data[last_word].count ++ ;
            last_word ++ ;
        }
        // Get new input 
        scanf("%20s",input);
    }

    printf("Output:\n");
    for (i = 0; i < last_word; i++)
    {
        printf("%s = %d\n", data[i].word, data[i].count);
    }
}