#include <stdio.h>
#include <stdlib.h>

int main()
{
    char stam_str[10] , money_str[10];

    int stam ;
    
    float money ;

    float discount_init ;

    int stam_init ; 

    float earn ; 

    fgets(stam_str,10,stdin);
    fgets(money_str,10,stdin);

    stam = atoi(stam_str);
    money = atof(money_str);

    if (stam >= 9) {
        discount_init = 0.4;
        stam_init = 9 ;
    } else if ( stam >= 6) {
        discount_init = 0.3;
        stam_init = 6 ;
    } else if ( stam >= 3) {
        discount_init = 0.2;
        stam_init = 3 ;
    } else if ( stam >= 2) {
        discount_init = 0.15;
        stam_init = 2 ;
    } else if ( stam >= 1) {
        discount_init = 0.1;
        stam_init = 1 ;
    } else{
        discount_init = 0;
        stam_init = 0 ;
    }

    earn = money - (money * discount_init );
    stam -= stam_init;

    printf("You get %.0f percents discount.\n",discount_init * 100);
    printf("Total amount due is %.2f Baht.\n",earn);
    printf("And you have %d stickers left.",stam);
    
    return 0;
}