//fibonacci series : using recursion
#include<stdio.h>
int main()
{
	int limit;
	printf("Enter the limit of fibonacci series: ");
	scanf("%d", &limit);
	
	printf("\nFibonacci series: \n");
	printf("%d %d ", 0,1);
	
	fibonacci(limit-2); 
	
	return 0;
	
}

void fibonacci(int n) // function declaration & definition
{
	static int n1 = 0, n2 = 1, n3;
	if(n>0)
	{
		n3=n1+n2;
		printf("%d ", n3);
		n1 = n2;
		n2 = n3;
		
		fibonacci(n-1);   //recursive function call
	}
}
