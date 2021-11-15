//right angled numbers using nested loop
#include<stdio.h>
int main()
{
	int rows;
	printf("Enter the numbers of rows: ");
	scanf("%d", &rows);
	int i,j;
	for(i=1; i<=rows; i++)
	{
		for(j=1; j<=i; j++)
		{
			printf("%d",i); //i for getting same number in row and j for column
		}
		printf("\n");
	}
	return 0;
}
