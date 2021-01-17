#include <stdio.h>
#include <string.h>

char mystrlen(char *p)
{
	int length = 0;
	for(int i = 0;p[i] != '\0';i++)
	{
		length++;
	}
	
	return length;
}







int main()
{
	
	char example[] = "professor";
	
	
	
	printf("%d",mystrlen(example));
	
	
	
	
	return 0;
}
