#include "main.h"

/**
 * rev_string - A function that reverses a string
 * @s: A string
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void rev_string(char *s)
{
	int i, j, len;
	char *m;

	m = s;

	i = 0;
	while (m[i] != '\0')
	{
		i++;
	}
	j = 0;
	len = i;
	while (j <= len)
	{
		s[i] = m[j];
		i--;
		j++;
	}
}
