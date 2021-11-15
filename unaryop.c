#include<stdio.h>
int main()
{
	int x,y,z;
	x = 3;
	y = 4;
	
	z = ++x * y++;
	printf("The value of z is %d\n", z);
	printf("y=%d\n",y);
	printf("x=%d",x);
	
	return 0;
	
	
}
