/* Fig. 6.3: fig06_03.c
   initializing an array */
#include <stdio.h>
#include <stdlib.h>


/* function main begins program execution */
int main()
{
   int n[ 10 ]; /* n is an array of 10 integers */
   int i; /* counter */
   
   /* initialize elements of array n to 0 */
   for ( i = 0; i < 10; i++ ) {
      n[ i ] = 0; /* set element at location i to 0 */
   } /* end for */
   
   printf( "%s%13s\n", "Element", "Value" );

   /* output contents of array n in tabular format */
   for ( i = 0; i < 10; i++ ) {
      printf( "%7d%13d\n", i, n[ i ] );
   } /* end for */

   
printf("\n\n");
system("pause");
return 0; /* indicates successful termination */

} /* end main */


