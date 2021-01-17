#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.14

void test_lines(float A1,float B1,float C1,float A2,float B2,float C2){
	int parallel = 0;
	int intersection =0;
	if((A1/A2) == (B1/B2) != (C1/C2)){
		
		float d = abs(C1-C2) / sqrt((A1*A1) + (B1*B1));
		printf("Distance : %.2f\n",d);
	}
	else {
		float m = (A1*B2 - A2*B1) / (A1*A2 - B1*B2);
		float angle = pow(tan(m),-1) * 180 / PI;
		printf("Angle : %.2f \n",angle);
		
		float x0,y0;
		
		x0 = (B1*C2 - B2*C1) / (A1*B2-A2*B1);	
		y0 = (A2*C1 - C2*A1) / (A1*B2-A2*B1);	
		
		printf("x0 : %f  y0 : %f\n",x0,y0);
	}
}


int main(){
	
	int i;
	float A1,B1,C1,A2,B2,C2;
	for(i=0;i<5;i++){
		printf("Enter values of first line : ");
		scanf("%f %f %f",&A1,&B1,&C1);
		printf("Enter values of second line : ");
		scanf("%f %f %f",&A2,&B2,&C2);
		test_lines(A1,B1,C1,A2,B2,C2);
	}
	
	
	return 0;
}
