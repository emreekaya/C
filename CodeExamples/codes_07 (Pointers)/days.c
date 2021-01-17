#include <stdio.h>
#include <stdlib.h>

int main()
{
char * Days[7] = { "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
// veya char Days[7][10] = ... 

int i;

      for (i=0; i < 7; i++)
           printf("%s \n", Days[i]);

      system("PAUSE");
      return 0;
}
