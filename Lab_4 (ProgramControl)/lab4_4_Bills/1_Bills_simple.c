#include <stdio.h>

int main()
{
  int X=2598;

  int ikiyuz_say;
  int yuz_say;
  int elli_say;
  int yirmi_say;
  int on_say;
  int bes_say;
  
  printf("Enter Amount : ");
  scanf("%d", &X);

  ikiyuz_say = X / 200;
  if (ikiyuz_say > 0) 
     printf("%d x 200 = %d \n", ikiyuz_say, ikiyuz_say*200);
  X = X - ikiyuz_say*200;

  yuz_say = X / 100;
  if (yuz_say > 0) 
     printf("%d x 100 = %d \n", yuz_say, yuz_say*100);
  X = X - yuz_say*100;

  elli_say = X / 50;
  if (elli_say > 0) 
     printf("%d x 50 = %d \n", elli_say, elli_say*50);
  X = X - elli_say*50;

  yirmi_say = X / 20;
  if (yirmi_say > 0) 
     printf("%d x 20 = %d \n", yirmi_say, yirmi_say*20);
  X = X - yirmi_say*20;

  on_say = X / 10;
  if (on_say > 0) 
     printf("%d x 10 = %d \n", on_say, on_say*10);
  X = X - on_say*10;

  bes_say = X / 5;
  if (bes_say > 0) 
     printf("%d x 5 = %d \n", bes_say, bes_say*5);
  X = X - bes_say*5;

  if (X > 0) 
     printf("%d x 1 = %d \n", X, X);
}


