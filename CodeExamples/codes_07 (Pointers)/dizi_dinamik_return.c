#include <stdio.h>
#include <stdlib.h>

int * fonk()
{
  int i;
  int * p;
  p = (int *) malloc(sizeof(int)*5);
  for (i=0;i<5;i++)
      p[i]=(i+1)*10;
  return p;	
}


int main()
{
  int i;
  int * q;
  q = fonk();
  for (i=0;i<5;i++)
      printf("%d \n", q[i] );
  
  system("pause");
  return 0;
}

