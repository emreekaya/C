#include <stdio.h>
#define PI 3.14

float cevre(float r)
{
	return 2*r*PI;
}

float alan(float r)
{
	return r*r*PI;
}

int main()
{	
	float r;
	
	printf("Yaricapi giriniz:");
	scanf("%f", &r);
	
	printf("Cemberin cevresi = %.2f\n", cevre(r) );
	printf("Cemberin alanı = %.2f\n", alan(r) );
	
	return 0;
}
