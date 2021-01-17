/* Fig. 3.6: fig03_06.c
   Class average program with counter-controlled repetition */
#include <stdio.h>
#include <stdlib.h>


/* function main begins program execution */
int main()
{
   int counter; /* number of grade to be entered next */
   int grade;   /* grade value */
   int total;   /* sum of grades input by user */
   int average; /* average of grades */
   
   /* initialization phase */
   total = 0;   /* initialize total */
   counter = 1; /* initialize loop counter */
   
   /* processing phase */
   while ( counter <= 10 ) {     /* loop 10 times */
      printf( "Enter grade: " ); /* prompt for input */
      scanf( "%d", &grade );     /* read grade from user */
      total = total + grade;     /* add grade to total */
      counter = counter + 1;     /* increment counter */
   } /* end while */
   
   /* termination phase */
   average = total / 10; /* integer division */

   printf( "Class average is %d\n", average ); /* display result */

   
printf("\n\n");
system("pause");
return 0; /* indicate program ended successfully */

} /* end function main */


