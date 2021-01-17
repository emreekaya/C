#include <stdio.h>
#include <stdlib.h>

struct ELEMENT
{
  char symbol[3];
  char name[10];
  int weight;
};

int main()
{
  struct ELEMENT array[4] = { {"Ca", "Calcium", 20},
                              {"H", "Hydrogen", 3},
							  {"C", "Carbon", 24},
							  {"Na", "Sodium", 18}
};
  int i;
  float total=0;
							
  for (i=0; i<4; i++)
  {
     printf("Symbol : %s \n", array[i].symbol );
     printf("Name   : %s \n", array[i].name );
     printf("Weight : %d \n", array[i].weight );
     printf("-------------------------- \n");
     total += array[i].weight;
  }

  printf("Avg of Weights : %f \n", total/4 );
}



