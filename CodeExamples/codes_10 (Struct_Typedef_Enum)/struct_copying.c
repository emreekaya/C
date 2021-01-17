#include <stdio.h>
#include <stdlib.h>

struct Sstudent
 {
   int idnumber;
   char name[30];
   int birthyear;
 }; 

int main()
{
 struct Sstudent  Ogr1 = {4369, "Ahmet Gokce", 1990};
 struct Sstudent  Ogr2, Ogr3;
 
 // Copy Ogr1 to Ogr2
 Ogr2.idnumber = Ogr1.idnumber;
 strcpy(Ogr2.name , Ogr1.name);
 Ogr2.birthyear = Ogr1.birthyear;
 
 Ogr3 = Ogr1; // Easy method for copying

 printf("%d %s %d \n", Ogr1.idnumber, Ogr1.name, Ogr1.birthyear);
 printf("%d %s %d \n", Ogr2.idnumber, Ogr2.name, Ogr2.birthyear);
 printf("%d %s %d \n", Ogr3.idnumber, Ogr3.name, Ogr3.birthyear);

 system("pause");
 return 0;
}
