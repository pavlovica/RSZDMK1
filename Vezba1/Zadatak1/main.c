#include <stdio.h>

int main()
{
	Calculation(3, 8);

	return 0;
	
}

int Calculation (int a, int b)
{
	if (a > b)
		return a - b;
	else
		return b - a;
}