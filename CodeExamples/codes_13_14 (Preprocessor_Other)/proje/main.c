#include <stdio.h>
#include "islemler.h"

int main() {
  int cevap;
  while(1) { // Infinite loop
     printf("��LEMLER \n");
     printf("1. Notlari gir \n");
     printf("2. Artan s�rada g�r�nt�le \n");
     printf("3. Azalan s�rada g�r�nt�le \n");
     printf("4. Ortalamay� hesapla \n");
     printf("5. ��k�� \n");
     printf("   Se�iminiz : ");
     scanf("%d", &cevap);

     switch (cevap) {
       case 1: notgir();       break;
       case 2: sirala(ARTAN);  break;
       case 3: sirala(AZALAN); break;
       case 4: ortalama();     break;
       case 5: return 0;       //Stop
       default: printf(" Ge�ersiz se�enek \n");
     } // end switch
   } // end while
   printf(" Program bitti \n");} // end main
