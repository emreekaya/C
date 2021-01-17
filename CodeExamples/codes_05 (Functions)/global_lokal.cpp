#include <stdio.h>
#include <stdlib.h>

int a = 5;  //Global

int main()
{
  int a = 8;  //Local

  printf ("Local a = %d\n\n", a);
  printf ("Global a = %d\n\n", :: a);  // The :: operator works only in C++
  
system("pause");
  return 0;
}
