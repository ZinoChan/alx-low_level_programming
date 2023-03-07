#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: first string.
 * @s2: second string.
 * Return: 0 if s1 and s2 are equals,
 * another number if not.
 */

int _strcmp(char *s1, char *s2)
{
	int i, c;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		c = (*s1 + 0) - (*s2 + 0);
	}
	return (c);
}
