#include "main.h"

/**
 * print_triangle - A function that prints a triangle
 * @size: A number
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void print_triangle(int size)
{
	int j, i, a;

	j = 1;
	a = size;
	if (size <= 0)
	{
		_putchar('\n');
	}
	while (j <= size)
	{
		i = 1;
		while (i < a)
		{
			_putchar(32);
			i++;
		}
		while (i <= size)
		{
			_putchar('#');
			i++;
		}
			_putchar('\n');
		j++;
		a--;
	}
}
