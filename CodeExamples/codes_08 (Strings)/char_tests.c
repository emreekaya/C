#include <stdio.h>
#include <stdlib.h>

int main()
{
  char k1 = 'A';
  char k2 = 65;
  char k3 = '7';

  printf("k1\n");
  printf("%d\n", isdigit(k1) );
  printf("%d\n\n", isalpha(k1) );

  printf("k2\n");
  printf("%d\n", isdigit(k2) );
  printf("%d\n\n", isalpha(k2) );

  printf("k3\n");
  printf("%d\n", isdigit(k3) );
  printf("%d\n\n", isalpha(k3) );

  system("PAUSE");
  return 0;
}
