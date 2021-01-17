#include <stdio.h>
#include "islemler.h"

//Global variables:
int notlar[50];
int sayac; // Ogrenci sayisi

void swap(int *a, int *b); //Prototype

void notgir()
{
 printf("Notlari girin (sonlandirmak icin -1) : ");
 sayac=0;
 do
 {
   scanf("%d", &notlar[sayac]);
   sayac++;
 } while (notlar[sayac-1] != -1); //Sentinel checking

 sayac--; //Since the last entered data was -1
} // end function notgir


void sirala(int siralama_yonu)
{
 int i,j;
 //Selection Sort method:
 for (i=0; i < sayac-1; i++)
     for (j=i+1; j < sayac; j++)
         if (siralama_yonu == ARTAN) //Sort by ascending order
         {
            if (notlar[i] > notlar[j])
                swap(&notlar[i], &notlar[j]);
         }
         else //Sort by descending order
         {
            if (notlar[i] < notlar[j])
                swap(&notlar[i], &notlar[j]);
         }

 // Diziyi ekrana yaz:
 for (i=0; i < sayac; i++)
     printf("%d \n", notlar[i]);
} // end function sirala


void swap(int *a, int *b)
{
  int tmp;
  
  tmp = *a;
  *a = *b;
  *b = tmp;
}


void ortalama()
{
 int i, Tot=0;

 for (i=0; i < sayac; i++)
     Tot += notlar[i];

 printf("Ortalama = %f \n", (float) Tot / sayac);
}

