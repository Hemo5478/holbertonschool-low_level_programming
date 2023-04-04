#include "main.h"

/**
 * *cap_string - A function that capitalizes all words of a string
 * @sr: A string
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

char *cap_string(char *sr)
{
	int i;

	i = 0;
	while (sr[i] != '\0')
	{
		if ((sr[0] >= 'a') && (sr[0] <= 'z'))
		{
			sr[0] = sr[0] - 32;
			i++;
		}
		if ((sr[i] == ' ') || (sr[i] == '\t') || (sr[i] == '\n') || (sr[i] == ';') || (sr[i] == ';') || (sr[i] == '.') || (sr[i] == '!') || (sr[i] == '?') || (sr[i] == '"') || (sr[i] == '(') || (sr[i] == ')') || (sr[i] == '{') || (sr[i] == '}'))
		{
			i++;
			if ((sr[i] == ' ') || (sr[i] == '\t') || (sr[i] == '\n') || (sr[i] == ';') || (sr[i] == ';') || (sr[i] == '.') || (sr[i] == '!') || (sr[i] == '?') || (sr[i] == '"') || (sr[i] == '(') || (sr[i] == ')') || (sr[i] == '{') || (sr[i] == '}'))
			{
				i++;
			}
			if ((sr[i] >= 'a') && (sr[i] <= 'z'))
			{
				sr[i] = sr[i] - 32;
			}
		}
		i++;
	}
	return (sr);
}
