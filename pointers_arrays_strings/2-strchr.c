#include "main.h"

/**
 * *_strchr - A function that locates a character in a string
 * @s: A string
 * @c: A character
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (s + i);
		}
		i++;
	}
	if (s[i] == '\0')
	{
		return ('\0');
	}
	return (0);
}
