//constant pointer demo
#include<stdio.h>
int main()
{
	int a = 900;
	int b = 230;
	
	int const *ptr;
	ptr = &a;  //ptr will point to a only
	
	printf("Value of a = %d", *ptr);
	
	return 0;
}
