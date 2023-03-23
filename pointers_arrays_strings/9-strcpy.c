#include "main.h"

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
