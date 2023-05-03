#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * *str_concat - A function that concatenates two strings
 * * @s1: A string
 * * @s2: A string
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

char *str_concat(char *s1, char *s2)
{
	char *concat;
	int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = 0;
	while (s1[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		j++;
	}
	concat = malloc(sizeof(char) * (i + j + 1));
	if (concat == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (s1[i] != '\0')
	{
		concat[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		concat[i] = s2[j];
		i++;
		j++;
	}
	concat[i] = '\0';
	return (concat);
}
