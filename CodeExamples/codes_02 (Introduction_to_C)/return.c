/* In Windows operating system (command line), you can type the following to obtain the returned value:
   echo   %ERRORLEVEL%
*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
  printf("Hello\n\n");
  system("pause");
  return 5;
}
