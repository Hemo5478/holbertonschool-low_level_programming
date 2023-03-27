#include "main.h"

/**
 * *_strcat - A function that concatenates two strings
 * @dest: A string
 * @src: A string
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

char *_strcat(char *dest, char *src)
{
	int i, n;

	n = 0;
	i = 0;
	while (dest[n] != '\0')
	{
		n++;
	}
	while (src[i] != '\0')
	{
		dest[n + i] = src[i];
		i++;
	}
	dest[n + i] = '\0';
	return (dest);
}
