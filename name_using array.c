//Display your name using array
#include<stdio.h>
int main()
{
	char name[]= "Raihan Ahmed";
	printf("My name is: %s", name);
	
	char city[50];
	printf("\nEnter your city: ");
	scanf("%s", city);
	
	printf("\nYou belong to %s", city);
	
	return 0;
}
