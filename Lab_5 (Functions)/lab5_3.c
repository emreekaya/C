#include <stdio.h>

float Aritmetik(float x, float y, char sym)
{
    float result;

    if (sym == '*')
       result = x*y;

    if (sym == '^')
       result = pow(x,y);

    return result;
}

int main()
{
  float num1, num2;
  printf("Enter two numbers : ");
  scanf("%f %f", &num1, &num2);

  printf("Result of multiplication : %f \n", Aritmetik(num1, num2, '*') );
  printf("Result of exponention : %f \n",    Aritmetik(num1, num2, '^') );
}  


