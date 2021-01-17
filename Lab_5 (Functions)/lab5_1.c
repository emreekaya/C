#include <stdio.h>

void Test_and_Display(int sayi)
{
	if (sayi % 2 == 0)
	   printf("THE NUMBER IS EVEN \n");
    else
	   printf("THE NUMBER IS ODD \n");
}

int main()
{
  int num;
  printf("Enter an integer : ");
  scanf("%d", &num);
  Test_and_Display(num);
}


