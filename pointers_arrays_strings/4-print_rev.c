#include "main.h"

/**
 * print_rev - A function that prints a string , in reverse
 * @s: A string
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void print_rev(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	while (0 <= i)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
