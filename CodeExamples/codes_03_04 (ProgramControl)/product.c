/*
1) What does this program displays?

2) How many iterations will be performed?

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int product = 1 , i=0;

  while ( product <= 1000 )
  {
     i = i +1;

     product = 2 * product;
  }

  printf("Product = %d   Counter = %d \n", product, i);

  system("PAUSE");
  return 0;
}

