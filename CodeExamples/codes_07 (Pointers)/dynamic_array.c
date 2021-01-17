// C version of dynamic array allocation.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, i;
    int *a; /* This will be a Pointer to array */

    printf("Enter number of elements : ");
    scanf("%d", &N);

    a = malloc(N * sizeof(int));  /* Dynamically allocate array memory */

    for (i=0; i < N; i++)
         a[i] = (i+1)*10;

    for (i=0; i < N; i++)
        printf("%d.number = %d\n", i+1, a[i]);

    printf("\n");
   system("PAUSE");
   return 0;
}
