#include "main.h"
#include <stdlib.h>

/**
 * *create_array - A function that creates an array of chars
 * * @size: A number
 * * @c: A character
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;

	char *create_array = (char *)malloc(sizeof(char) * size);

	if (size == 0)
	{
		return ('\0');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			create_array[i] = c;
		}
		return (create_array);
	}
	if (*create_array == ('\0'))
	{
		return ('\0');
	}
}
