/* Fig. 8.28: fig08_28.c
   Using strstr */
#include <stdio.h>
#include <stdlib.h>

#include <string.h>

int main()
{ 
   const char *string1 = "abcdefabcdef"; /* string to search */
   const char *string2 = "def"; /* string to search for */

   printf( "%s%s\n%s%s\n\n%s\n%s%s\n",
      "string1 = ", string1, "string2 = ", string2,
      "The remainder of string1 beginning with the",
      "first occurrence of string2 is: ", 
      strstr( string1, string2 ) );

   
printf("\n\n");
system("pause");
return 0; /* indicates successful termination */

} /* end main */

