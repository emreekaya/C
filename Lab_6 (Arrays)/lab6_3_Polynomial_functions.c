#include <stdio.h>

int Evaluate_polynomial(int Coef[], int Degree, int value)
{
	int i, sum=0;

	for (i=Degree; i >= 0; i--)
        sum += Coef[i] * pow(value, i);

    return sum;        
}

void Display_polynomial(int Coef[], int Degree)
{
	int i;

    printf("\n\nMATHEMATICAL NOTATION DISPLAY : \n");
	for (i=Degree; i >= 0; i--)
	{
		if (Coef[i] == 0)
		   continue;

        if (Coef[i] > 0) 
        {
		    if (i != Degree)
			   printf(" + ");
		}
        else
		    printf(" - ");
        
		      
        if (fabs(Coef[i]) == 1)
		   if (i != 0) 
	          printf("x^%d", i);
           else          
		      printf("1");
		      
        if (fabs(Coef[i]) != 1)
		   if (i == 0) 
		      printf("%d", abs(Coef[i]) );
           else          
	          if (i == 1) 
			     printf("%dx", abs(Coef[i]));
			  else   
		         printf("%dx^%d", abs(Coef[i]), i);
	}
  printf("\n\n");
}

void Derivative_polynomial(int Coef[], int Degree, int DerCoef[])
{
	int i;

	for (i=Degree; i >= 1; i--)
        DerCoef[i-1] = Coef[i] * i;
}


int main()
{
  int coefficients[6] = {-5, 3, 6, 0, -1, 7};
  int i, val;
  int dercoefficients[6];

  printf("SIMPLE DISPLAY : \n");
  
  printf("P(x) = ");
  
  for (i=5; i >= 0; i--)
      printf(" %+dx^%d " , coefficients[i], i);
  
  Display_polynomial(coefficients, 5);

  printf("Enter an X value for evaluation : ");
  scanf("%d", &val);
  printf("P(x=%d) = %d \n", val, Evaluate_polynomial(coefficients, 5, val)  );
 
  printf("\nDERIVATIVE POLYNOMIAL ");
  Derivative_polynomial(coefficients, 5, dercoefficients);
  Display_polynomial(dercoefficients, 4);
 
 }

