//fibonacci series : without recursion  0 1 1 2 3 5 8 13 21....
#include<stdio.h>
int main()
{
	int n1 = 0, n2 = 1, n3, limit, i;
	printf("Enter the limit of  fibonacci series: ");
	scanf("%d", &limit);
	
	printf("\nFibonacci series of first %d number is: \n", limit);
	printf("%d %d", n1,n2);
	
	for(i=2; i<limit; i++)  //i will start after 2 i.e, 3
	{
		n3=n1+n2;
		printf(" %d", n3);
		n1 = n2;
		n2 = n3;
	}
	
	return 0;
}

