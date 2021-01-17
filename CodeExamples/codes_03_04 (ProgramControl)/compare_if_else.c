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
else
{   
  if (a > b )
      printf("Ilk sayi buyuktur \n");
  else
     printf("Ikinci sayi buyuktur \n");
}  

  system("pause");
  return 0;
}
