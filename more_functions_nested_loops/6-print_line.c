#include "main.h"

/**
 * print_line - A function that draws a straight line in the terminal
 * @n: A number
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void print_line(int n)
{
	int i;

	i = 1;
	while (i <= n)
	{
		if (n <= 0)
		{
			_putchar('\n');
			i = n;
		}
		else
		{
			_putchar('_');
		}
		i++;
	}
	if (n > 0)
	{
		_putchar('\n');
	}
}
