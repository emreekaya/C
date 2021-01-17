#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	
	FILE *filep = fopen("yazilimbilimi.txt","a");
	
	if(filep == NULL){
		printf("Oyle bir dosya yok.");
		
	}
	else {
		printf("Dosya var.");
	}
	
	
	return 0;
}
