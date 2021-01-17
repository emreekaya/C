#include <stdio.h>

int main(){
	
	char text[256];
	FILE *filep;
	filep = fopen("yaz.txt","a");
	
	if(filep == NULL){
		printf("Dosya olusmadi");
	}
	else{
		printf("Bir sey yazin: ");
		fgets(text,256,stdin);
		fputs(text,filep);
		printf("Dosyaya yazildi.");
		fclose(filep);
		
	}
	
	return 0;
}
