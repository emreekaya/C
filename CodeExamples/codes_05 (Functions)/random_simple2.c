#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    
  srand( time( NULL ) );
    
  printf("Sayi1 %d \n",  rand() );
  
  printf("Sayi2 %d \n",  rand() );
  
  system("pause");
  return 0;
}
