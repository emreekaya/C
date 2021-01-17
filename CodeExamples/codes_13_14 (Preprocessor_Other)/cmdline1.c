#include <stdio.h>
#include <stdlib.h>    // atoi

int main (int argc, char *argv [ ] )
{
	int Sayi1, Sayi2;   
	
	if ( argc != 3)
	{
	 printf("\nYanlis sayida arguman girdiniz! \n");
	 printf("Kullanim ornegi : Program-ismi  Sayi1  Sayi2 \n\n");
     system("pause");
     return 0;
	}

	Sayi1 = atoi( argv[1] );    /* convert ascii string to integer */
	Sayi2 = atoi( argv[2] );    /* convert ascii string to integer */

	printf("\n%d * %d = %d \n\n", Sayi1, Sayi2, Sayi1 * Sayi2);

    system("pause");
    return 0;
}

