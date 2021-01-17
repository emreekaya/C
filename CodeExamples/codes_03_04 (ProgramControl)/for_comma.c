#include <stdio.h>
#include <stdlib.h>

int main()
{

  int i,j;

  for (i = 0, j = 0;  i <= 10, j <= 10; j++, i++)
      printf( "%d\n", j + i );

  system("PAUSE");
  return 0;
}

