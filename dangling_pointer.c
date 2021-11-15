//DANGLING POINTER 
#include<stdio.h>
int main()
{
	int a = 800;
	int *ptr = &a;  //declaration & initialization
	
	printf("Address of a through pointer = %d", ptr);
	
	free(ptr);   //de-allocating the memory, dangling situation
	            //hence, ptr is a dangling pointer
	printf("\nAddress of a after de-alocation = %d", ptr);
	
	*ptr = NULL;  //solution of daangling situation
	              //solution : make ptr as NULL pointer
	printf("\nAddress of a after proper de-allocation = %d", ptr);
	
	return 0;
				              
}
