//WILD pointer
#include<stdio.h>
int main()
{
	float x = 56.890;
	float *xptr;    //pointer declaration
	
	xptr = &x;   //now xptr is not wild
	*xptr = 565.890;
	
	printf("Updated value of x = %f", *xptr);
	
	return 0;
}
