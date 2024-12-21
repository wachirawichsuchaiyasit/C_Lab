#include <stdio.h>
#include <stdlib.h>

int printLine(int space , int n ) {

    // print space 
    if (space > 0 ) {
        for ( int i = 0 ; i < space ; i ++ ) {
            printf(" ");
        }
    }

    // print star 
    for ( int i = 0 ; i < n ; i ++ ) {
        printf("*");
    }

    printf("\n");
    
    return 0 ;
}

int printStar( int x , int n  ) {

    int font_space =  n ;


    // print font_space 
    for (int i = 0 ; i < font_space ; i ++ ) {
        printf(" ") ;
    }

    // print start star ; 
    printf("*") ;

    // print empty space ; 
    int center_space = ( ( x + n) - 1 ) - ( n + 1 )  ;

    for (int i = 0 ; i < center_space ; i ++ ) {
        printf(" ") ;
    }

    // print last start ; 
    printf("*") ;

    // new line 
    printf("\n");
    
    return 0 ;
}



int main() {

    char x_str[10] ,y_str[10] ; 

    fgets(x_str,10,stdin);
    fgets(y_str,10,stdin);

    int x = atoi(x_str) ;
    int y = atoi(y_str) ;

    for ( int i = 0 ; i < y ; i ++ ) {
        
        // first row 
        if ( i == 0 ) {
            printLine(0,x);
        }
        
        // last row 
        if ( i == y - 1) {
            printLine(y-1,x);
        }

        if ( i != y -1  && i != 0 ) {
            printStar(x,i);
        }


    }

    return 0 ;
}