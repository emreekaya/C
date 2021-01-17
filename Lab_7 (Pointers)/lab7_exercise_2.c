#include <stdio.h>
#include <stdlib.h> // for malloc and random functions
#include <time.h> // for time function

float CalculateAvg (int * Array, int Size); // prototype

int main()
{
  int * P;
  int N,i;
  
  printf("Enter N (array size): ");
  scanf("%d", &N);
  
  P = (int *) malloc(N*sizeof(int) );

  srand(time(NULL));
  for (i=0; i < N; i++)
  {
      P[i] = rand();
      printf("%d\n", P[i] );
  }
  
  printf("\nAverage = %f \n", CalculateAvg(P, N) );
}

float CalculateAvg (int * Array, int Size)
{
  int i;
  float total=0;
  
  for (i=0; i < Size; i++)
      total += Array[i];
  
  return total / Size;
}
