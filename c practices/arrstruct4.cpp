#include <stdio.h>
#include <string.h>

struct ogrenci
{
	
	char isim[20];
	char soyisim[20];
	int numara;
	
};
struct ogrenci *degerAl(struct ogrenci *p)
{
	strcpy(p->isim,"Mehmet");
	strcpy(p->soyisim,"Gencol");
	p->numara = 455;
	
	return p;
}
void goster(struct ogrenci *p)
{
	printf("Ogrencinin bilgileri\nIsim:%s\nSoyisim:%s\nNumara:%d",p->isim,p->soyisim,p->numara);
}

int main()
{
	struct ogrenci *tut;
	struct ogrenci ogrenci1 = 
	{
		"Ahmet","Gedikli",505
	};
	tut = degerAl(&ogrenci1);
	
	printf("%s %s %d",tut->isim,tut->soyisim,tut->numara);
	
	return 0;
}
