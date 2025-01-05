#include <stdio.h>

int main() {
    int i = 1 ;

    int *Iptr = &i ;

    *Iptr = 2; 


    printf("%d\n",Iptr);
    printf("%d",&i);

    return 0 ;
}