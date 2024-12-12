#include <stdio.h>
#include <stdlib.h>

int main()
{
    char stam_str[10] , money_str[10];
    int stam , money , discount ;

    fgets(stam_str,10,stdin);
    fgets(money_str,10,stdin);

    stam = atoi(stam_str);
    money = atoi(money_str);

    if (stam >= 9) {
        discount = 40;
    } else if ( stam >= 6) {
        discount = 30;
    } else if ( stam >= 3) {
        discount = 20;
    } else if ( stam >= 2) {
        discount = 15;
    } else {
        discount = 10;
    }

    printf("You get %d percents discount",discount);
    
    return 0;
}