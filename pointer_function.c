//pointer function demo
#include<stdio.h>
int addition(int, int);  //function declaration
int main()
{
	int x,y;
	int sum;
	
	printf("Enter x and y:");
	scanf("%d %d", &x, &y);
	
	int (*ptr)(int, int);
	
	ptr = addition; //funtion calling
	sum = (*ptr)(x,y);
	
	printf("\nSum of x and y = %d", sum);
	
	return 0;
	
}

int addition(int a, int b)
{
	int c = a+b;
	return c;
}
