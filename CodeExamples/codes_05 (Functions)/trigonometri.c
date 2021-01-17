#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define  PI  3.14159265

int main()
{

  printf("Cos(90) = %f\n",  cos(90 * PI /180.0));
  printf("Cos(0) = %f\n",  cos(0));
  printf("Sin(90) = %f\n",  sin(90 * PI /180.0));
  printf("Sin(0) = %f\n",  sin(0));

  system("PAUSE");
  return 0;
}
