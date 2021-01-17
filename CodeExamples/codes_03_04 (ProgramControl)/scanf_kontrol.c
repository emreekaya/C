#include <stdio.h>
int main() {
    int klavye_durumu;
    int sayi;

    printf("sayi (unitialized value) = %d \n",sayi);

    printf("Bir sayi girin : ");
    klavye_durumu = scanf("%d",&sayi);

    printf("Girilen sayi = %d \n",sayi);
    if (klavye_durumu == 0 ) 
        printf("Yanlis veri turu! \n");
}

