#include "main.h"

/**
 * *_atoi - A function that convert a string to an integer.
 * @s: A string
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _atoi(char *s)
{
	int rs;
	int sn;
	int i;

	sn = 1;
	i = 0;
	while (s[i] != '\0' && !(s[i] >= '0' && s[i] <= '9'))
	{
		if (s[i] == '-')
		{
			sn *= -1;
		}
		i++;
	}
	
	rs = 0;
	while (s[i] >= '0' && s[i] <= '9')
	{
		rs = rs * 10 + (s[i] - '0');
		i++;
	}
	return rs * sn;
}
