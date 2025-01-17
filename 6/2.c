#include <stdio.h>
#include <stdlib.h>

unsigned long *fibo_array(unsigned int n, double *golden_ratio) {
    // จองพื้นที่
    unsigned long *fibo_data = (unsigned long *) malloc ( sizeof(unsigned long ) * n);
    // คำนวณ
    for (int i = 0 ; i < n ; i ++ ) {
        printf("this is a i %d\n",i);
        if ( i > 1) {
            fibo_data[i] = fibo_data[i-1] + fibo_data[i-2]; 
        } else {
            fibo_data[i] = i ;
        }
        printf("assigement value %lu\n",fibo_data[i]);
    }

    unsigned long n_fibo = fibo_data[n-2] + fibo_data[n-1];
    unsigned long lastest_fibo = n_fibo + fibo_data[n-1];
    printf("%lu %lu\n",n_fibo,lastest_fibo);
    *golden_ratio = (double) lastest_fibo / n_fibo ;
    
    return fibo_data;
}

int main() {
    unsigned int n = 10 ;
    double golden_ratio ;

    fibo_array(n,&golden_ratio);

    printf("%f",golden_ratio);

    return 0 ;
}
