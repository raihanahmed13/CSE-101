//NULL pointer
#include<stdio.h>
int main()

{
	//int *ptr;   //pointer declaration, wild pointer till initialization is done
	
	int *ptr = NULL; //ptr is not wild now
	
	int x = 90;
	int *ptr2 = &x;   //pointer declartion and initialization
	
	if(ptr2 == NULL)
	  printf("No address of ptr2, i.e. address = %d", ptr2);
	else
	  printf("Value of ptr2 = %d", *ptr2);
	
	return 0;    
}
