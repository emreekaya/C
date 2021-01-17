/* Try: Hit ENTER key after inputing each number */

#include <stdio.h>
#include <stdlib.h>
int main()
{
  int s1, s2, s3;

  printf("Enter s1  s2  s3 : ");
  scanf("%d%d%d", &s1, &s2, &s3);
    
  printf("\nAverage is : %f\n\n", (s1+s2+s3)/3.0);
  system("PAUSE");
  return 0;
}
