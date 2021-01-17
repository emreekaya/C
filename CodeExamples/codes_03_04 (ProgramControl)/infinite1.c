#include <stdio.h>
#include <stdlib.h>

int main()
{
  int a=1;
  
  while (a > 0) // infinite loop
  {
      printf("%d \n", a);
      a = a + 1;
  }
  
  system("pause");
  return 0;
}

