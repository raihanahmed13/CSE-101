//typedef demo
#include<stdio.h>

typedef struct student
{
	char name[20];
	int roll_no;
}stud;

int main()
{
	stud s1;
	printf("Student details:\n");
	printf("Enter name: ");
	scanf("%s", &s1.name);
	
	printf("\nEnter Roll no: ");
	scanf("%d", &s1.roll_no);
	
	printf("\nName of the student is %s and the roll no is %d", s1.name, s1.roll_no);
	
	return 0;
}
