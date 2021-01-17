#include <stdio.h>
#include <conio.h>

void f(int n,int i)
{
	if(i == n+1)
		return;
	printf("%d ",i);
	f(n,i+1);
}

int main()
{
	f(10,1);
	getch();
}
