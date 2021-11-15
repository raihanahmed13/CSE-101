//even and odd using array
#include<stdio.h>
int main()
{
	int size, even=0, odd=0, i;
	printf("Enter the size of array: ");
	scanf("%d", &size);  // Taking size of array
	
	int arr[size];  // array declared
	printf("\nEnter the elements:\n");  
	for(i=0; i<size; i++)
	{
	 scanf("%d", &arr[i]);  // Taking numbers
	}
	
	for(i=0; i<size; i++)   //Logic for even and odd 
	{
		if(arr[i]%2==0)
		  even = even+1;
		else
		 odd = odd+1;  	
	}
	printf("\nNumber of even array elements: %d", even);  //printing no. of even array elements
	printf("\nNumber of odd array elements: %d\n",odd);    //printing no. of odd array elements
	
	printf("\nThe Even numbers: ");
	for(i=0; i<size; i++)
	{
	  if(arr[i]%2==0)
	    printf("%d ", arr[i]);	    // Printing the even numbers
	}
	
	printf("\nThe Odd numbers: ");
	for(i=0; i<size; i++)
	{
	  if(arr[i]%2!=0)
	    printf("%d ", arr[i]);	    // Printing the odd numbers
	}
	
	return 0;
}
