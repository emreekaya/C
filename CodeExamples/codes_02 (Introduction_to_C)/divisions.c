/* Divisions örnegi */

#include <stdio.h>
#include <stdlib.h>

int main()
{ 
   int X = 15;
   printf("X = %d\n\n", X);

   printf("X/2 with %%d = ");
   printf("%d \n\n", X/2);  // 7

   printf("X/2 with %%f = ");
   printf("%f \n\n", X/2);  // 0.000000

   printf("X/2.0 with %%f  = ");
   printf("%f \n\n", X/2.0);  // 7.500000

   printf("(float) X/2 with %%f  = ");
   printf("%f \n\n", (float) X / 2);  // 7.500000  (float) means typecasting

   printf("(float) X/2 with %%.3f  = ");
   printf("%.3f \n\n", (float) X / 2);  // 7.500

   printf("(float) X/2 with %%.1f  = ");
   printf("%.1f \n\n", (float) X / 2);  // 7.5

   //printf("Sifira bolme 60/0 = ");
   //printf("%d \n\n", 60 / 0);  // Compiler error

   printf("Sifira bolme 60/(X-15) = ");
   printf("%d \n\n", 60 / (X-15));  // Run-time error: Program will crash

   system("pause");
   return 0;
}



