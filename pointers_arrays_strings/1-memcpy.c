#include "main.h"

/**
 * *_memcpy - A function that copies memory area
 * @dest: A string
 * @src: A string
 * @n: An unsigned integer
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
