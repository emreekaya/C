#include <stdio.h>
#include <stdlib.h>

int main()
{
  printf("sizeof (char)        = %d \n",sizeof(char));        //1 byte
  printf("sizeof (short)       = %d \n",sizeof(short));       //2
  printf("sizeof (int)         = %d \n",sizeof(int));         //4
  printf("sizeof (long)        = %d \n",sizeof(long));        //4
  printf("sizeof (float)       = %d \n",sizeof(float));       //4
  printf("sizeof (double)      = %d \n",sizeof(double));      //8
  printf("sizeof (long double) = %d \n",sizeof(long double)); //12
  printf("sizeof (int *)       = %d \n",sizeof(int *));       //4

  system("PAUSE");
  return 0;
}

