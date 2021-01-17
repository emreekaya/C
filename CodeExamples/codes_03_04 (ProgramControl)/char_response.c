#include <stdio.h>

int main()
{
  char response;
  do {
      printf("Continue (y/n) ? ");
      scanf("%c", &response);	
      printf("%c\n", response);
	  fflush(stdin);	
  }  while (response=='y' || response=='Y');
}

