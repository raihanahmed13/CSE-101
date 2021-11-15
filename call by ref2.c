#include<stdio.h>
int increase(int *num);

int main()
{
	int a;
	printf("Enter the number: ");
	scanf("%d", &a);
	printf("\nOriginal is %d", a);
	
	printf("\nIncreased value is %d", increase(&a));
	return 0;
}

int increase(int *num)
{
	*num = *num+1;
	return *num;

}
