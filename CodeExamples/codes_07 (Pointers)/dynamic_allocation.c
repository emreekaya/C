#include <stdio.h>
#include <stdlib.h>

int main()
{
 int * Ptr;  // Ptr is null at this moment.

 Ptr = malloc(sizeof(int)); //Dynamically allocate an integer
                                            //in memory and assign its address to Ptr

 *Ptr = 6; // Assign 6 the place which is pointed by Ptr

 printf("Initial Content:\n");
 printf("*Ptr = %d \n", *Ptr); // Display content of pointed place
 printf("Ptr = %p  \n", Ptr);  // Display address of pointed place
 printf("&Ptr = %p \n", &Ptr);  // Display address of pointer

 *Ptr = *Ptr + 3; // Increment content of pointed place

 printf("\nContent after increment:\n");
 printf("*Ptr = %d \n", *Ptr);
 printf("Ptr = %p  \n", Ptr);
 printf("&Ptr = %p \n", &Ptr);  // Display address of pointer

 system("pause");
 return 0;
}
