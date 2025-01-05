#include <stdio.h>

int Find(int n, int* data) {
    int a, b, c;

    for (a = 1; a < n / 2; a++) {
        for (b = a + 1; b < n / 2; b++) { 
            c = n - a - b;
            if (c > b && a * a + b * b == c * c) { 
                data[0] = a;
                data[1] = b;
                data[2] = c;
                return 0; 
            }
        }
    }
    return 1;
}

int main() {

    int n = 0   ;
    int data[3] = {0,0,0};

    scanf("%d",&n);

    int error =  Find(n,data);

    if (error) {
        printf("No triple found.");
        return 1 ; 
    }

    printf("%d %d %d",data[0],data[1],data[2]);

    return 0 ;
}