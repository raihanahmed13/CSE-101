#include<stdio.h>
int main()
{
	int num;
	printf("Enter the number: ");
	scanf("%d", &num);
	
	even_odd(num);
	
	
}

void even_odd(int x)
{
	if(x%2 == 0)
	   printf("\nEVEN");
	else
	 printf("\nODD");   
	
}
