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

    int b[M][N];
    

    for(i=0; i < N; i++)
        for(j=0; j < M; j++)
	        b[j][i] = a[i][j];


    for(i=0; i < M; i++)
    {
        for(j=0; j < N; j++)
	        printf ("%d\t", b[i][j]);

        printf ("\n"); 
     }
  system("pause");
  return 0;
}
