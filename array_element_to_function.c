//passing individual array element
#include<stdio.h>
int main()
{
	int cgpa[] = {6, 8, 5, 7};
	
	printf("CGPA of 2nd and 4th student is: ");
	show_cgpa(cgpa[1], cgpa[3]);   //function call
	
	return 0;
	
}

void show_cgpa(int stu2, int stu4)
{
	printf("%d,",stu2);
	printf(" %d", stu4);
}
