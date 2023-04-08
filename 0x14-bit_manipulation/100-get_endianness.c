#include "main.h"

/**
 * get_endianness - checks endanness
 * Return: 0 if big 1 if petit
 */

int get_endianness(void)
{
	int ans = 1;

	ans = *(char *)(&ans) == 1;
	return (ans);
}
