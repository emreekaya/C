#include <stdio.h>
#include <stdlib.h>
int main()
{
  int i=20;
  
  
  for (  ;  ; )
  {
       printf("%d \n", i);
       i -= 5;
       
       if (i>= 1) 
           continue;
      // else
        //   break;    
  }     
       
  system("pause");
  return 0;
}
