//using array name a pointer
#include<stdio.h>
int main()
{
	int arr[] = {34,89,56,70,1};
	int i, sum = 0;
	
	for (i=0; i<5; i++)
	{
		sum = sum + *(arr + i);   //array as a pointer
		
	}
	
	printf("Sum of array = %d", sum);
	
	float avg =  sum/(float)5;
	printf("\nAverage of array = %.3f", avg);
	
	


    return 0;
}

