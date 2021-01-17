#include <stdio.h>
#include <stdlib.h>
#define SURUM 2

int main()
{
  printf("ORNEK PROGRAM \n");

#ifdef SURUM
  printf("Surum : %d ", SURUM);
#else
  printf("Surum :  Bilinmiyor");
#endif

  printf("\n");
  system("pause");
  return 0;
}
