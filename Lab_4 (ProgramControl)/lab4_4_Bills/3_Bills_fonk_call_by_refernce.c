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

  printf("Enter Amount : ");
  scanf("%d", &X);

  Hesapla(&X, 200);
  Hesapla(&X, 100);
  Hesapla(&X, 50);
  Hesapla(&X, 20);
  Hesapla(&X, 10);
  Hesapla(&X, 5);
  Hesapla(&X, 1);
}


