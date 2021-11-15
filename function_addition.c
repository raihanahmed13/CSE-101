// calculating sum using functions
#include<stdio.h>
int main()
{
	int num1,num2;
	
	printf("Enter num1: ");
	scanf("%d",&num1);
	
	printf("Enter num2: ");
	scanf("%d", &num2);
	
	int result = addition(num1, num2);  //function calling
	printf("\nSum of num1 and num2 = %d", result);
	return 0;
}

// declare (prototype) and define function

int addition(int num1, int num2) //or int addition(int a, int b)

{
	int add = num1 + num2;
	return add;
	
}
