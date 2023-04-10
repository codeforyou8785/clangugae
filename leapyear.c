//WAP IN C TO FIND THE LEAP YEAR USING LOGICAL OPERATOR
#include <stdio.h>
int main() {
   int year;
   printf("Enter a year: ");
   scanf("%d", &year);
   if ((year%400==0 && year%100!= 0)||(year % 4 == 0)) {
      printf("%d is a leap year.", year);
     }
   else {
      printf("%d is not a leap year.\n", year);
   }

   return 0;
}
