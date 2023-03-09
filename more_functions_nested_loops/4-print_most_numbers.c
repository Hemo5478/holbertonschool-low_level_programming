#include "main.h"

/**
 * print_most_numbers - A function that prints numbers, from 0 to 9
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void print_most_numbers(void)
{
	int i;

	i = 0;

	while (i < 10)
	{
		if ((i == 2) || (i == 4))
		{
			i++;
		}
		else
		{
		_putchar(i + '0');
		i++;
		}
	}
	_putchar('\n');
}
