/* Overflow örnegi */

#include <stdio.h>
#include <stdlib.h>

int main()
{ 
   unsigned short int X, Y; // Length of these are 2 bytes (16-bit) each

   X = 65535;  // Maximum possible value for unsigned short integer numbers

   Y = X + 1;  // Overflow is expected here (Y will be 0, instead of 65536)

   printf("SONUC = %d \n\n", Y);  // It will display 0 !!

   system("pause");
   return 0;
}



