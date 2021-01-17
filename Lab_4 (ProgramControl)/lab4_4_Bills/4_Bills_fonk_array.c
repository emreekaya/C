#include <stdio.h>

// A is passed as Call-by-reference.
// A is modified in function.
void Hesapla(int * A, int bill)
{
  int say;
  say = (*A) / bill;
  if (say > 0) 
     printf("%d x %d = %d \n", say, bill, say*bill);
  (*A) = (*A) - say*bill;
}

int main()
{
  int X=2598;
  int bills[7] = {200,100,50,20,10,5,1};
  int i;
    
  printf("Enter Amount : ");
  scanf("%d", &X);

  for (i=0; i<7; i++)
      Hesapla(&X, bills[i] );
}


