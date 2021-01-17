#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i = 0;
	char ilks[20] = "deneme mesaji";
	char ikincis[20] = "ikinci mesaj";
	char *ilk = ilks;
	char *iki = ikincis;
	printf("%s \t %s\n",ilk,iki);
	
	//ilk = iki;
	
	char c = iki[0];
	while(c != '\0')
	{
		ilk[i] = iki[i];
		i++;
		c = iki[i];
	}
	printf("%s \t %s\n",ilk,iki);
	ilk[3] = 'x';
	printf("%s \t %s",ilk,iki);
	
	return 0;
}
