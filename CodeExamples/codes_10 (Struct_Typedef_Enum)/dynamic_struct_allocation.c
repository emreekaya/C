#include <stdio.h>
#include <stdlib.h>
int main()
{
struct student 
  {
     int idnumber;
     char name[20];
     int birthyear;
     };

 struct student  * POgr;

 //POgr = (struct student *) malloc(sizeof(struct student)); //Bu satir Visual Studio'da gerekli!
 POgr = malloc(sizeof(struct student));


 printf("Enter ID,name,birthyear :");
 scanf("%d %s %d", &(POgr->idnumber),
                   POgr->name,
                   &(POgr->birthyear) );
 

 printf("%d %s %d \n", POgr->idnumber,
                       POgr->name,
                       POgr->birthyear);

  printf(" \n");
  system("pause");
  return 0;
}
