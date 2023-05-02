#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - A function that returns a poiwer to a newly allocated space
 * * @str: A string
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

char *_strdup(char *str)
{
	size_t size;
	char *str2;

	if (str == NULL)
	{
		return (NULL);
	}

	size = _strlen(str) + 1;
	str2 = malloc(size * sizeof(char));

	if (str2 == NULL)
	{
		return (NULL);
	}

	_memcpy(str2, str, size);

	return (str2);
}
