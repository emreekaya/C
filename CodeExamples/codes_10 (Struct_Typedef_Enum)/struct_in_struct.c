#include <stdio.h>
#include <stdlib.h>
#include "ders_kayitlari.h"

void  yaz(struct course Sube); // Prototype
       
int main()
{
  yaz(Sube1);  
  yaz(Sube2);  
  yaz(Sube3);  

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

