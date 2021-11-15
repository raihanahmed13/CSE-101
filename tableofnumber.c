//print the table for a number
#include<stdio.h>
int main()
{
	int n,i;
	printf("Enter the number whose table you want to print: ");
	scanf("%d",&n);
	
	printf("\nTable of %d is give below: \n",n);
	
	for(i=1; i<=10; i++)
	{
		printf("%d * %d = %d\n", n, i,(n*i));
	}
	return 0;
	
}
