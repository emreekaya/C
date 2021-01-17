// Call by value
#include <stdio.h>
#include <stdlib.h>

void f(int p) {
   p=20;
}

int main() {
   int a=10;
   f(a);
   printf("%d \n",a); // Displays 10
   system("pause");
   return 0;
}
