#include <stdio.h>
#include <stdlib.h>

// หา ห ร ม 
int f_gcd(int a,int  b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {

    char a_str[9] , b_str[9];

    int a , b  , gcd ; 

    fgets(a_str,9,stdin);
    fgets(b_str,9,stdin);


    a = atoi(a_str);
    b = atoi(b_str);

    // get หรม value 

    gcd = f_gcd(a,b);

    int reduced_a = a / gcd; 
    int reduced_b = b / gcd; 

    if (reduced_b == 1) {
        printf("= %d\n", reduced_a); 
    } else {
        printf("= %d/%d\n", reduced_a, reduced_b);
    }
    return 0;
}