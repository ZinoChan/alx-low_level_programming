#include <stdio.h>

/**
 * main - Entry point
 * Return: 0
 */

int main(void)
{
	int i;
	long int t1, t2, f;

	t1 = 1;
	t2 = 2;
	printf("%ld, %ld, ",  t1, t2);

	for (i = 2; i < 50; i++)
	{
		f = t2 + t1;
		if (i < 49)
			printf("%ld, ", f);
		else
			printf("%ld\n", f);
		t1 = t2;
		t2 = f;
	}
	return (0);
}
