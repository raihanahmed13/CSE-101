//Multiplication table using array
#include<stdio.h>
int main()
{
    int mul[10], i, n;
    printf("Enter the number whose table you want: ");
    scanf("%d", &n);

    for(i=0; i<10; i++)
    {
        mul[i]= n*(i+1);
    }
    printf("\nMultiplication table of %d:", n);

    for(i=0; i<10; i++)
    {
        printf("\n%d x %d = %d",n, i+1, mul[i]);
        
    }

    return 0;
}
