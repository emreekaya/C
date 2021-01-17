/* Fig. 6.4: fig06_04.c
   Initializing an array with a initializer list */
#include <stdio.h>
#include <stdlib.h>


/* function main begins program execution */
int main()
{
   /* use initializer list to initialize array n */
   int n[ 10 ] = { 32, 27, 64, 18, 95, 14, 90, 70, 60, 37 };
   int i; /* counter */
   
   printf( "%s%13s\n", "Element", "Value" );
   
   /* output contents of array in tabular format */
   for ( i = 0; i < 10; i++ ) {
      printf( "%7d%13d\n", i, n[ i ] );
   } /* end for */

   
printf("\n\n");
system("pause");
return 0; /* indicates successful termination */

} /* end main */

