#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i, N;
  double F=1;

  printf("Enter N for factorial : ");   
  scanf("%d", &N);

  if (N < 0) 
  {
     printf("\n Invalid number, only positive numbers can have factorial! \n");
     system("pause");
     return -1;
  }

  for (i=1; i <= N; i++)
      F = F * i;

  printf("\n Factorial = %.lf \n", F);

   system("pause");
   return 0;
}
