//sum of first n numners
#include<stdio.h>
int main()
{
	int n;
	printf("Enter the value of n: ");
	scanf("%d", &n);
	
	int i, sum=0;
	for(i=1; i<=n; i++)
	{
		printf("%d ",i);
		sum=sum+i;
	}
	printf("\nThe sum of %d numbers: %d", n,sum);
	return 0;
	
	
}
