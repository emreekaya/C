#include <stdio.h>
#include <stdlib.h>
int main()
{
  int N; //Count of numbers
  int i; // Loop counter
  int sayi;
  int Total=0; 
  
  FILE * fPtr;
  fPtr = fopen("veriler.txt", "r");
  
  if (fPtr == NULL)
  {
    printf("Dosya acilamadi\n");
    system("pause");
    return 0;
  } 

// First, read the count of numbers:
  fscanf(fPtr, "%d", &N);            
  
  // Now, read the numbers:
  for (i=1; i <= N; i++)
  {
     fscanf(fPtr, "%d", &sayi);
     printf("%d\n", sayi);
     Total += sayi;
  }            
  fclose(fPtr);
  printf("Ortalama = %d \n", Total / N);
  system("pause");
  return 0;
}
