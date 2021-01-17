/* Fig 9.8: fig09_08.c */
/* Printing integers right-justified */
#include <stdio.h>
#include <stdlib.h>


int main()
{ 
   printf( "%4d\n", 1 );
   printf( "%4d\n", 12 );
   printf( "%4d\n", 123 );
   printf( "%4d\n", 1234 );
   printf( "%4d\n\n", 12345 ); /* data too large */

   printf( "%4d\n", -1 );
   printf( "%4d\n", -12 );
   printf( "%4d\n", -123 );
   printf( "%4d\n", -1234 ); /* data too large */
   printf( "%4d\n", -12345 ); /* data too large */

   
printf("\n\n");
system("pause");
return 0; /* indicates successful termination */

} /* end main */



