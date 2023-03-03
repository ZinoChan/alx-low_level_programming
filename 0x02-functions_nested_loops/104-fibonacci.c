#include <stdio.h>
/**
 * main - finds and prints the first 98 Fibonacci numbers,
 * starting with 1 and 2
 * followed by a new line
 * Return: 0
 */
int main(void)
{
	unsigned long int fib1, fib2, fib, x, y;
	unsigned long int carry1, carry2;
	int i;

	fib1 = 1;
	fib2 = 2;
	x = 0;
	y = 0;

	printf("%lu, %lu, ", fib1, fib2);

	for (i = 2; i < 98; i++)
	{
		if(fib1 + fib2 > 10000000000 || x > 0 || y > 0)
		{
			carry1 = (fib1 + fib2) / 10000000000;
			fib = (fib1 + fib2) % 10000000000;
			carry2 = x + y + carry1;
			x = y;
			y = carry2;
			fib1 = fib2;
			fib2 = fib;
			printf("%lu%010lu", y, fib2);
		}
		else
		{
			fib = fib1 + fib2;
			fib1 = fib2;
			fib2 = fib;
			printf("%lu", fib2);
		}
		if(i != 97)
			printf(" ,");
	}
	printf("\n");
	return(0);
}
