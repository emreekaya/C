#include <stdio.h>
#include <stdlib.h>

int main()
{
  int s1, s2, s3, enkucuk;

  printf("Enter three numbers :");   
  scanf("%d %d %d", &s1, &s2, &s3);


  enkucuk = s1;   // initially assume that s1 is the smallest.

  if (s2 < enkucuk)
      enkucuk =s2;

  if (s3 < enkucuk ) 
     enkucuk =s3;

  printf("The smallest number = %d\n", enkucuk);

  system("pause");
  return 0;
}
