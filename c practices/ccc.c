#include <stdio.h>
#define SIZE 80
void reverse(char* ptr)
{
	int count = 0;
	while(*ptr != '\0')
	{
		count++;
		ptr++;
	}
	ptr--;
	int begin;
	for(begin=0; begin<count;begin++)
	{
		putchar(*ptr);
		ptr--;
	}
}
int main()
{
	char sentence[SIZE];
	puts("Enter line of text:");
	fgets(sentence, SIZE, stdin);
	puts("\nThe line printed backwards is");
	
	reverse(sentence);
	return 0;
}
