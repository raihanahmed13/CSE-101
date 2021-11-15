//getchar()demo
#include<stdio.h>
int main()
{
	char x;
	printf("Enter your gender: ");
	x= getchar(); // reads one character at a time
	
	printf("\nYour gender is %c", x);
	return 0;
	
}
