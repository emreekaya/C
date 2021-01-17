#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	char s[100];
	int i, choice;

	printf("Enter string : ");
        gets(s);
    
	printf("Enter conversion operation code (1.Upper letters, 2.Lower letters) : ");
	scanf("%d", &choice);
	
    for (i=0; i<strlen(s);i++)
    {
       if (choice == 1)
          s[i] = toupper(s[i]);
       else
          s[i] = tolower(s[i]);
	}

	printf("%s\n", s);
   system("pause");
}
