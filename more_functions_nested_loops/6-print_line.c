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
		_putchar('_');
		i++;
	}
		_putchar('\n');
}
