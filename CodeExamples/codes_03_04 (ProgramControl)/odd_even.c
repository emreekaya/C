#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
 setlocale(LC_ALL, "");

 int a;
  
 printf("Bir say� giriniz : ");
 scanf("%d", &a);

 if (a%2 == 0)
   printf("�ift say�\n");
 else
   printf("Tek say�\n");
  
  system("pause");
  return 0;
}
