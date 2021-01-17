#include <stdio.h>
#include "islemler.h"

int main() {
  int cevap;
  while(1) { // Infinite loop
     printf("ÝÞLEMLER \n");
     printf("1. Notlari gir \n");
     printf("2. Artan sýrada görüntüle \n");
     printf("3. Azalan sýrada görüntüle \n");
     printf("4. Ortalamayý hesapla \n");
     printf("5. Çýkýþ \n");
     printf("   Seçiminiz : ");
     scanf("%d", &cevap);

     switch (cevap) {
       case 1: notgir();       break;
       case 2: sirala(ARTAN);  break;
       case 3: sirala(AZALAN); break;
       case 4: ortalama();     break;
       case 5: return 0;       //Stop
       default: printf(" Geçersiz seçenek \n");
     } // end switch
   } // end while
   printf(" Program bitti \n");} // end main
