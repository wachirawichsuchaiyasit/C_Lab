#include <stdio.h>
#include <stdlib.h>

int main() {

    char fact_str[4];

    int fact ; 

    fgets(fact_str,4,stdin);

    fact = atoi(fact_str) ;

    while ( fact > -1 ) {
        printf("%d\n",fact);
        fact -= 1;
    }

    return 0;
}