#include <stdio.h>

int main()
{
	
	int ilksayi = 1;
	int ikincisayi = 1;
	int i;
	
	printf("%d\n%d\n",ilksayi,ikincisayi);
	
	for(i=0;i < 12;i++){
		
		int temp = ikincisayi;
		
		ikincisayi += ilksayi;
		
		ilksayi = temp;
		
		printf("%d\n",ikincisayi);
		
		
	}
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
