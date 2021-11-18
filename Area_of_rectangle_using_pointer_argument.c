//Area of a rectangle using pointer as argument
#include<stdio.h>
void area(int *x, int *y);
int main()
{
	int length, breadth;
	
	printf("Length of the rectangle = ");
	scanf("%d",&length);
	
	printf("Breadth of the rectangle = ");
	scanf("%d",&breadth);
	
	area(&length,&breadth);
	
    return 0;
}
void area(int *x, int *y)
{
printf("\nArea of the rectangle = %d", (*x) * (*y));
	
}


