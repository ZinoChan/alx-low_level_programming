#include "main.h"

/**
 * print_binary - prints binary of number
 * @n: number to convert
 * Return: binary of a number
*/

void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	if (n < 1)
		return;
	print_binary(n >> 1);
	_putchar((n & 1) ? '1' : '0');
}
