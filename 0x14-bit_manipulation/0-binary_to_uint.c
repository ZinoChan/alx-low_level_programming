#include "main.h"

/**
 * binary_to_uint - converts binary to int
 * @b: pointer to str of 0 and 1 chars
 * Return: converted number or NULL
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int bango = 0;
	int hajimeru = 0;

	if (b == NULL)
		return (0);

	while (b[hajimeru] != '\0')
	{
		if (b[hajimeru] == '0')
			bango = bango * 2;
		else if (b[hajimeru] == '1')
			bango = bango * 2 + 1;
		else
			return (0);
		hajimeru++;
	}

	return (bango);
}
