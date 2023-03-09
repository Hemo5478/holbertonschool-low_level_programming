#include "main.h"

/**
 * print_diagonal - A function that draws a diagonal line on the terminal
 * @n: A number
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void print_diagonal(int n)
{
	int i, j, a;

	i = 1;
	while (i <= n)
	{
		a = n-1;
		j = 1;
		while (j <= a)
		{
			_putchar(32);
			j++;
		}
		_putchar('\\');
		_putchar('\n');
		i++;
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
