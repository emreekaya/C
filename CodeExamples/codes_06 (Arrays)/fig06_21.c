/* Fig. 6.21: fig06_21.c
   Initializing multidimensional arrays */
#include <stdio.h>
#include <stdlib.h>


void printArray( const int a[][ 3 ] ); /* function prototype */

/* function main begins program execution */
int main()
{
   /* initialize array1, array2, array3 */
   int array1[ 2 ][ 3 ] = { { 1, 2, 3 }, { 4, 5, 6 } };
   int array2[ 2 ][ 3 ] = { 1, 2, 3, 4, 5 };
   int array3[ 2 ][ 3 ] = { { 1, 2 }, { 4 } };

   printf( "Values in array1 by row are:\n" );
   printArray( array1 );

   printf( "Values in array2 by row are:\n" );
   printArray( array2 );

   printf( "Values in array3 by row are:\n" );
   printArray( array3 );

   
printf("\n\n");
system("pause");
return 0; /* indicates successful termination */

} /* end main */

/* function to output array with two rows and three columns */
void printArray( const int a[][ 3 ] )
{
   int i; /* row counter */
   int j; /* column counter */

   /* loop through rows */
   for ( i = 0; i <= 1; i++ ) {

      /* output column values */
      for ( j = 0; j <= 2; j++ ) {
         printf( "%d ", a[ i ][ j ] );
      } /* end inner for */

      printf( "\n" ); /* start new line of output */
   } /* end outer for */

} /* end function printArray */

