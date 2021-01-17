/* Example program to calculate factorial */

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int N, i;
  double fact;

  printf("Enter N value : ");
  scanf("%d", &N);

  i = 1;
  fact = 1;
  while (i <= N)
  {
    fact = fact * i;
    i = i + 1;
  }

  printf("Factorial : %.lf \n\n", fact);

  system("PAUSE");
  return 0;
}

