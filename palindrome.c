//palindrome number: original== reversed
#include <stdio.h>
int main()
{
	int num, n, rev;
	printf("Original number: ");
	scanf("%d", &n);
	num=n;
	
	while( n != 0) //!= (not equal)
	{
		rev = (rev*10) + (n%10);
		n = n/10;
	}
	printf("\nReversed number = %d", rev);
	if(num == rev)
	{
		printf("\n%d is Palindrome", num);
	}
	else
	{
		printf("\n%d is not Palindrome", num);
	}
	
	return 0;
}
