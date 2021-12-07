//Sum of squares and cubes of array element using pointers
#include<stdio.h>
int main()
{
	int  arr[5] = {2,5,9,10,12}, i, square = 0, sum1 = 0, cube = 0, sum2 = 0;
	

	int *ptr = arr;
	
	for (i=0; i<5; i++)
	{
		square = (*ptr) * (*ptr);
		cube = (*ptr) * (*ptr) * (*ptr);
		printf("\nThe square of element at arr[%d] = %d", i,square);
		printf("\nThe cube of element at arr[%d] = %d", i,cube);
		sum1 = sum1 + square;
		sum2 = sum2 + cube;
		ptr = ptr + 1;
	}
	
	printf("\nThe sum of squares of elements of the array : %d", sum1);
	printf("\nThe sum of cubes of elements of the array : %d", sum2);

    return 0;
}

