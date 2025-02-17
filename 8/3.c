#include <stdio.h>

struct vector {
    float x ;
    float y ;
    float z ;
};

int main() {

    struct vector  u , v , result ; 

    printf("Enter u: ");
    scanf("%f %f %f",&u.x,&u.y,&u.z);
    printf("Enter v: ");
    scanf("%f %f %f",&v.x,&v.y,&v.z);

    result.x = ( u.y * v.z ) -  ( u.z * v.y ) ;
    result.y = ( u.z * v.x ) - ( u.x * v.z ) ;
    result.z = ( u.x * v.y ) - ( u.y * v.x ) ;

    printf("u x v = %.1f %.1f %.1f",result.x , result.y, result.z);

    
    return 0 ; 
}