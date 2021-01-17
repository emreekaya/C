#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
 setlocale(LC_ALL, "");

 int a;
  
 printf("Bir sayý giriniz : ");
 scanf("%d", &a);

 if (a%2 == 0)
   printf("Çift sayý\n");
 else
   printf("Tek sayý\n");
  
  system("pause");
  return 0;
}
