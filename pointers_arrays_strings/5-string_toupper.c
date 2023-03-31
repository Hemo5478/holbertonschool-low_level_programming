#include "main.h"

/**
 * *string_toupper - A function that changes all lowercase lettes to uppercase 
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

char *string_toupper(char *sr)
{
	int i;

	i = 0;
	while (sr[i] != '\0')
	{
		if ((sr[i] >= 'A') && (sr[i] <= 'Z'))
		{
			i++;
		}
		else if ((sr[i] >= 'a') && (sr[i] <= 'z'))
		{
			sr[i] = sr[i] - 32;
			i++;
		}
	}
	return (sr);
}
