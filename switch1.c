#include<stdio.h>
int main()
{
	int a = 20, b = 10;
	switch(a>b && a+b >20)
	{
		case 1:
			printf("\nHello 2021");
			break;
		case 0:
		    printf("\nBye 2021");
		    break;	
		default:
		    printf("\nInvalid");	
	}
	return 0;
}
