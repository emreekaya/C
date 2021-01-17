#include <stdio.h>
#include <stdlib.h>

int main()
{
  char Names[5][4] = {"AAA", "BBB", "CCC", "DDD", "EEE"};
  float Scores[5] = {93.519, 7.628, 25.085, 73.009, 14.920};
  int i;

  printf("Order  Name  Score \n");
  printf("=====  ====  ===== \n");
  
  for (i=0; i<5; i++)
      printf("%05d  %-5s %5.2f \n", i+1, Names[i], Scores[i] );
}


