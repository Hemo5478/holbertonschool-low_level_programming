#include "main.h"

/**
 * *_strcmp - A function that compares two strings
 * @s1: A string
 * @s2: A string
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while ((s1[i] != '\0') && (s2[i] != '\0'))
	{
		if (s1[i] != s2[i])
		{
			return ((s1[i] - s2[i]));
		}
		i++;
	}
	return (0);
}
