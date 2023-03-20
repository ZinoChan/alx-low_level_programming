#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - creates a new dog.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: owner of the dog.
 *
 * Return: struct dog.
 * if fails, returns NULL.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int len1, len2, i;
	dog_t *sadaharu;

	if (name && owner)
	{
		sadaharu = malloc(sizeof(dog_t));
		if (sadaharu == NULL)
			return (NULL);
		for (len1 = 0; name[len1] != '\0'; len1++)
			;
		sadaharu->name = malloc(sizeof(char) * len1);
		if (sadaharu->name == NULL)
		{
			free(sadaharu);
			return (NULL);
		}
		for (len2 = 0; name[len2] != '\0'; len2++)
			;
		sadaharu->owner = malloc(sizeof(char) * len2);
		if (sadaharu->owner == NULL)
		{
			free(sadaharu->name);
			free(sadaharu);
			return (NULL);
		}
		for (i = 0; name[i] != '\0'; i++)
		{
			sadaharu->name[i] = name[i];
		}
		sadaharu->name[i++] = '\0';
		for (i = 0; owner[i] != '\0'; i++)
		{
			sadaharu->owner[i] = owner[i];
		}
		sadaharu->owner[i++] = '\0';
		sadaharu->age = age;
	}
	return (sadaharu);
}
