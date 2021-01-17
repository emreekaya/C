#include <stdio.h>
#include <stdlib.h>

int main()
{
	int year = 0;
	double balance = 10000;
	
	while(balance <= 20000)
	{
		year++;
		double interest = balance * 0.05;
		balance = balance + interest;
	}
	printf("Final year is:%d\n",year);
	return EXIT_SUCCESS;
}