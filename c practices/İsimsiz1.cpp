#include <stdio.h>
#include <string.h>

int main(){
	
	char veri[25] = "Yazilim Bilimi";
	int uzunluk = strlen(veri);
	int i;
	
	
	
	
	FILE *filep = fopen("yazilimbilimi.txt","w");
	
	if (filep == NULL){
		printf("Dosyal olusturulamadi");
	}
	else{
		for(i = 0;i < uzunluk;i++){
			fputc(veri[i],filep);
			printf("Yazilan karakter %c\n",veri[i]);
		}
		printf("Dosya basariyla yazdirildi");
		fclose(filep);
	}
	
	
	
	return 0;
}
