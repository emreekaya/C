/* Fig. 6.10: fig06_10.c
   Treating character arrays as strings */
#include <stdio.h>
#include <stdlib.h>


/* function main begins program execution */
int main()
{
   char string1[ 20 ]; /* reserves 20 characters */
   char string2[] = "string literal"; /* reserves 15 characters */
   int i; /* counter */

   /* read string from user into array string1 */
   printf("Enter a string: ");
   scanf( "%s", string1 ); /* input ended by whitespace character */

   /* output strings */
   printf( "string1 is: %s\nstring2 is: %s\n"
           "string1 with spaces between characters is:\n",
           string1, string2 );

   /* output characters until null character is reached */
   for ( i = 0; string1[ i ] != '\0'; i++ ) {
      printf( "%c ", string1[ i ] );
   } /* end for */

   printf( "\n" );

   
printf("\n\n");
system("pause");
return 0; /* indicates successful termination */

} /* end main */


