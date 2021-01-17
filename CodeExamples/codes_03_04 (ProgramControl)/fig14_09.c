/* Fig. 14.9: fig14_09.c 
   Using goto */
#include <stdio.h>
#include <stdlib.h>


int main()
{ 
   int count = 1; /* initialize count */

   start: /* label */

      if ( count > 10 ) {
         goto end;
      } /* end if */

      printf( "%d  ", count );
      count++;

      goto start; /* goto start on line 9 */

   end: /* label */
      putchar( '\n' );

   
printf("\n\n");
system("pause");
return 0; /* indicates successful termination */

} /* end main */

 
