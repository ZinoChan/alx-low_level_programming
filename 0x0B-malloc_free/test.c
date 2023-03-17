#include "main.h"
#include <stdlib.h>

int word_count(char *str);
void free_memo(char **s, int i);

char **strtow(char *str)
{
    int j, c, word_len, words;
    char **arr;
    char *word_start;

    if (str == NULL || *str == '\0' || *str == ' ')
        return NULL;

    words = word_count(str);

    if (words == 0)
        return NULL;

    arr = malloc((words + 1) * sizeof(char *));

    if (arr == NULL)
        return NULL;

    for (j = 0; *str != '\0' && j < words; j++)
    {
        word_len = 0;
        while (*str == ' ')
            str++;

        if (*str == '\0')
            break;

        word_start = str;

        while (*str != ' ' && *str != '\0')
        {
            word_len++;
            str++;
        }

        arr[j] = malloc((word_len + 1) * sizeof(char));

        if (arr[j] == NULL)
        {
            free_memo(arr, j);
            return NULL;
        }

        for (c = 0; c < word_len; c++)
            arr[j][c] = word_start[c];

        arr[j][c] = '\0';
    }

    arr[j] = NULL;
    return arr;
}

int word_count(char *str)
{
    int count = 0;

    while (*str != '\0')
    {
        while (*str == ' ')
            str++;

        if (*str == '\0')
            break;

        count++;

        while (*str != ' ' && *str != '\0')
            str++;
    }

    return count;
}

void free_memo(char **s, int i)
{
    int j;

    for (j = 0; j < i; j++)
        free(s[j]);

    free(s);
}

