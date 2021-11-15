//getch() & putch()
#include<stdio.h>
#include<conio.h>
int main()
{
	char ch;
	printf("Press any key to exit..\n");
	ch = getch();
	
	printf("\You have entered the below key for exit\n");
	putch(ch);  //display the entered key
	
	return 0;
	
}
