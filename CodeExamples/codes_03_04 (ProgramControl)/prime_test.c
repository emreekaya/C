#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

int main()
{
  int flag;
  int x , i;

  printf("Enter an integer number :");   
  scanf("%d", &x);
 
    flag= TRUE; // initial assumption

    for (i=2; i < x; i++)
    {
       if (x % i == 0)
       {
	  printf("\n %d  can be divided by %d without a remainder \n ", x, i);
	  flag = FALSE;
	  break;
       }
    }

    if (flag == TRUE)
       printf("\n %d is a prime number \n", x);
    else
       printf("\n %d is NOT a prime number \n", x);

   system("pause");
   return 0;
}

