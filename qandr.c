#include<stdio.h>
void main()
{
	int num1, num2;
	printf("First number ");
	scanf("%d",&num1);
	
	printf("Second number ");
	scanf("%d",&num2);
	
	int q=num1/num2;
	int r=num1%num2;
	
	printf("Quotient is %d", q);
	printf("\nRemainder is %d", r);
	
}
