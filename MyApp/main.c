#include <stdio.h>
#define TENYEAR 10
#define TENYEARAGO(x) x-10

int main(void) {

   int year;
   printf("Enter the year: ");
   scanf("%d", &year);
   printf("This year is: %d\n", year);
   printf("10 years ago is: %d.\n", year-10);
   printf("10 years ago is: %d.\n", year-TENYEAR);
   printf("10 years ago is: %d.\n", TENYEARAGO(year));

   printf("The address of variable year: %p.\n", &year);



   return 0;
}
