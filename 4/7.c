#include <stdio.h>
#include <stdlib.h>

int main() {
    char n_str[9] ; 

    int n ; 

    fgets(n_str,9,stdin) ;

    n = atoi(n_str) ;

    int i =  0 ;  
    int done = 0 ; 

    while ( i > -1 ) {

        if ( i == n ) {
            done = 1 ; 
        }

        if ( !done ) {
            i ++ ;
        } else {
            i -- ; 
        }

        for (int j = 0 ; j < i ; j ++ ) {
            printf("*");
        }
        printf("\n");
    }

    return 0 ; 
}