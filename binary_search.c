//Binary search in the array
#include<stdio.h>
int main()
{
	int arr[] = {1, 6, 9, 45, 230}; // values sgould be in ascending order
	int item = 45;
	int low = 0;   // starting index
	int high = 4; // last index
	
	int mid = (low+high)/2;
	
	while(low<=high)
	{
		if(arr[mid] < item)
		{
			low = mid+1;
		}
		else if(arr[mid] == item)
		{
			printf("item present at index = %d", mid);
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
