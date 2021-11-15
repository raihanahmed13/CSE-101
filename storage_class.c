//storage class demo
#include<stdio.h>
int ext;   //global or extern variable
int main()
{
	int a; //default storage class: auto
	auto char ch;
	float f; //default storage class: auto
	static int x = 10, y;
	{
		static int z = 200;  //block variable (only inside this block)
	}
	
	printf("----------AUTOMATIC STORAGE CLASS-----------\n");
	printf("a = %d, ch = %c, f = %.2f", a, ch, f);
	
	printf("\n----------STATIC STORAGE CLASS-------\n");
	printf("x = %d, y = %d", x,y);
	
	printf("\n----------REGISTER STORAGE CLASS--------\n");
	register int r;
	printf("r = %d", r);
	//printf("Address of register variable r = %d", &r);  //compile time error
	
	printf("\n--------EXTERN OR GLOBAL STORAGE CLASS-------\n");
	printf("ext = %d", ext);
	
	
	
	return 0;
}
