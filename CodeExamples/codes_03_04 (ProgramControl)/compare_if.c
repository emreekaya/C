/* Program þablonu */
#include <stdio.h>
#include <stdlib.h>
int main()
{
int a,b;
printf("Ilk sayiyi giriniz : ");
scanf("%d", &a);

printf("Diger sayiyi giriniz : ");
scanf("%d", &b);

if (a == b )
   printf("Sayilar esittir \n");
   
if (a >= b )
   printf("Ilk sayi buyuk veya esittir \n");

if (a <= b )
   printf("Ikinci sayi buyuk veya esittir \n");


  system("pause");
  return 0;
}
