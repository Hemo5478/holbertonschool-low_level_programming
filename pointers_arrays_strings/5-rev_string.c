#include "main.h"

/**
 * rev_string - A function that reverses a string
 * @s: A string
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void rev_string(char *s)
{
	int i, n, len, j;
	char a;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	n = i;
	len = i / 2;
	j = 0;
	while (j <= len)
	{
		a = s[n];
		s[n] = s[j];
		s[j] = a;
		j++;
		n--;
	}
}
