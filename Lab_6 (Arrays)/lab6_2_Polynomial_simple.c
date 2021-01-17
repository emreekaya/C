#include <stdio.h>

int main()
{
  int coefficients[6] = {-5, 3, 6, 0, -1, 7};
  int i;

  printf("SIMPLE DISPLAY : \n");
  printf("P(x) = ");
  
  for (i=5; i >= 0; i--)
      printf(" %+dx^%d " , coefficients[i], i);
 }
 

