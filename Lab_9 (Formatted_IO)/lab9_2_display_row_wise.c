#include <stdio.h>

int main()
{
  int i;
  
  int N = 200;
  int columns = 15;
  
  for (i=1; i <= N; i++)
  {
      printf("%4d  ", i);

      if (i%columns == 0)     
         printf("\n");
  }

  printf("\n");
}


