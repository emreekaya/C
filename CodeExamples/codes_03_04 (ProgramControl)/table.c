#include <stdio.h>
#include <stdlib.h>

int main()
{
  int N, i;

  printf("Enter N number :");   
  scanf("%d", &N);
 
  printf("X \t 10*X \t 100*X \n");
  printf("====   ======   =========\n");

  for (i=1; i <= N; i++)
      printf("%d \t %ld \t %ld \n", i, 10*i , 100*i);
   
   system("pause");
   return 0;
}
