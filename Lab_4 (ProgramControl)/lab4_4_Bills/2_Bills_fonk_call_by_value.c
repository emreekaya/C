#include <stdio.h>

// A is passed as Call-by-value.
int Hesapla(int A, int bill)
{
  int say;
  say = A / bill;
  if (say > 0) 
     printf("%d x %d = %d \n", say, bill, say*bill);
  A = A - say*bill;
  return A;
}

int main()
{
  int X=2598;
  
  printf("Enter Amount : ");
  scanf("%d", &X);

  X = Hesapla(X, 200);
  X = Hesapla(X, 100);
  X = Hesapla(X, 50);
  X = Hesapla(X, 20);
  X = Hesapla(X, 10);
  X = Hesapla(X, 5);
  X = Hesapla(X, 1);
}


