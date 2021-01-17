#include <stdio.h>
int main()
{
  int i, j, N;
  printf("enter N number:");
  scanf("%d",&N);

  for (i = 1; i <= N; i++)
  {
	  
	for (j = 1; j <= (N-i)/2; j++)
        printf(" ");

    for (j = 1; j <= i; j++)
        printf("*");

    printf("\n");
  }

  return 0;
}

