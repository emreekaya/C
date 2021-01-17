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
 int i;
 struct Sstudent  Ogr[3] ={{4369, "Ahmet Gokce", 1990},
                           {7026, "Fatih Coskun",1991},
                           {2841, "Mehmet Yilmaz", 1989}};

 for (i=0; i < 3; i++)
   printf("%d %s %d \n", Ogr[i].idnumber,
                         Ogr[i].name,
                         Ogr[i].birthyear);
 system("pause");
 return 0;
}
