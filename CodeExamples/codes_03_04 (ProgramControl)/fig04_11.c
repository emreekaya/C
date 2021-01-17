/* Fig. 4.11: fig04_11.c
   Using the break statement in a for statement */
#include <stdio.h>
#include <stdlib.h>


/* function main begins program execution */
int main()
{
   int x; /* counter */
   
   /* loop 10 times */
   for ( x = 1; x <= 10; x++ ) {

      /* if x is 5, terminate loop */
      if ( x == 5 ) {
         break; /* break loop only if x is 5 */
      } /* end if */

      printf( "%d ", x ); /* display value of x */
   } /* end for */
   
   printf( "\nBroke out of loop at x == %d\n", x );
   
   
printf("\n\n");
system("pause");
return 0; /* indicate program ended successfully */

} /* end function main */


