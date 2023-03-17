#include "main.h"
#include <stdlib.h>
#include <stdio.h>

int is_num(char *str);
void multiply(char *num1, char *num2);
/**
 * str_len - Finds the length of a string.
 * @str: The string to be measured.
 *
 * Return: The length of the string.
 */

int str_len(char *str)
{
	int len;

	for (len = 0; str[len] != '\0'; len++)
		;
	return (len);
}


/**
 * main - Multiplies two positive numbers.
 * @argv: The number of arguments passed to the program.
 * @argc: An array of pointers to the arguments.
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	char *num1, *num2;

	if (argc != 3 || !is_num(argv[1]) || !is_num(argv[2]))
	{
		printf("Error\n");
		exit(98);
	}

	num1 = argv[1];
	num2 = argv[2];

	if (*num1 == '0' || *num2 == '0')
		printf("0\n");
	else
		multiply(num1, num2);
	return (0);

}

/**
 * multiply - multiplies two numbers and displays the result
 * @num1: first number
 * @num2: second number
 */
void multiply(char *num1, char *num2)
{
	int len1, len2, i, j, res, *result;

	len1 = str_len(num1);
	len2 = str_len(num2);

	result = calloc(len1 + len2, sizeof(int));

	for (i = len1 - 1; i >= 0; i--)
	{
		for (j = len2 - 1; j >= 0; j--)
		{
			res = (num1[i] - '0') * (num2[j] - '0');
			result[i + j + 1] += res % 10;
			result[i + j] += res / 10;
		}
	}

	for (i = len1 + len2 - 1; i > 0; i--)
	{
		if (result[i] > 9)
		{
			result[i - 1] += result[i] / 10;
			result[i] %= 10;
		}
	}

	for (i = 0; i < len1 + len2; i++)
	{
		if (result[i] != 0)
			break;
	}

	for (; i < len1 + len2; i++)
		printf("%d", result[i]);
	printf("\n");

	free(result);

}

/**
 * is_num - determines if a string has only numeric characters
 * @str: the input string
 * Return: 1 if the string is numeric, 0 otherwise
 */

int is_num(char *str)
{
	while (*str)
	{
		if (*str < '0' || *str > '9')
			return (0);
		str++;
	}
	return (1);
}


