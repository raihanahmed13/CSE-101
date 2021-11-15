//call by value demo of swapping two numbers (no swapping happens)
#include<stdio.h>
void swapping(int a, int b) //function declaration
{
	int temp;
	temp = a;
	a = b;
	b = temp;
	printf("\nValues of a and b = %d and %d",a,b);
}


int main()
{
	int num1, num2;
	printf("Enter two numbers: ");
	scanf("%d %d", &num1, &num2);
	
	printf("\nBefore swapping, num1 = %d and num2 = %d", num1 , num2);
	
	swapping(num1, num2); // function call by value
	printf("\nAfter swapping, num1 = %d and num2 = %d", num1, num2);
}
 
