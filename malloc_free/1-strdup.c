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

	if (str == NULL)
	{
		return ('\0');
	}

	size = _strlen(str) + 1;
	char *str2 = malloc(size * sizeof(char));

	_memcpy(str2, str, size);

	free (str2);
	return (str2);
}
