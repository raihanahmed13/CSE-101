// gets() and puts()
#include<stdio.h>
#include<conio.h>
int main()
{
	char arr[5]; // arr can have only 5 characters
	printf("Enter your name: ");
	gets(arr);
	
	//printf("\nMy name is %s", arr);
	
	printf("\nMy name is ");
	puts(arr);
	
	return 0;
	
}
