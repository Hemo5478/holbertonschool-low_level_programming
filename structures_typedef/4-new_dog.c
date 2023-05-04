#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * *_strcpy - A function that copies the string pointed to by src
 * @dest: A string
 * @src: A string
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

char *_strcpy(char *dest, char *src)
{
	int i, n;

	n = 0;
	i = 0;
	while (src[n] != '\0')
	{
		n++;
	}
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[n] = '\0';
	return (dest);
}

/**
 * new_dog - A function that creates a new dog
 * @name: The dog's name
 * @age: The dog's age
 * @owner: The dog's owner
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggy;
	char *name_copy, *owner_copy;

	doggy = malloc(sizeof(dog_t));
	if (doggy == NULL)
	{
		return (NULL);
	}

	name_copy = malloc(strlen(name) + 1);
	if (name_copy == NULL)
	{
		free(doggy);
		return (NULL);
	}

	_strcpy(name_copy, name);

	owner_copy = malloc(strlen(owner) + 1);
	if (owner_copy == NULL)
	{
		free(name_copy);
		free(doggy);
		return (NULL);
	}

	_strcpy(owner_copy, owner);

	doggy->name = name_copy;
	doggy->age = age;
	doggy->owner = owner_copy;

	return (doggy);
}
