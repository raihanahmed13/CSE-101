//demo array
#include<stdio.h>
int main()
{
	int arr[3];
	//1st way of array initialization
	arr[0]=20;
	arr[1]=45;
	arr[2]=1;
	
	printf("Array contents are: %d, %d, %d ", arr[0], arr[1], arr[2]); 
	
	//2nd way of array initialization
	
	int xyz[4] = {1,90,56,34};
	int i;
	printf("\n2nd array contents are: ");
	for(i=0;i<4;i++)
	{
		printf("%d,", xyz[i]);
	}
	
	return 0;
	
}
