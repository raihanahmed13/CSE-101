#include<stdio.h>
int main()
{
	int num1, num2, choice;
	printf("Enter numbers:  ");
	scanf("%d %d", &num1, &num2);
	printf("\nnum1 = %d \t num2= %d", num1, num2);
	
	printf("\nChoose your operation: ");
	printf("\n1:Addition\n2:Subtraction\n3:Divide\n4:Multiply\n5:Modulus\n");
	scanf("%d", &choice);
	
	switch(choice)
	{
		case 1:
			printf("Addition of the given numbers= %d",num1+num2);
			break;
		case 2:
			printf("Subtraction of the given numbers= %d",num1-num2);
			break;
		case 3:
			printf("Divide of the given numbers= %d",num1/num2);
			break;
		case 4:
			printf("Multiplication of the given numbers= %d",num1*num2);
			break;
		case 5:
			printf("Reaminder after division of the given numbers= %d",num1%num2);
			break;
		default:
			printf("Wrong choice");
			break;				
	}
	return 0;
	
 } 
