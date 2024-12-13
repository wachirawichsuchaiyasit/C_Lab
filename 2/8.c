#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    char size_str[4], extra_pep[4], extra_cheese[4], extra_mushroom[4];

    int fixed_cost = 5 ;
    int base_cost = 2 ;

    float extra_cost = 0.0 ;

    int size , pep ,cheese , mushroom ; 
    

    printf("Welcome to My Pizza Shop!!\n~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("Enter pizza size (1=s, 2=m, or 3=l): ");
    
    fgets(size_str,4,stdin);

    printf("Extra pepperoni? (1=yes, 0=no): ");

    fgets(extra_pep,4,stdin);

    printf("Extra cheese? (1=yes, 0=no): ");

    fgets(extra_cheese,4,stdin);

    printf("Extra mushroom? (1=yes, 0=no): ");

    fgets(extra_mushroom,4,stdin);

    size = atoi(size_str);
    pep = atoi(extra_pep);
    cheese = atoi(extra_cheese);
    mushroom = atoi(extra_mushroom);

    //  init diameter mafuck 1
    float diameter ; 

    if (size == 1) {
        diameter = 10;
    } else if (size == 2){
        diameter = 16;
    } else {
        diameter = 20 ;
    }

    diameter *= diameter;

    // mafucker area
    float area = ( M_PI * diameter )  / 4 ;

    // caclutate extracost shit 
    if ( pep == 1 ) {
        extra_cost += 0.5;
    } 
    if ( cheese == 1 ) {
        extra_cost += 0.25;
    } 
    if ( mushroom == 1 ) {
        extra_cost += 0.30;
    } 

    float cost = fixed_cost + (base_cost * area ) + (extra_cost * area);
    float price = cost * 1.5;

    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("Your order costs %.2f baht.\n",price);
    printf("Thank you.");
    return 0;
}