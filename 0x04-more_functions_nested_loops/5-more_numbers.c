#include "main.h"

/**
 * more_numbers - prints numbers between 0 to 14
 * 10 times.
 * Return: void
 */

void more_numbers(void)
{
	int i;

	i = 0;

	while (i < 10)
	{
		for (int c = 0; c <= 14; c++)
		{
			if (c >= 10)
				_putchar((c / 10) + 48);
			_putchar((c % 10) + 48);
		}
		_putchar('\n');
		i++;
	}
}
