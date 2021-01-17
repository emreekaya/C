#include <stdio.h>

void cizim (int X)
{
 int satir, sutun;
 
printf("FRAME %dx%d \n", X,X);   

for (sutun = 1; sutun <= X; sutun++)
    printf("*");   
printf("\n");   

 for (satir = 1; satir <= X-2; satir++)
 {
     printf("*");   
     for (sutun = 1; sutun <= X-2; sutun++)
         printf(" ");   
     printf("* \n");   
 }
 
for (sutun = 1; sutun <= X; sutun++)
    printf("*");   
printf("\n\n\n");   
}     


int main()
{
  int N, i;
  printf("N sayisini giriniz : ");
  scanf("%d", &N);
  
  for (i=2; i <= N; i++)
      cizim(i);

   printf("\n\n");   
}
