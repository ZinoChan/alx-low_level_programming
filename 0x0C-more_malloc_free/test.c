#include <stdio.h>
#include <stdlib.h>

/* Function declarations */
int is_numeric(char *str);
void multiply(char *num1, char *num2);

/**
 * main - multiplies two positive numbers
 * @argc: argument count
 * @argv: argument vectors
 * Return: 0 on success, non-zero on error
 */
int main(int argc, char **argv)
{
    char *num1, *num2;

    if (argc != 3 || !is_numeric(argv[1]) || !is_numeric(argv[2]))
    {
        printf("Error\n");
        return 1;
    }

    num1 = argv[1];
    num2 = argv[2];

    if (*num1 == '0' || *num2 == '0')
    {
        printf("0\n");
    }
    else
    {
        multiply(num1, num2);
    }

    return 0;
}

/**
 * multiply - multiplies two numbers and displays the result
 * @num1: first number
 * @num2: second number
 */
void multiply(char *num1, char *num2)
{
    int len1 = 0, len2 = 0, i, j, res;
    int *result;

    /* Calculate the length of both strings */
    while (num1[len1])
        len1++;
    while (num2[len2])
        len2++;

    /* Allocate memory to store the result */
    result = calloc(len1 + len2, sizeof(int));

    /* Multiply each digit and store the result in the appropriate position */
    for (i = len1 - 1; i >= 0; i--)
    {
        for (j = len2 - 1; j >= 0; j--)
        {
            res = (num1[i] - '0') * (num2[j] - '0');
            result[i + j + 1] += res % 10;
            result[i + j] += res / 10;
        }
    }

    /* Take care of the carries */
    for (i = len1 + len2 - 1; i > 0; i--)
    {
        if (result[i] > 9)
        {
            result[i - 1] += result[i] / 10;
            result[i] %= 10;
        }
    }

    /* Print the result */
    for (i = 0; i < len1 + len2; i++)
    {
        if (result[i] != 0)
        {
            break;
        }
    }

    for (; i < len1 + len2; i++)
    {
        printf("%d", result[i]);
    }

    printf("\n");

    /* Free the memory */
    free(result);
}

/**
 * is_numeric - determines if a string has only numeric characters
 * @str: the input string
 * Return: 1 if the string is numeric, 0 otherwise
 */
int is_numeric(char *str)
{
    while (*str)
    {
        if (*str < '0' || *str > '9')
            return 0;
        str++;
    }

    return 1;
}

