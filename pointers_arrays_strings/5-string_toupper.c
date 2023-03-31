#include "main.h"

/**
 * *string_toupper - A function that changes all lowercase lettes to uppercase 
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

char *string_toupper(char *sr)
{
	int i, ascii;

	i = 0;
	while (sr[i] != '\0')
	{
		ascii = sr[i];
		if ((ascii > 64) && (ascii < 91))
		{
			i++;
		}
		if ((ascii > 96) && (ascii < 123))
		{
			ascii = ascii - 32;
			i++;
		}
	}
	return (sr);
}
