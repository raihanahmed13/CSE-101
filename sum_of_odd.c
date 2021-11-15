//sum of all odd numbers from 1-n
#include<stdio.h>
int main()
{
	int n, sum=0, i;
	printf("n= ");
	scanf("%d", &n);
	
	for(i=1; i<=n; i=i+2)
	{
		sum = sum+i;
	}
	printf("\nSum of odd numbers from 1 to %d = %d", n, sum);
	return 0;
}
