#include <stdio.h>
#include <stdlib.h>    // atoi

int main (int argc, char *argv [ ] )
{
int N;     // Count of data arguments
int i;    // Loop counter
int Sayi; // Data
float Total=0;

N = argc - 1;

for (i=1; i <= N; i++)
{
   Sayi = atoi( argv[i] );
   printf("%d\n", Sayi);
   Total += Sayi;
}
   
printf("Average = %f \n", Total / N);

} 
