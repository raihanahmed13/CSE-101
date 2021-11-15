// cube of a number using function
#include<stdio.h>
int main()
{
	int A;
	printf("Enter the number: ");
	scanf("%d", &A);
	
	//int answer = CUBE(A);
	printf("\nCube of the given number is %d",CUBE(A));
	
	return 0;
}

int CUBE(int x)
{
	int CUBE = x*x*x;
	return CUBE;
}

