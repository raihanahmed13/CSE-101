// putchar() demo
#include<stdio.h>
int main()
{
	char ch;
	printf("Enter any character: ");
	ch = getchar();
	
	printf("\nCharacter entered by you: ");
	putchar(ch); //display the input
	
	return 0;
	
}
