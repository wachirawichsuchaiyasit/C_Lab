#include <stdio.h>
#include <stdlib.h>
int main() {
    char a_str[4], b_str[4], c_str[4];
    int a, b, c;
    
    printf("Enter length of side A: ");
    fgets(a_str,4,stdin);
    a = atoi(a_str);
    
    printf("Enter length of side B: ");
    fgets(b_str,4,stdin);
    b = atoi(b_str);
    
    printf("Enter length of side C: ");
    fgets(c_str,4,stdin);
    c = atoi(c_str);
    
    if ((a + b <= c) || (b + c <= a) || (a + c <= b) || (a <= 0 || b <= 0 || c <= 0)) {
        printf("Triangle type is invalid.");
    } else if (a == b && b == c) {
        printf("Triangle type is equilateral.");
    } else if ((a == b && b != c) || (b == c && b != a) || (a == c && a != b)) {
        printf("Triangle type is isosceles.");
    } else {
        printf("Triangle type is scalene.");
    }
    return 0;
}