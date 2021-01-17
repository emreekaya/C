/* Fig 9.11: fig09_11.c */
/* Right justifying and left justifying values */
#include <stdio.h>
#include <stdlib.h>


int main()
{ 
   printf( "%10s%10d%10c%10f\n\n", "hello", 7, 'a', 1.23 );
   printf( "%-10s%-10d%-10c%-10f\n", "hello", 7, 'a', 1.23 );

   
printf("\n\n");
system("pause");
return 0; /* indicates successful termination */

} /* end main */

