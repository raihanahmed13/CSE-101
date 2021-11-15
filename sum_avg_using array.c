//sum & avg of array elements
#include<stdio.h>
int main()
{
	int n;  //size of array
	printf("Enter the size of array: ");
	scanf("%d", &n);
	
	int num[n];  //array declaration
	int sum = 0, avg = 0, i;
	
	printf("\nEnter the array elements:\n"); // taking input from user
	for(i=0; i<n; i++)
	{
		scanf("%d", &num[i]);
		sum = sum + num[i];  //sum	
	}
	
	printf("\nArray created by you:\n");  //printing the array contents
	
	for(i=0;i<n; i++)
	{
		printf("%d ", num[i]);
	}
	
	avg=sum/n;
	
	printf("\nSum of array= %d", sum);
	printf("\nAverage of Array= %d", avg);
	
	return 0;
}
