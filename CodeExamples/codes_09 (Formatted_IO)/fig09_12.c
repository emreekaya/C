/* Fig 9.12: fig09_12.c */
/* Printing numbers with and without the + flag */
#include <stdio.h>
#include <stdlib.h>


int main()
{ 
   printf( "%d\n%d\n", 786, -786 );
   printf( "%+d\n%+d\n", 786, -786 );

   
printf("\n\n");
system("pause");
return 0; /* indicates successful termination */

} /* end main */


