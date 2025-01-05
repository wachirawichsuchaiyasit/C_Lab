#include <stdio.h>

int PrintLine(int n) {

    for (int i = 1 ; i <= n ; i ++ ) {
        if ( i % 2 == 0) {
            printf("x");
            continue;
        } 
        printf("-");
    }

    // print end line
    printf("\n");

    return 0 ; 
}

int main() {

    int n  ;

    printf("Enter n: "); 
    scanf("%d",&n); 

    // loop each line 
    for ( int i = 1 ; i <= n  ; i ++ ) {
        PrintLine(i);
    }

    // loop revese line
    for ( int i = n-1 ; i > 0  ; i -- ) {
        PrintLine(i);
    }
    return 0 ;
}