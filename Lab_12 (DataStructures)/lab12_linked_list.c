// Linked list (Stack-like implementation)
#include <stdio.h>
#include <stdlib.h>

struct Node
{
  int  Data;
  struct Node * Next;
};


int main()
{
 int x, smallest;
 struct Node *start, *current, *newnode;
 start = NULL;
 
 while (1)
 {
 	printf("Enter data (-1 to finish) : ");
 	scanf("%d", &x);
 	if (x == -1)break;
    newnode = malloc(sizeof(struct Node));
    newnode->Data = x; 	
    newnode->Next = start; // Add to beginning
    start = newnode;
 }

 //-------------------------------------
 smallest = 99999;
 current = start;
 printf("Nodes in linked list : \n");
 while (current != NULL)
 {
 	printf("%d\n", current->Data);
 	
 	if (current->Data < smallest)
 	   smallest = current->Data;

 	current = current->Next;
 }
 
 printf("\n Smallest = %d \n", smallest);
 system("pause");
 return 0;
}


