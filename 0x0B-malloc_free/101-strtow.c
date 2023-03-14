#include "main.h"
#include <stdlib.h>

/**
 * word_count - function to calculate number of words
 * @str: string being passed to check for words
 *
 * Return: number of words
 */

int word_count(char *str)
{
	int count;
	int in_word;

	count = 0;
	in_word = 0;
	while (*str != '\0')
	{
		if (*str == ' ')
			in_word = 0;
		else if (in_word == 0)
		{
			count++;
			in_word = 1;
		}
		str++;
	}
	return (count);
}

/**
 * free_memo - frees the memory
 * @s: pointer values being passed for freeing
 * @i: counter
 */

void free_memo(char **s, int i)
{
	int j;
	for (j = 0; j < i; j++)
		free(s[j]);
	free(s);
}

/**
 * strtow - function that splits string into words
 * @str: string being passed
 * Return: null if string is empty or null or function fails
 */

char **strtow(char *str)
{
	int j, c, word_len, words;
	char **arr;
	char *word_start;

	if (str == NULL || *str == ' ')
		return (NULL);
	words = word_count(str);

	if (words == 0)
		return (NULL);

	arr = malloc((words + 1) * sizeof(char *));

	if (arr == NULL)
		return (NULL);

	for (j = 0; str[j] != '\0'; j++)
	{
		word_len = 0;
		if (*str == ' ')
			str++;
		else
		{
			word_start = str;
			while(*str != ' ' && *str != '\0')
			{
				word_len++;
				str++;
			}

			arr[j] = malloc((word_len + 1) * sizeof(char));

			if (arr[j] == NULL)
			{
				free_memo(arr, j);
				return (NULL);
			}
			for (c = 0; word_start[c] != ' ' && word_start[c] != '\0'; c++)
				arr[j][c] = word_start[c];
			arr[j][c] = '\0';
		}
	}
	arr[j] = NULL;
	return (arr);
}

