#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i;  /* satir sayacı */
  int j;  /* sütun sayacı */
  int N;  /* satır ve sütun üst sınırı */

  printf("Enter N number :");   
  scanf("%d", &N);
 
  for (i=1; i <= N; i++)
  {
      for (j=1; j < i ; j++)
          printf(" ");

      for (j=1; j <= N - i + 1; j++)
          printf("*");


      printf("\n"); // yeni satıra geç
  }
   
   system("pause");
   return 0;
}
