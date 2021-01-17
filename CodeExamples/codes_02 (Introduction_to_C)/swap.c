#include <stdio.h>
#include <stdlib.h>

int main()
{
int  variable1 = 65 ;
int  variable2 = 97 ;

int  temp;

printf("SWAP'TEN ONCE DEGISKENLER : %d %d \n\n", variable1, variable2);

temp = variable1;
variable1 = variable2;
variable2 = temp;

printf("SWAP'TEN SONRA DEGISKENLER : %d %d \n\n", variable1, variable2);

system("PAUSE");
return 0;
}
