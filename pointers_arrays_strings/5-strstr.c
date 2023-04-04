#include "main.h"

/**
 * *_strstr - A function that locates a substring
 * @haystack: A string
 * @needle: A string
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j, v;

	v = 0;
	i = 0;
	while (haystack[i] != '\0')
	{
		j = 0;
		while (needle[j] != '\0')
		{
			if (needle[j] == haystack[i])
			{
				while (needle[j] == haystack[i])
				{
					v = 1;
				}
				else
				{
					v = 0;
					break;
				}
				i++;
				j++;
			}
			j++;
			i++;
		}
		i++;
		j++;
	}
	if (v == 1)
	{
		return (needle);
	}
	return ('\0');
}
