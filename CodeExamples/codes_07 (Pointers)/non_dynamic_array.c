#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, i;
    printf("Enter number of elements : ");
    scanf("%d", &N);
    int a[N];  

    for (i=0; i < N; i++)
         a[i] = (i+1)*10;

    for (i=0; i < N; i++)
        printf("%d.number = %d\n", i+1, a[i]);

    printf("\n");
    system("PAUSE");
    return 0;
}
