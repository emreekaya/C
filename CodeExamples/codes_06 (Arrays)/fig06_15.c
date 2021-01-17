/* Fig. 6.15: fig06_15.c
   This program sorts an array's values into ascending order */
#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

/* function main begins program execution */
int main() 
{   
   /* initialize a */
   int a[ SIZE ] = { 2, 6, 4, 8, 10, 12, 89, 68, 45, 37 }; 
   int pass; /* passes counter */
   int i;    /* comparisons counter */
   int hold; /* temporary location used to swap array elements */
   
   printf( "Data items in original order\n" );
   
   /* output original array */
   for ( i = 0; i < SIZE; i++ ) {
      printf( "%4d", a[ i ] );
   } /* end for */

   /* bubble sort */
   /* loop to control number of passes */
   for ( pass = 1; pass < SIZE; pass++ ) { 

      /* loop to control number of comparisons per pass */
      for ( i = 0; i < SIZE - 1; i++ ) {      

         /* compare adjacent elements and swap them if first 
         element is greater than second element */
         if ( a[ i ] > a[ i + 1 ] ) {  
            hold = a[ i ];                   
            a[ i ] = a[ i + 1 ];
            a[ i + 1 ] = hold;
         } /* end if */

      } /* end inner for */

   } /* end outer for */

   printf( "\nData items in ascending order\n" );

   /* output sorted array */
   for ( i = 0; i < SIZE; i++ ) {
      printf( "%4d", a[ i ] );
   } /* end for */

   printf( "\n" );

   
printf("\n\n");
system("pause");
return 0; /* indicates successful termination */

} /* end main */


