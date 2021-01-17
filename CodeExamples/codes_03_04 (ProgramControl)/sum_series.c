// This version is using the pow built-in faunction.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*

       n
      ---    1
      \   -------
T  =  /         i   
      ---  i*(3 )
      i=1


*/


int main()
{
  int i, N;
  float T=0;

  printf("Enter N for series : ");   
  scanf("%d", &N);

  for (i=1; i <= N; i++)
      T = T + 1.0/(i*pow(3,i));

  printf("\n Sum of Series = %f \n", T);

   system("pause");
   return 0;
}
