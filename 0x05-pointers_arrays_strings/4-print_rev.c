#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: input string.
 * Return: void
 */

void print_rev(char *s)
{
	int len;

	for (len = 0; *s != '\0'; ++s)
		++len;
	while (len >= 0)
	{
		_putchar(*s + 0);
		++s;
		len--;
	}
	_putchar('\n');
}
