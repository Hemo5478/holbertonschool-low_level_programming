#include "main.h"

/**
 * puts2 - A function that prints every other character of a string
 * @str: A string
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void puts2(char *str)
{
	int i, j;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < i)
	{
		if (j % 2 == 0)
		{
			_putchar(str[j]);
			j++;
		}
		if (j % 2 == 1)
		{
			j++;
		}
	}
	_putchar('\n');
}
