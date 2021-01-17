#include <stdio.h>
#include <stdlib.h>

int main()
{
  printf("Sonuc = %d \n", strcmp("AHMET", "Ahmet")); //-1 (In ASCII table, upper letters are smaller than lower letters)
  printf("Sonuc = %d \n", strcmp("Ahmet", "AHMET")); //1
  printf("Sonuc = %d \n", stricmp("AHMET", "Ahmet")); //0 (i means ignore case)
  
  return 0;
}

