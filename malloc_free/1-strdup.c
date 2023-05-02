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
	char *str2;
	int len;

	str2 = (char*) malloc(size * sizeof(char));
	len = _strlen(str);
	_memcpy(str2, str, len);
	if (str == NULL)
	{
		return ('\0');
	}
}
