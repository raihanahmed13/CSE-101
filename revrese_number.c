//reverse a number using while loop
#include <stdio.h>
int main()
{
	int num, rev;
	printf("Enter the number: ");
	scanf("%d", &num);
	
	while( num != 0) //!= (not equal)
	{
		rev = (rev*10) + (num%10);
		num = num/10;
	}
	printf("\nReversed number = %d", rev);
	
	return 0;
}
