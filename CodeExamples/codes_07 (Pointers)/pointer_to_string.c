#include <stdio.h>
#include <stdlib.h>
int main()
{
  char * ogrenci1 = "Ahmet";
  char ogrenci2[6] = "Fatih";

  printf("ogrenci1 = %s \n\n", ogrenci1);
  printf("&ogrenci1 = %p \n\n", &ogrenci1);

  printf("ogrenci2 = %s \n\n", ogrenci2);
  printf("&ogrenci2 = %p \n\n", &ogrenci2);

  system("pause");
  return 0;
}
