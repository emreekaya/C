#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i,j;
  printf("I  J  I*J \n");
  printf("========= \n"); 
  for (i=1; i<=4; i++)
  {
     for (j=1; j<=3; j++)
          printf("%d  %d  %d \n", i, j, i*j); 
     printf("--------- \n");
  }

 return 0;
}


