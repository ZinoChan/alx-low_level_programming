#include "main.h"

/**
 * rev_string - reverses a string.
 * @s: input string.
 * Return: void
 */

void rev_string(char *s)
{
	int len, i, j;
	char temp;

	for (len = 0; s[len] != '\0'; ++len)
		;

	for (i = 0, j = len - 1; i < j; i++, j--)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
}


