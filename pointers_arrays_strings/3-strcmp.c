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
	while ((*s1 != '\0') && (*s2 != '\0'))
	{
		if (*s1 != *s2)
		{
			i = 1;
		}
		s1++;
		s2++;
	}
	if (*s1 != '\0' || *s2 != '\0')
	{
		return (1);
	}
	if (i == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
