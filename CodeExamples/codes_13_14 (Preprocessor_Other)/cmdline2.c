#include <stdio.h>
#include <stdlib.h>
int main ( int argc , char *argv[] )
{
  int a,b;

  if (argc != 3)
  {
     printf("\nKullanim : Program-ismi  Sayi1  Sayi2\n") ;
     system("pause");
     return 0;
  }

  sscanf(argv[1], "%d" , &a);
  sscanf(argv[2], "%d" , &b);
  
  printf("\nOrtalama = %f \n", (a+b) / 2.0);   
  system("pause");
  return 0;
}
