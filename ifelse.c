// simple demo of conditional statements
#include<stdio.h>
int main()
{
	int age;
	printf("Enter your age\n");
	scanf("%d", &age);
	
	if(age >= 18)
	{
		printf("Allowed to vote\n");
	}
	
	else
	{
		printf("Cannot vote");
	}
	
	return 0;
}

