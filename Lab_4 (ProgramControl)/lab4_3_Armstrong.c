#include <stdio.h>
#include <math.h>

int main()
{
  int tot, num;
  int i, j, digit;

  printf(" LIST OF ALL ARMSTRONG NUMBERS (BETWEEN 111 - 999) \n\n");

  for (i=111; i <= 999; i++)
  {
     tot = 0;
     num = i;

     for (j=3; j >= 1; j--)
     {
        digit = num / pow(10, j-1);
        num = num - digit * pow(10, j-1);
        tot += pow(digit, 3);
     }

     if (i == tot)
        printf("%d\n\n", i);
  }

}

