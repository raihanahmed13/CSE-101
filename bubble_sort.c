// Bubble sort
#include<stdio.h>
int main()
{
	int size, i, j, temp;
	printf("Enter the size of array: ");
	scanf("%d", &size);
	
	int arr[size];
	printf("\nEnter the array elements:\n");
	for(i=0; i<size; i++)
	{
		scanf("%d", &arr[i]);
	}
	printf("\nArray before sorting: \n");
	for(i=0; i<size; i++)
	{
		printf("%d ", arr[i]);
	}
	
	//logic of bubble sort
	for(i=0; i<size-1; i++)
	{
		for(j=0; j<size-i-1; j++)
		{
			if(arr[j] > arr[j+1])
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
				
			}
		}
	}
	printf("\nArray after sorting: ");
	for(i=0; i<size; i++)
	{
		printf("%d ", arr[i]);
	}
	
	return 0;
}
