//insertion in the array
#include<stdio.h>
int main()
{
	int size, i, loc, val;
	printf("Enter the size of array: ");
	scanf("%d", &size);
	
	int arr[size];
	printf("\nEnter the array elements: \n");
	for(i=0; i<size; i++)
	{
		scanf("%d", &arr[i]);
	}
	
	printf("\nArray before insertion:\n");
	for(i=0; i<size; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\nAt which location you want to add element? ");
	scanf("%d", &loc);
	printf("\nEnter the new value to be added: ");
	scanf("%d", &val);
	
	for(i=size-1; i>=loc-1; i--)
	{
		arr[i+1] = arr[i];
	}
	arr[loc-1] = val;
	size = size+1;
	
	printf("\nArray after insertition: \n");
	for(i=0; i<size; i++)
	{
		printf("%d ", arr[i]);
	}
	
	return 0;

}
