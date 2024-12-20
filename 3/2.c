#include <stdio.h>
#include <stdlib.h>

long long f_gcd(long long a, long long b) {
    while (b != 0) {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

long long f_lcm(long long a , long long b) {
    long long gcd = f_gcd(a,b) ;

    return ( a * b) / gcd ;
}

int main() {

    char m_str[20] , n_str[20] ;

    long long  m, n  , lcm , gcd ;

    fgets(m_str,20,stdin); 
    fgets(n_str,20,stdin); 

    m = atoll(m_str);
    n = atoll(n_str);

    // หา ห ร ม 
    gcd = f_gcd(m,n) ;

    printf("GCD: %lld\n",gcd);

    // หา ค ร น 
    lcm = f_lcm(m,n);

    printf("LCM: %lld",lcm);

    return 0;
}

