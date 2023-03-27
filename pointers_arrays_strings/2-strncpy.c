#include "main.h"

/**
 * *_strncpy - A function that copies a string
 * @dest: A string
 * @src: A string
 * @n: A number
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i, len;

	len = 0;
	i = 0;
	while (dest[len] != '\0')
	{
		len++;
	}
	while ((i < n) && (src[i] != '\0'))
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
