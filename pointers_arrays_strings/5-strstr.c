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
	int i, j, k;

	i = 0;
	while (haystack[i])
	{
		j = i;
		k = 0;
		while (needle[k] && haystack[j] == needle[k])
		{
			j++;
			k++;
		}
		if (!needle[k])
		{
			return (&haystack[i]);
		}
		i++;
	}
	return ('\0');
}
