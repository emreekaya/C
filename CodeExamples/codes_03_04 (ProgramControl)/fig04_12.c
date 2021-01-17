/* Fig. 4.12: fig04_12.c
   Using the continue statement in a for statement */
#include <stdio.h>
#include <stdlib.h>


/* function main begins program execution */
int main()
{
   int x; /* counter */

   /* loop 10 times */
   for ( x = 1; x <= 10; x++ ) {

      /* if x is 5, continue with next iteration of loop */
      if ( x == 5 ) {   
         continue; /* skip remaining code in loop body */
      } /* end if */

      printf( "%d ", x ); /* display value of x */
   } /* end for */
   
   printf( "\nUsed continue to skip printing the value 5\n" );
   
   
printf("\n\n");
system("pause");
return 0; /* indicate program ended successfully */

} /* end function main */


