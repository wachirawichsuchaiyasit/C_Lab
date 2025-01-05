#include <stdio.h>
#include <stdlib.h>

int Recursion(int n ) {
   if (n == 0) {
        return 0 ; 
    }

    Recursion(n / 2);  
    printf("%d", n % 2); 

}

int main() {
    char n_str[9] ;

    int n  ;

    fgets(n_str,9,stdin) ;

    n = atoi(n_str) ;

    if (n > 0) {
        Recursion(n);
    } else {
        printf("0\n");
    }
    
    return 0 ; 
}