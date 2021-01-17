#include <stdio.h>

int main()
{
 int X[5] = {10, 20, 30, 40, 50};
 int Y[5] = {5, 15,  7,  25,  8};
 float Z[5];
 int i;

 for (i=0; i<5; i++)
 {
 	Z[i] = cos(X[i]) * cos(X[i]) + 3 * Y[i];
 	printf("%f \n", Z[i] );
 }
}


