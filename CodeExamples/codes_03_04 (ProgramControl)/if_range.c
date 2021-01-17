#include <stdio.h>
#include <stdlib.h>

int main()
{
  int x, y ;

  printf("\nEnter x: ");
  scanf("%d", &x) ;

  if (x < -5 || x > 1)
     y=1 ;

  if (x >= -5 && x <= -2)
      y = x+6 ;

  if (x >= -2 && x <= 1)
    y = 2-x ;

  printf("y=%d \n", y);
  system("PAUSE");
  return 0;
}

