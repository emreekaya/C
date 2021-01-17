/* Fig 9.19: fig09_19.c */
/* Reading floating-point numbers */
#include <stdio.h>
#include <stdlib.h>


/* function main begins program execution */
int main()
{ 
   double a; 
   double b; 
   double c; 
   
   printf( "Enter three floating-point numbers: \n" );
   scanf( "%le%lf%lg", &a, &b, &c );

   printf( "Here are the numbers entered in plain\n" );
   printf( "floating-point notation:\n" );
   printf( "%f\n%f\n%f\n", a, b, c );

   
printf("\n\n");
system("pause");
return 0; /* indicates successful termination */

} /* end main */

