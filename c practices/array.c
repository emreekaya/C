#include <stdio.h>

int main()
{
	float toplam = 0.0;
	float sayilar[5];
	int i;
	for (i=0;i < 5;i++)
	{
		printf("Bir sayi giriniz:");
		scanf("%f",&sayilar[i]);
	}
	
	for (i=0;i<5;i++)
	{
		toplam += sayilar[i];
	}
	
	printf("Girdiğiniz sayilarin aritmetik ortalaması %.2f dir.",toplam / 5);
	
	
	
	
	return 0;
}