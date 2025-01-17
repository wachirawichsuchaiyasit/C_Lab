#include <stdio.h>

int main() {

    int h , m  ;
    char t ;

    printf("Enter a 12-hour time [eg. 12:34 am]: ");
    scanf("%d:%d %c",&h,&m,&t) ;

    if ( h == 12) {
        h = 0;
    }

    printf("Equivalent 24-hour time: %02d:%02d",(t == 'P' || t == 'p' ) ? h+=12 : h,m);

return 0 ;
}