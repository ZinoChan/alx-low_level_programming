#include "main.h"

/**
 * times_table - Entry point
 * Description: prints the 9 times table, starting with 0
 * Return: times table
 */

void times_table(void)
{
	int i, j, res;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			res = i * j;
			if (res < 10)
			{
				_putchar(32);
				_putchar(res + '0');
			}
			else
			{
				_putchar((res / 10) + '0');
				_putchar((res % 10) + '0');
			}
			if (j < 9)
			{
				_putchar(44);
				_putchar(32);
			}
		}
		_putchar('\n');
	}
}
