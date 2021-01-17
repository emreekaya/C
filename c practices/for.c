#include <stdio.h>

int main()
{
	int i;
	int j;
	for (i=0, j=1 ; i < 10 || j < 5; i++,j++)
	{	
		printf("i:%d j:%d\n",i,j);
	}



	return 0;
}

