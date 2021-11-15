//VOID pointer demo
#include<stdio.h>
int main()
{
	int x = 56;
	float y = 7.90;
	
	void *ptr;  //void pointer: points to any datatype
	printf("size of void *ptr = %d\n", sizeof(ptr));
	
	ptr = &x; //void -- integer
	
	//typecasting needed, i.e. void converted to int
	printf("Integer value using void pointer = %d", *(int*)ptr);  
	
	ptr = &y; //void -- float
	
	//typecasting needed, i.e. void converted to float
	printf("\nFloat value using void pointer = %f", *(float*)ptr);
	
	return 0;
	
	
	
}
