//math library functions
#include<stdio.h>
#include<math.h>
int main()
{
	float a = 6.8, b = 2.2, c = 1.0, d = -100.23, e= 565.55;
	int x = 22, y = 300;
	
	printf("Ceil value of a = %f", ceil(a));
	printf("\nCeil value of b = %f", ceil(b));
	printf("\nCeil value of c = %f", ceil(c));
	
	printf("\nFloor value of a = %.1f", floor(a));
	printf("\nFloor value of x = %.1f", floor(b));
	
	printf("\nAbsolute value of x = %d", abs(x));
	printf("\nAbsolute value of d = %.2f", fabs(d)); //fabs for float value
	
	printf("\nLog value of b = %f", log(b)); // exponential log (ln)
	printf("\nBase 10 value of b = %f", log10(b)); // base 10 log 
	
	printf("\nSquare root of y = %.2f and e = %.2f", sqrt(y), sqrt(e)); 
	
	printf("\nx^b = %f", pow(x,b)); 
	
	printf("\nRound of value of a = %.1f, b = %.1f, d = %.1f", round(a), round(b), round(d));

	return 0;
}

