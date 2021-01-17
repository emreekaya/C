#include <stdio.h>
#include <stdlib.h>
#define N 3
#define M 3

int main()
{   int i,j;
    int a[N][M] = {{ 8,  5, -6},
                   { 0,  2,  1},
                   { 4,  7,  9},
                  };  

    int tot=0;
    
    for(i=0; i < N; i++)
        for(j=0; j < M; j++)
        {
            if (i==j)
	            tot = tot + a[i][j];
         }
  printf ("%d\n", tot); 
  system("pause");
  return 0;
}
