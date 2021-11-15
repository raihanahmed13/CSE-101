//swapping 2 numbers without using third variable
#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter the values of a and b: ");
	scanf("%d %d", &a, &b);
	
	printf("\nOriginal values of a= %d and b=%d", a,b);
	
	// a=10 b=20
	a = a+b; //10+20=30
	b = a-b; //30-20=10
	a = a-b; //30-10=20
	
	printf("\nSwapped values of a=%d and b=%d", a,b);
	return 0;
	
}
