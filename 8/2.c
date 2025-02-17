#include <stdio.h>
#include <string.h>

typedef struct
{
    char id[12];
    int score;
} studentRecord;

void init(studentRecord list[], int size)
{
    char index[2];
    for (int i = 0; i < size; i++)
    {
        strcpy(list[i].id,"5510000");
        sprintf(index,"%d",i + 1);
        strcat(list[i].id,index);
        list[i].score = 0;
    }
}

void enterScore(studentRecord list[], int size)
{
    char target[14] ;
    int score  ; 

    scanf("%s %d",target,&score) ;

    for ( int i = 0 ; i < size ; i++ ) {
        if (strstr(list[i].id,target)) {
            list[i].score = score ;
        } 
    }
}

void printRecords(studentRecord list[], int size)
{
    int i;

    printf("   ID        Score\n");
    for (i = 0; i < size; i++)
    {
        printf("%s       %d\n", list[i].id, list[i].score);
    }
}

int main()
{
    int enter;
    studentRecord list[3];

    init(list, 3);
    enterScore(list, 3);
    printRecords(list, 3);
    return 0;
}