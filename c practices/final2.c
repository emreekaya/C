#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct planets{
	char name[10];
	float T;
	float R;
}; 

int main(){
	int i;

	FILE *ptr;
	
	ptr = fopen("planets.txt","r");
	

	struct planets array[12];
	
	while(!feof(ptr)){
		for(i=0;i<4;i++){
			fscanf(ptr,"%s %f %f",&array[i].name,&array[i].T,&array[i].R);
		}
	}
	fclose(ptr);
	
	float k[4];
	float total = 0;
	for(i=0;i<4;i++){
		k[i] = array[i].T / sqrt(pow(array[i].R,3));
		printf("k constant of planet->%d = %f \n",i,k[i]);
		total += k[i];		
	}
	float avg = total / 4;
	float smallest;
	int m;
	printf("Avg : %f\n",avg);
	for(i=0;i<4;i++){
		smallest = k[0];
		if(k[0] >= k[i]){
			smallest = k[i];
			m = i;	
		}
		
	}
	
	printf("Smallest : %f \n",smallest);
	printf("Name of the planet that has smallest k : %s",array[m].name); 
	
	
	return 0;
}
