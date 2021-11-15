//call by reference: address of actual parameters passed during calling
#include<stdio.h>
int increase(int num); //declaration
int main()
{
	int a = 90;
	printf("\nOriginal value of a = %d", a);
	
	int result=  increase(a);
	printf("\nIncreased value of a is %d", result);
	return 0;
}

int increase(int num)
{
	num = num+1;
	return num;
}
