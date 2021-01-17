/* This program multiplies two matrices */
#include <stdio.h>
#include <stdlib.h>

#define N 2
#define M 4
#define L 3

int main()
{
    int a[N][M] = {{8, 5, -6, 7},
                   {0, 2,  1, 4}
                  };  /* Matrix a */

    int b[M][L] = {{3, -9, 1},
                   {2, 5, 8},
                   {-2, 4, 0},
                   {1, 7, 6}
                  };  /* Matrix b */

    int c[N][L]; /* Matrix c */

    int i,j,k;

    /* First, compute he multiplication */
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < L; j++)
        {
            c[i][j] = 0;
            for (k = 0; k < M; k++)
                c[i][j] = c[i][j] + a[i][k] * b[k][j];
        }
    }

    /* Now, display the resulting matrix */
    printf ("RESULTING MULTIPLICATION MATRIX \n\n");
    for(i=0; i<N; i++)
    {
        for(j=0; j<L; j++)
	   printf ("%d\t", c[i][j]);
        printf ("\n"); /* new line */
     }

     system("PAUSE");
     return 0;
}

