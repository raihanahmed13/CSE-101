//bitwise operators
#include<stdio.h>
int main()
{
	int a=5, b=9; //a=00000101   b=00001001
	
	printf("a&b = %d\n", (a&b)); // 00000001 = 1
	printf("a|b = %d\n", (a|b)); // 00001101 = 13
	printf("a^b = %d\n", (a^b)); //00001100 = 12
	printf("~a = %d\n", (~a));   // compliment of 0101=1010=-6  adding 1 and putting -ve 
	printf("a<<1 = %d\n", (a<<1)); //00001010=10
	printf("b>>1 = %d\n", (b>>1)); //00000100=4
	
	return 0;
	
}
