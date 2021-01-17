#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void CalculateStats (int * Array, int Size, float & avg, int & min, int & max)
{
  int i;
  float total=0;

  min = Array[0];
  max = Array[0];
  
  for (i=0; i < Size; i++)
  {
      total += Array[i];

      if (Array[i] < min)
         min = Array[i];

      if (Array[i] > max)
         max = Array[i];
  }
  
  avg = total / Size;
}

int main()
{
  int * P;
  int N,i;
  float average;
  int minimum, maximum;
  
  printf("Enter N (array size): ");
  scanf("%d", &N);
  
  P = (int *) malloc(N*sizeof(int) );

  srand(time(NULL));
  for (i=0; i < N; i++)
  {
      P[i] = rand();
      printf("%d\n", P[i] );
  }
  
  CalculateStats(P, N, average, minimum, maximum);
  
  printf("\nAverage = %f \n", average );
  printf("Min = %d \n", minimum );
  printf("Max = %d \n", maximum );
 
}


