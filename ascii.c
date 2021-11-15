//ASCII value of a character
#include<stdio.h>
void main()
{
	char ch;
	printf("Enter the chracter of your choice:");
	scanf("%c", &ch);
	
	printf("ASCII value of our character is: %d", ch);
	//using %d format specifier to convert 'char'-- 'int'
	
	printf("\nASCII value of %c is: %d", ch,ch);
	
}
