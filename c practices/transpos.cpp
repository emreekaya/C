#include <stdio.h>

int main()
{
	int matris[4][4];
	int transpose[4][4];
	int satir = 0, sutun = 0;
	
	printf("\n 4*4'luk matrisin degerlerini girin.");
	
	for(satir = 0; satir < 4;satir++)
	{
		for(sutun = 0;sutun <4; sutun++)
		{
			printf("\nMatrisin [%d][%d] elemani : ",satir+1,sutun+1);
			scanf("%d",&matris[satir][sutun]);
			
			transpose[sutun][satir] = matris[satir][sutun];
		}
	}
	
	printf("\nMatris ve Transposesi\n");
	
	for(satir = 0; satir < 4;satir++)
	{
		for(sutun = 0;sutun <4; sutun++)
		{
			printf("%d ",matris[satir][sutun]);
		}
		printf("\t\t\t");
			
		for(sutun = 0;sutun <4;sutun++)
		{
			printf("%d ",transpose[satir][sutun]);
		}
		printf("\n");
		
	}
	return 0;
}
