// Örnek C program.
#include <stdio.h>     /* printf () and sacnf() functions defined in this header file */
#include <stdlib.h>    /* system() function defined in this header file */

int main( )
{
    int Midterm1, Midterm2, Final;
    float Grade;

    printf("Please enter Midterm1, Midterm2, and Final values: ");
    scanf("%d %d %d", &Midterm1,  &Midterm2,  &Final);

    Grade = (Midterm1 * 0.3) + (Midterm2 * 0.3) + (Final * 0.4);
    printf("Your grade is %f \n\n", Grade);

    system("pause");  /* Computer waits the user hit any key in keyboard */ 
    return 0;
}

