//passing structure to function by reference
#include<stdio.h>
struct student
{
	int reg_no;
	float cgpa;
};

void student_info(struct student *s1);  //function declaration

int main()
{
	struct student s1;  //s1 is local to main function
	s1.reg_no = 12007836;
	s1.cgpa = 8.34;
	
	student_info(&s1);  //function calling accepting structure variable s1
	return 0;
}

void student_info(struct student *s1) //function definition
{
	printf("My reg no is %d and CGPA is %.2f", s1->reg_no, s1->cgpa);
	
}
