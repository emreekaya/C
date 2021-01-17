#include <stdio.h>
#include <stdlib.h>

struct Yapi
{
  char Name[4];
  float Score;
};



int main()
{
  struct Yapi dizi[5] = {"AAA", 93.519,
                         "BBB", 7.628,
                         "CCC", 25.085,
                         "DDD", 73.009, 
                         "EEE", 14.920};
  int i;

  printf("Order  Name  Score \n");
  printf("=====  ====  ===== \n");
  
  for (i=0; i<5; i++)
      printf("%05d  %-5s %5.2f \n", i+1, dizi[i].Name, dizi[i].Score );
}


