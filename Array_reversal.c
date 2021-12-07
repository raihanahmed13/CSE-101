// Array Reversal
#include<stdio.h>
int main()
{
	int n, i;
	printf("Enter the size of the array: ");
	scanf("%d", &n);
	
	int arr[n];
	printf("\nEnter the elements: \n");
	for(i=0; i<n; i++)
	{
		scanf("%d", &arr[i]);   //taking the elements
	}
	
	printf("\nThe array elements are: [");
	for(i=0; i<n; i++)
	{
		printf(" %d ", arr[i]);
	}
	printf("]");
	
	// logic for reversed array
	printf("\nThe reversed array is:  [");
	for(i=n-1; i>=0; i--)
	{
		printf(" %d ", arr[i]);
	}
	printf("]");

    return 0;
}

