#include "main.h"

/**
 * rev_string - reverses a string.
 * @s: input string.
 * Return: void
 */

void rev_string(char *s)
{
	char *end = s;

	while (*end)
		end++;
	end--;
	while (s < end)
	{
		char tmp = *s;
		*s = *end;
		*end = tmp;
		s++;
		end--;
	}

}


