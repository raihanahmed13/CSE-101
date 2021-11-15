// half diamond shape
#include<stdio.h>
int main()
{
	int rows, i, j;
	printf("Enter the number ofrows: ");
	scanf("%d", &rows);
	
	for(i=1; i<=rows; i++)
	{
		for(j=1; j<=i; j++)
		{
			printf("%d", j);
		}
		printf("\n");
	}
	
	for(i=rows-1; i>=1; i--)
	{
		for(j=1; j<=i; j++)
		{
			printf("%d", j);
		}
		printf("\n");
	}
	return 0;
}

