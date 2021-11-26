//copying elements of one array to another using pointer to array
#include<stdio.h>
int main()
{
	int arr1[5] = {5,8,12,15,20}, arr2[5], i, j;
	int *ptr = arr1;
	
	for(i=0; i<5; i++)
	{
		arr2[i] = *ptr;
		printf("arr2[%d] = %d\n",i ,arr2[i]);
		ptr++;
	
	}
    return 0;
}

