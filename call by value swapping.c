// call by reference: swapping(values get interchanged)
#include<stdio.h>
int main()
{
	int num1, num2;
	printf("Enter two numbers: ");
	scanf("%d %d", &num1, &num2);
	
	printf("\nBefore swapping, num1 = %d and num2 = %d", num1 , num2);
	
	swapping(&num1, &num2);
	printf("\nAfter swapping, num1 = %d and num2 = %d", num1, num2);
	return 0;
}

void swapping(int *a, int *b) //function declaration
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;

}
