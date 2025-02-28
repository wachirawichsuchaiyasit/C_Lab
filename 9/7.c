#include <stdio.h>

double findAverage(char *filename)
{
    FILE *file = fopen(filename,"r");
    
    int ctn  ;
    double total = 0 ;
    int lenght = 0 ;

    while (fscanf(file,"%d",&ctn) == 1) {
        total += ctn ;
        lenght ++ ;
    }


    return total /= lenght ;
}

int main()
{
    char filename[20];
    double average;
    scanf("%s", filename);
    average = findAverage(filename);
    printf("Average score is %.4lf\n", average);
}