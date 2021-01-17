#include <stdio.h>
#include <stdlib.h>

int main()
{
  printf("atoi(string) = %d\n", atoi("5")); // correct
  printf("atoi(char) = %d\n", atoi('5')); // wrong

  system("pause");
  return 0;
}

