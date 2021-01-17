/* Fig. 6.8: fig06_08.c
   Histogram printing program */
#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

/* function main begins program execution */
int main()
{
   /* use initializer list to initialize array n */
   int n[ SIZE ] = { 19, 3, 15, 7, 11, 9, 13, 5, 17, 1 };
   int i; /* outer for counter for array elements */
   int j; /* inner for counter counts *s in each histogram bar */

   printf( "%s%13s%17s\n", "Element", "Value", "Histogram" );

   /* for each element of array n, output a bar of the histogram */
   for ( i = 0; i < SIZE; i++ ) {
      printf( "%7d%13d        ", i, n[ i ]) ;

      for ( j = 1; j <= n[ i ]; j++ ) {   /* print one bar */
         //printf( "%c", '*' );
         printf( "%c", 186 ); 
	   } /* end inner for */

      printf( "\n\n" ); /* end a histogram bar */
   } /* end outer for */

   
printf("\n\n");
system("pause");
return 0; /* indicates successful termination */

} /* end main */


