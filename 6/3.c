#include <stdio.h>
#define ARRAY_SIZE 98

int main() {
    
    int i , j ;
    int A[ARRAY_SIZE] = {0};

    for (i = 2 ; i < ARRAY_SIZE ; i ++ ) {
        A[i] = 1;
    } 

    for (i = 2 ; i * i < ARRAY_SIZE ; i ++ ) {
        if (A[i]) {
            for (j = i * i ; j  < ARRAY_SIZE ; j+=i  ) {
                A[j] = 0;
            }
        }
    }

    for (i = 2 ; i < ARRAY_SIZE ; i ++ ) {
        if (A[i]) {
            printf("%d\n",i);
        }
    }



    return 0 ;
}
