#include "main.h"

/**
 * *_strncat - A function that concatenates two strings
 * @dest: A string
 * @src: A string
 * @n: A number
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, len;

	len = 0;
	i = 0;
	while (dest[len] != '\0')
	{
		len++;
	}
	while ((i < len) && (src[i] != '\0'))
	{
		dest[len + i] = src[i];
		i++;
	}
	dest[n + i] = '\0';
	return (dest);
}
