//simple demo for pointers (&, *)
#include<stdio.h>
int main()
{
	int a = 100; //actual variable
	int *ptr;  // pointer variable of type integer
	
	ptr = &a;   //ptr = address of a
	
	printf("Address of variable a = %p", &a); // traditional way to print address
	
	printf("\nAddress of a stored by ptr = %x", ptr);  // ptr displaying the address of a 
	
	printf("\n\nvalue of a = %d", a); //traditional way to print a
	
	printf(" \nValue of a using pointer = %d", *ptr);
	
	return 0;
	
}
