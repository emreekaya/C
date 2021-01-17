#include <stdio.h>

int sayi; // GLOBAL variable

void Test_and_Display2()
{
	if (sayi % 2 == 0)
	   printf("THE NUMBER IS EVEN \n");
    else
	   printf("THE NUMBER IS ODD \n");
}

int main()
{
  printf("Enter an integer : ");
  scanf("%d", &sayi);
  Test_and_Display2();
}


