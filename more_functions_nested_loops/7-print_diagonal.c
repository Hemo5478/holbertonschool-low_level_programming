#include "main.h"

/**
 * print_diagonal - A function that draws a diagonal line on the terminal
 * @n: A number
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void print_diagonal(int n)
{
	int i;

	i = 1;
	while (i <= n)
	{
		_putchar('\\');
		i++;
	}
		_putchar('\n');
}
