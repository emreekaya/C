#include <stdio.h>
#include <stdlib.h>

int * fonk()
{
  int i;
  int A[5];
  for (i=0;i<5;i++)
      A[i]=(i+1)*10;
  return A;	
  //Compiler Warning : Address of local variable 'A' returned.  
}


int main()
{
  int i;
  int *q;
  q = fonk();
  for (i=0;i<5;i++)
      printf("%d \n", q[i] );
  
  system("pause");
  return 0;
}

