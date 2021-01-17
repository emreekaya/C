/* This program adds two matrices */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[2][2] = {{10, 15}, {20, 5}};  /* Matrix a */
    int b[2][2] = {{25,  5}, { 6, 0}};  /* Matrix b */
    int c[2][2]; /* Matrix c */
    int i, j;

    printf ("RESULTING ADDITION MATRIX \n\n"); 

    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
	    printf ("%d\t", c[i][j]);
        }

        printf ("\n"); /* new line */
     }

     system("PAUSE");
     return 0;
}

