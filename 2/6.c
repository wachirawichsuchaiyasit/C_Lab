#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch ; 
    
    ch =  getchar();

   if (ch >= 'a' && ch <= 'z') {
       printf("lower case");
   }
   else if (ch >= 'A' && ch <= 'Z') {
       printf("upper case"); 
   }
   else if (ch >= '0' && ch <= '9') {
       printf("digit");
   }
   else {
       printf("others");
   }
    return 0;
}