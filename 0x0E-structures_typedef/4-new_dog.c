#include "dog.h"
#include <stdlib.h>

int _str_len(char *s);
char *str_cpy(char *dest, char *src);

/**
  * str_len - Returns the length of a string
  * @s: String to count
  *
  * Return: String length
  */
int str_len(char *s)
{
	int len;

	for (len = 0; s[len] != '\0'; len++)
		;
	return (len);
}

/**
  * str_cpy - Copy a string
  * @dest: Destination value
  * @src: Source value
  *
  * Return: the pointer to dest
  */
char *str_cpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i++] = '\0';

	return (dest);
}
/**
 * new_dog - creates a new dog.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: owner of the dog.
 * Return: struct dog || NULL.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *sadaharu;

	if (name && owner)
	{
		sadaharu = malloc(sizeof(dog_t));

		if (!sadaharu)
			return (NULL);

		sadaharu->name = malloc(sizeof(char) * str_len(name));
		if (!sadaharu->name)
		{
			free(sadaharu);
			return (NULL);
		}

		sadaharu->owner = malloc(sizeof(char) * str_len(owner));
		if (!sadaharu->owner)
		{
			free(sadaharu->name);
			free(sadaharu);
			return (NULL);
		}

		str_cpy(sadaharu->name, name);
		str_cpy(sadaharu->owner, owner);
		sadaharu->age = age;
	}

	return (sadaharu);

}
