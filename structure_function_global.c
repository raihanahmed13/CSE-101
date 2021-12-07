//passing global structure to function
#include<stdio.h>
struct student
{
	int reg_no;
	float cgpa;
};
struct student s1;  //s1 is global, i.e available throughout the code

void student_info();  //function declaration

int main()
{
	
	s1.reg_no = 12007836;
	s1.cgpa = 8.34;
	
	student_info();  //function calling accepting structure variable s1
	return 0;
}

void student_info() //function definition
{
	printf("My reg no is %d and CGPA is %.2f", s1.reg_no, s1.cgpa);
	
}
