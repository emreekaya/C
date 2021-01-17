#include <stdio.h>


struct Student
{
	char isim[15];
	char soyisim[15];
	int numara;
	int yas;
};




int main()
{
	struct Student ahmet = {"Ahmet","Gedikli",135,23};
	
	printf("%s %s %d %d",ahmet.isim,ahmet.soyisim,ahmet.numara,ahmet.yas);
	
	
	
	
	return 0;
}
