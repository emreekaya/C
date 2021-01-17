#include <stdio.h>
#define TRUE 1
#define FALSE 0

int main() {
    int x;    // user entered number
    int flag; // logical sentinel
    int i;    // divisor counter
    int num;

    printf("Enter an integer number :"); scanf("%d", &x);
 
    for (num=2; num <= x; num++)  // outer loop
    {
    flag= TRUE; // initial assumption

    for (i=2; i < num; i++) // inner loop
    {
       if (num % i == 0) // Check the divisibility
       {
         flag = FALSE;
         break; // exit from inner loop
       }
    } // end inner loop

    if (flag == TRUE)
    {
       printf("%3d  ", num);
    }
  } // end outer loop
  
}//end main

