#include "main.h"

/**
 * print_square - A function that prints a square
 * @size: A number
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void print_square(int size)
{
	int i, j;

	i = 1;
	while (i <= size)
	{
		j = 1;
		while (j <= size)
		{
			_putchar('#');
			if (j == size)
			{
				_putchar('\n');
			}
			j++;
		}
		i++;
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
