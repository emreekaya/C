#include <stdio.h>
#include <stdlib.h>

int main()
{
 long int num;
 int digit, length=0;

 printf("Enter a positive integer : ");
 scanf("%ld", &num);

  do {
    digit = num - (num / 10 * 10);
    printf("%d - ", digit);

    num /= 10;
    length++;

  } while (num > 0);

 printf("\nLength = %d \n", length);

 printf("\n\n");
 system("PAUSE");
 return 0;
}
