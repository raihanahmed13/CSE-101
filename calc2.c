#include<stdio.h>     //calculator without break
int main()
{
	int num1, num2, choice;  
	
	Again :
	printf("Enter numbers:  ");
	scanf("%d %d", &num1, &num2);
	printf("\nnum1 = %d \t num2= %d", num1, num2);
	
	printf("\nChoose your operation: ");
	printf("\n1:Addition\n2:Subtraction\n3:Divide\n4:Multiply\n5:Modulus\n6:Turn off\n");
	scanf("%d", &choice);
	
	switch(choice)
	{
		case 1:
			printf("Addition of the given numbers= %d\n",num1+num2);
			
			goto Again;
		case 2:
			printf("Subtraction of the given numbers= %d\n",num1-num2);
			
			goto Again;
		case 3:
			printf("Divide of the given numbers= %d\n",num1/num2);
			
			goto Again;
		case 4:
			printf("Multiplication of the given numbers= %d\n",num1*num2);
			
			goto Again;
		case 5:
			printf("Reaminder after division of the given numbers= %d\n",num1%num2);
			
			goto Again;
		case 6:
		printf("See You next time");
			goto off;
		default:
			printf("Wrong choice\n");
			
			goto Again;				
	}
	off :
		printf("OFF");
	return 0;
	
 } 
