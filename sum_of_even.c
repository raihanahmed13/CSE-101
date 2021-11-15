//sum of all even numbers from 1-n
#include<stdio.h>
int main()
{
	int n, sum=0, i;
	printf("n= ");
	scanf("%d", &n);
	
	for(i=2; i<=n; i=i+2)
	{
		sum = sum+i;
	}
	printf("\nSum of even numbers from 1 to %d = %d", n, sum);
	return 0;
}
