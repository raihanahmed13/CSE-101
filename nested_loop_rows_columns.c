//right angled triangle using nested loop
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
			printf("%c", i+64);
		}
		printf("\n");
	}
	return 0;
}
