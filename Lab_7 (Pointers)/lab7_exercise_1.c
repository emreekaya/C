#include <stdio.h>
#include <stdlib.h>

int main()
{
  float F;
  float *P1, *P2;
  
  printf("Enter a float number : ");
  scanf("%f", &F);

  P1 = &F;  // PF now points to the F iable
  printf("DATA VALUE  F = %f \n", F);
  printf("DATA VALUE  *P1 = %f \n", *P1);
  
  P2 = (float*) malloc( sizeof(float)); // Dynamic memory allocation
  *P2 = *P1; // Copy data of P1 into P2
  printf("DATA VALUE  *P2 = %f \n", *P2);

  printf("\n");
  printf("MEMORY ADDRESS &F = %x \n", &F);
  printf("MEMORY ADDRESS P1 = %x \n", P1);
  printf("MEMORY ADDRESS P2 = %x \n", P2);
}


