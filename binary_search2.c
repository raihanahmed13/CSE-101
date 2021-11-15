//Binary search using the user input (array must be sorted(ascending))
#include<stdio.h>
int main()
{
	int low, high, mid, size, i, item;
	printf("Enter thr size of the array: ");
	scanf("%d", &size);
	
	int arr[size];
	printf("\nEnter the array elements:\n");
	for(i=0; i<size; i++)
	{
		scanf("%d", &arr[i]);
	}
	printf("\nArray created is:\n");
	for(i=0; i<size; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\nEnter the number for search: ");
	scanf("%d", &item);
	low = 0;
	high = size-1;
	mid = (low+high)/2;
	
	//logic for binary search
	
	while(low<=high)
	{
		if(arr[mid] < item)
		{
			low = mid+1;
		}
		else if(arr[mid] == item)
		{
			printf("\nItem found at index number = %d", mid);
			break;
		}
		else
           high = mid - 1;
	
		mid = (low+high)/2;
		
	}
	if (low>high)
	{
		printf("Not found.");
	}
	return 0;
	
}
