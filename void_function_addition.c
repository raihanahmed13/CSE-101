//sum using void function, void doesnot have any retun type
#include<stdio.h>

void addition(int a, int b)  //function prototype
{
	int sum = a+b;
	printf("\nSum = %d", sum);
}

int main()
{
	int val1, val2;
	printf("Enter the values of 2 numbers: ");
	scanf("%d %d", &val1,&val2);
	
	addition(val1, val2);  //function call
}
