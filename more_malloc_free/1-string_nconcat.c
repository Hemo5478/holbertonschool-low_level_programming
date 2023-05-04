#include <stdlib.h>
#include "main.h"

/**
 * _strlen - A function that returns the length of a string
 * @s: A string
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * string_nconcat - A function that concatenates two strings
 * @s1: A string
 * @s2: A string
 * @n: The max bytes number for s2
  * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int l1, l2, x, y;
	char *concat;

	if (!s1)
	s1 = "";

	if (!s2)
	s2 = "";

	l1 = _strlen(s1);
	l2 = _strlen(s2);

	if (n >= l2)
	{
		n = l2;
	}

	concat = malloc(sizeof(char) * (l1 + n + 1));

	if (concat == NULL)
	{
		return (NULL);
	}

	x = 0;
	while (x < l1)
	{
		concat[x] = s1[x];
		x++;
	}
	y = 0;
	while (y < n)
	{
		concat[x + y] = s2[y];
		y++;
	}

	concat[x + y] = '\0';

	return (concat);
}
