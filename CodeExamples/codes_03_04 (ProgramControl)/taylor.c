#include <stdio.h>
#include <math.h>

int main()
{
  double k, N, t, faktoriyel;
  double X, fsum;
  
  printf("Terim sayisini (N) ve aciyi (X) veriniz : ");
  scanf("%lf %lf", &N, &X);
  
  fsum = 0;

 X = X*3.14/180; // Dereceyi radyana çevir.
 for (k=0; k<=N; k++)
 {
     faktoriyel = 1;
	 for (t=1; t<=2*k; t++)
         faktoriyel = faktoriyel * t;

      printf("faktoriyel = %.lf\n", faktoriyel);
      fsum = fsum + pow(-1, k) * pow(X, 2*k) / faktoriyel;
 }

  printf("Sonuc= %f \n", fsum);
  return 0;
}


