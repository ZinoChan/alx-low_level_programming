#include "main.h"

/**
 * print_most_numbers - prints numbers between 0 to 9.
 * Return: void
 */

void print_most_numbers(void)
{
	int ch;

	for (ch = 0; ch < 10; ch++)
	{
		if (ch == 2 || ch == 4)
			continue;
		else
			_putchar(ch + '0');
	}
	_putchar('\n');
}
