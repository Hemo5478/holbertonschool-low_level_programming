#include "main.h"
#include <stdlib.h>

/**
 * _calloc - A function that allocates memory for an array
 * @nmemb: The number of elements
 * @size: The size of elements
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	i = 0;
	while (i < nmemb * size)
	{
		ptr[i] = 0;
		i++;
	}

	return (ptr);
}
