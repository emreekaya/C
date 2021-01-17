/* Try: Enter three numbers in first prompt  */

#include <stdio.h>
#include <stdlib.h>
int main()
{
  int s1, s2, s3;

  printf("Enter s1 : ");
  scanf("%d", &s1);
    
  printf("Enter s2 : ");
  scanf("%d", &s2);
  
  printf("Enter s3 : ");
  scanf("%d", &s3);


  printf("\nAverage is : %f\n\n", (s1+s2+s3)/3.0);
  system("PAUSE");
  return 0;
}
