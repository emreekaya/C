// Fibonacci Series
#include <stdio.h>

int main()
{
  int term1 = 0;
  int term2 = 1;
  int current_term;
  
  printf("%d \n", term1);
  printf("%d \n", term2);
  current_term = term1 + term2;

  while (current_term <= 100)
  {
    printf("%d \n", current_term);

  	term1 = term2;
  	term2 = current_term;
  	current_term = term1 + term2;
  }

}


