#include <stdio.h>
#include <stdlib.h>

int main() {
   char salary_str[20];
   double salary, tax;

   fgets(salary_str, 20, stdin);
   salary = atof(salary_str);

   if (salary < 0) {
       printf("Error: Salary must be greater or equal to 0");
       return 0;
   }

   if (salary <= 300000.00) {
       tax = salary * 0.05;
   } else {
       tax = (300000 * 0.05) + ((salary - 300000) * 0.10);
   }

   printf("%.2f", tax);
   return 0;
}