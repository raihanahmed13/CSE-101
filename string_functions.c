//string functions
#include<stdio.h>
#include<string.h>
int main()
{
	char a[] = {"CSE101 C Programming"};
	char b[] = {"LPU "};
	char c[] = {"lpu"};
	char d[] = {"Phagwara"};
	char e[] = {"PhagWara Punjab"};
	
	printf("Length of a = %d", strlen(a));  // total no. of characters = 20
	printf("\nSize of a = %d", sizeof(a)); // total allocated size assigned to array=21
	
	printf("\nComparison of b and c:\n");
	int result = strcmp(b,c);
	printf("Result of comparison = %d", result);
	if (result == 0)
	    printf("\nArray b and c are equal!");
	else
	  printf("\nArray b and c are different!");    
	  
	printf("\nSTRNCMP()\n");
	int res = strncmp(d, e, 5);  // first 5 characters will be compared
	printf("res = %d", res);
	if (res == 0)
	   printf("\nArray d and e are equal");
	else
	   printf("\nArray d and e are different");    
	
	// string concatenation
	strcat(b,d);
	printf("\nConcatenetd string is = %s", b);  //d is combined with b and stored in b   
	
	//string copy
	printf("\nString b before copy = %s", b);
	strcpy(b,a);
	printf("\nString b after copy = %s", b); // content of a copied to b
	
	//strncpy
	printf("\nString d before copy = %s", d); 
	strncpy(d, e, 12);
	printf("\nString d after copy = %s", d); // 12 character got copied to d from e
	
	//string reverse
	printf("\nString c before reverse = %s", c);
	strrev(c);
	printf("\nString c after reverse = %s",c);
	

	
	return 0; 
	
}
