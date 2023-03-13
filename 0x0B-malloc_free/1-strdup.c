#include "main.h"
#include <stdlib.h>

char *_strdup(char *str)
{
	int size, i;
	char *s;

	if (str == NULL)
		return (NULL);

	for (size = 0; str[size] != '\0'; size++)
		;

	s = malloc((size + 1) * sizeof(char));

	if (s == NULL)
		return (NULL);

	for (i = 0; i <= size; i++)
		s[i] = str[i];

	s[size] = '\0';
	return (s);
}
