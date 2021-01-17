#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main()
{   
    setlocale(LC_ALL, NULL); /* Sets the C default locale */
    printf("DEFAULT HARFLER \n\n");
    printf("Þ Ç Ð Ö Ü Ý \n");
    printf("þ ç ð ö ü ý \n");
    printf("\n\n");

    setlocale(LC_ALL, "");   /* Sets the native locale */
    //Veya: setlocale( LC_ALL, "Turkish_Turkey.1254" );
    printf("\nTÜRKÇE HARFLER \n\n");
    printf("Þ Ç Ð Ö Ü Ý \n");
    printf("þ ç ð ö ü ý \n");
    printf("\n\n");

    system("pause");
    return 0;
}

