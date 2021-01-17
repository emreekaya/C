#include <stdio.h> 
#include <stdlib.h>
#include <math.h>  // sqrt hazir fonksiyonu icin

int main(void)
{
    float a, b, c; // Ikinci derece denklemin katsayilari
    float disc;    // Diskriminant
    float x1, x2;  // Denklemin kokleri

    printf("Denklemin a, b ve c katsayilarini yaziniz: ");
    scanf("%f %f %f", &a, &b, &c);;

    disc = b * b - 4 * a * c;

    printf("\n\n");

    if (disc < 0)
      printf("Gercek kok yok.\n");
    else 
    {
      if (disc == 0) 
      {
        x1 = -b / (2 * a);
        printf("%f noktasinda cakisan iki kok var. \n", x1);
      } 
      else 
      {
        x1 = (-b + sqrt(disc)) / (2 * a);
        x2 = (-b - sqrt(disc)) / (2 * a);
        printf("%f ve %f noktalarinda iki gercek kok var. \n", x1, x2);
      }
    }

    printf("\n\n");

    system("pause");
    return 0;
}
