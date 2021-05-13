#include <stdio.h>

int main()
{
	int a = 3;
	int b = 8;
	int c;
	
	if(a > b)
		c = a - b;
	else
		c = b - a;
		
	
	PrintResult(c);

	return 0;
	
}

void PrintResult (int res)
{
	printf("Result: %d\n", res);
}