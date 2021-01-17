#include <stdio.h>
#include <stdlib.h>
#define SURUM 2

int main()
{
  printf("ORNEK PROGRAM \n");

#if SURUM == 1
  printf("Surum : Ilk");
#elif SURUM == 2
  printf("Surum : Ikinci");
#else
  printf("Surum :  Bilinmiyor");
#endif

  printf("\n");
  system("pause");
  return 0;
}
