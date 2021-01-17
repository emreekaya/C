#include <stdio.h>

int main()
{
  int i,j,k;
  
  int N = 200;
  int rows = 15;
  int columns = ceil ( (float) N / rows);
  
  for (i=1; i <= rows; i++)
  {
      for (j=1; j <= columns; j++)
      {
          k = (j-1)*rows + i;
          if (k <= N)
              printf("%4d  ", k); 
     }
     
     printf("\n");
  }
  
}


