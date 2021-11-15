// max & min element from the array
#include<stdio.h>
int main()
{
    int i, max, min, size;
	printf("Enter the size of array: ");
	scanf("%d", &size);
	
	int arr[size];
	
	printf("\nEnter the array elements:\n");
	for(i=0; i<size; i++)
	{
		scanf("%d", &arr[i]);
	}
	
	max = arr[0];
	min = arr[0];
	
	for(i=1; i<size; i++)  // logic for max and min
	{
		if(arr[i] > max)
		 max = arr[i];
		 
		if(arr[i] < min)
		  min = arr[i];
	}
	
	printf("\nMaximum element = %d", max);
	printf("\nMinimum element = %d", min);
	
	return 0;
}
