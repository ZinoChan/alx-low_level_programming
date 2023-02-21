#include "main.h"

/**
 * print_alphabet - Entry point
 * Description: Prints alpabets
 * Return: void
 */

void print_alphabet(void)
{
	char curr;

	curr = 'a';

	while (curr <= 'z')
	{
		_putchar(curr);
		curr++;
	}

	_putchar('\n');
}

