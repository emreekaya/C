// Finds biggest number in array.
#include <stdio.h>
#include <stdlib.h>

#define SIZE 12

int main()
{
   int a[ SIZE ] = { 10, 3, -5, 4, 7, 2, 99, 16, 45, 67, 89, 45 };
   int i;       

   int EB=a[0];
   
   for ( i = 1; i < SIZE; i++ ) {
      if (a[i] > EB)
          EB = a[i];
   } 

   printf( "EB = %d\n", EB );
   
   system("pause");
   return 0;
}

