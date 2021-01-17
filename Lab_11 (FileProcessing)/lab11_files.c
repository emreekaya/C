#include <stdio.h>

int main()
{
  char name[10];
  int amount;

  int total=0, counter=0;
  float avg;

  FILE * dosya1, * dosya2;
  
  dosya1 = fopen("PRODUCTS.TXT", "r");
  
  if (dosya1 == NULL)
  {
     printf("PRODUCTS.TXT file could not opened! \n");
  	 return 0;
  }
  
  while (!feof(dosya1))
  {
  	fscanf(dosya1, "%s %d", name, &amount);
  	if (feof(dosya1) ) break;
  	total += amount;
  	counter++;
  }

  avg = (float)total/counter;
  printf("Counter = %d \nAverage = %f \n", counter, avg);
  
  fclose(dosya1);
  dosya1 = fopen("PRODUCTS.TXT", "r");
  
  dosya2 = fopen("PRODUCTS2.TXT", "w");

  while (!feof(dosya1))
  {
  	fscanf(dosya1, "%s %d", name, &amount);
  	if (feof(dosya1)) break;
  	if (amount >= avg)
  	   fprintf(dosya2, "%s %d\n", name, amount);
  }
  
  fclose(dosya1);
  fclose(dosya2);
}


