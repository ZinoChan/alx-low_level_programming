#include "main.h"

/**
 * binary_to_uint - converts binary to int
 * @b: pointer to str of 0 and 1 chars
 * Return: converted number or NULL
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int bango = 0;
	int hajimeru = 0, l = 0;

	if (b == NULL)
		return (0);

	while (b[l])
		l++;

	while (l--)
	{
		if (b[l] == '1')
			bango += (1 << hajimeru);
		else if (b[l] != '0')
			return (0);
		hajimeru++;
	}

	return (bango);
}
