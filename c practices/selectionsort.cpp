#include <stdio.h>

#define MAX 50

void selectionsort(int arr[],int size)
{
	int i,j;
	int minimumindex;
	for(i = 0;i < size;i++)
	{
		minimumindex = i;
		for (j =i +1;j < size;j++){
			if(arr[j] < arr[minimumindex]){
				minimumindex = j;
			}
		}
		int temp = arr[i];
		arr[i] = arr[minimumindex];
		arr[minimumindex] = temp;
	}
}

int main()
{
	int i;
	int array[MAX],size;
	
	printf("Kac elemanli:");
	scanf("%d",&size);
	
	
	
	for(i = 0;i < size ; i++){
		scanf ("%d",&array[i]);
	
	}
	
	selectionsort(array,size);
	
	for(i=0;i < size;i++)
	{
		printf("%d ",array[i]);
	}
	
	
	return 0;
}
