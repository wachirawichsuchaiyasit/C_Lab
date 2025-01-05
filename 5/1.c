#include <stdio.h>
#include <stdlib.h>

int Counter(long long  n) {
    int ctn = 0 ; 

    while (n > 0 ) {
        n /= 10 ;
        ctn += 1; 
    }

    return ctn ;
}

int main() {

    char input_str[100] ;

    long long  input , result ;

    printf("Input n = "); 

    fgets(input_str,100,stdin) ;

    input = atoll(input_str) ;

    result = input * input ;

    int len_input = Counter(input);

    long long x = 1; 
    for (int i = 0; i < len_input; i++) {
        x *= 10;
    }

    long long done = result % x ;

    printf("n^2 = %lld\n",result);

    if ( done == input ) {
        printf("Yes. %lld is automorphic number.",input);
    } else {
        printf("No. %lld is not automorphic number.",input);
    }
    return 0 ;
}