#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i;  /* satir sayac� */
  int j;  /* s�tun sayac� */
  int N;  /* sat�r ve s�tun �st s�n�r� */

  printf("Enter N number :");   
  scanf("%d", &N);
 
  for (i=1; i <= N; i++)
  {
      for (j=1; j < i ; j++)
          printf(" ");

      for (j=1; j <= N - i + 1; j++)
          printf("*");


      printf("\n"); // yeni sat�ra ge�
  }
   
   system("pause");
   return 0;
}
