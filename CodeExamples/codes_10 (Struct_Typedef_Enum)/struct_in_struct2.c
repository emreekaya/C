#include <stdio.h>
#include <stdlib.h>
#include "ders_kayitlari2.h"

void  yaz(struct course Sube); // Prototype
       
int main()
{
  int i;

  for (i=0; i < M; i++)
      yaz(Sube[i]);  

  system("pause");
  return 0;
}

void  yaz(struct course Sube)
{
  int Count, i;
  
  printf("****************************************\n");
  printf("COURSE CODE : %s \n", Sube.coursecode);
  printf("COURSE CRN  : %d \n", Sube.CRN);
  printf("COURSE NAME : %s \n", Sube.coursename);
  printf("\nLIST OF STUDENTS: \n\n");

  Count = sizeof(Sube.liste)  /  sizeof(struct student);
  for (i=0; i < Count; i++)
  {
     if (Sube.liste[i].stunumber != 0) 
        printf("%d %s \n", Sube.liste[i].stunumber, 
                                       Sube.liste[i].stuname);
  }
  printf("\n");
}  

