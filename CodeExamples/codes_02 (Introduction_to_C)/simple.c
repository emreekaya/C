/* Take a number multiply it by 10 and display it */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int number, result; 

	printf ("Type in a number \n");

	scanf ("%d", &number);

	result = number *10;

	printf ("The number multiplied by 10 equals %d \n", result);

    system("pause");
    return 0;
}
