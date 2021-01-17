#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i;
   char string[] = "APPLE AND ORANGE"; 
   int Uz= strlen(string)-1;

   for ( i=Uz;  i>=0;  i-- )
        printf( "%c", string[i] );

  printf("\n\n");
  system("pause");
  return 0;
}
