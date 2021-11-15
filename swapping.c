//swapping 2 umbers using third variable
#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter the values of a and b: ");
	scanf("%d %d", &a, &b);
	
	printf("\nOriginal values of a= %d and b=%d", a,b);
	
	int temp;
	temp=a;
	a=b;
	b=temp;
	
	printf("\nSwapped values of a=%d and b=%d", a,b);
	return 0;
	
}
