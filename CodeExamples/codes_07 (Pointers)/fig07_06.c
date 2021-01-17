/* Fig. 7.6: fig07_06.c
   Cube a variable using call-by-value */
#include <stdio.h>
#include <stdlib.h>


int cubeByValue( int n ); /* prototype */

int main()
{
   int number = 5; /* initialize number */

   printf( "The original value of number is %d", number );
   
   /* pass number by value to cubeByValue */
   number = cubeByValue( number );

   printf( "\nThe new value of number is %d\n", number );

   
printf("\n\n");
system("pause");
return 0; /* indicates successful termination */

} /* end main */

/* calculate and return cube of integer argument */
int cubeByValue( int n )
{
   return n * n * n;   /* cube local variable n and return result */

} /* end function cubeByValue */


