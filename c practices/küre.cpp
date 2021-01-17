#include <stdio.h>
#include <stdlib.h>

#define PI 3.14

int main()
{
	int r = 0;
	
	printf("Yaricapi giriniz: ");
	scanf("%d",&r);
	
	float hacim = 4 * PI * r * r * r / 3;
	float alan = 4 * PI * r * r;
	
	printf("Hacim:%.2lf cm^3\n",hacim);
	printf("Alan:%.2lf cm^2",alan);
	
	
	return EXIT_SUCCESS;
}
