/* Fig 9.5: fig09_05c */
/* Printing strings and characters */
#include <stdio.h>
#include <stdlib.h>


int main()
{ 
   char character = 'A'; /* initialize char */
   char string[] = "This is a string"; /* initialize char array */
   const char *stringPtr = "This is also a string"; /* char pointer */

   printf( "%c\n", character );
   printf( "%s\n", "This is a string" );
   printf( "%s\n", string );
   printf( "%s\n", stringPtr );

   
printf("\n\n");
system("pause");
return 0; /* indicates successful termination */

} /* end main */


