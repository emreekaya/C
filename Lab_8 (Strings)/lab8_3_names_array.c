#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
  char names[10][6];
  int i,j;
  
  srand(time(NULL));
  for (i=0; i < 10; i++)
  {
      for (j=0; j < 5; j++)
          names[i][j] = 'A' + rand()%26;

      names[i][5] = '\0'; // null
      
      printf("%s \n", names[i]);          
  }
   system("pause");
}


