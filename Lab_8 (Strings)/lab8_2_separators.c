#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
  char sentence[100];
  int i;
 
  printf("Enter a sentence : ");
  gets(sentence);
  printf("Sentence : %s\n", sentence);
  
  for (i=0; i<strlen(sentence); i++)
  {
  	if (sentence[i] == ' ' || sentence[i] == ',' || sentence[i] == '.')
	   printf("\n"); 	
  	else   
  	   printf("%c", sentence[i]);
    
  } // end of for
   system("pause");  
}


