#include <stdio.h>
#include <stdlib.h>

unsigned long *fibo_array(unsigned int n, double *golden_ratio) {

    unsigned long *fib_array = (unsigned long *)malloc((n + 2) * sizeof(unsigned long));

    fib_array[0] = 0; 
    fib_array[1] = 1; 
    for (unsigned int i = 2; i < n + 2; i++) 
        fib_array[i] = fib_array[i - 1] + fib_array[i - 2];

    *golden_ratio = (double)fib_array[n + 1] / (double)fib_array[n];

    return fib_array;
}


int main() {
    unsigned int n = 10 ;
    double golden_ratio ;

    unsigned long *a = fibo_array(n,&golden_ratio);

    for ( int i = 0 ; i < n + 2 ; i ++ ) {
        printf("%d , %lu\n",i,a[i]);
    }


    return 0 ;
}


