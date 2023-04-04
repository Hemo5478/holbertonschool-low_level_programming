#include "main.h"

/**
 * *_memset - A function that fills memory with a constant byte
 * @s: A string
 * @b: A character
 * @n: An unsigned integer
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
