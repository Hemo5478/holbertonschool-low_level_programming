#include "main.h"

/**
 * more_numbers - A function that prints numbers, from 0 to 9
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void more_numbers(void)
{
	int i,j,a,b;

	i = 0;
	j = 0;
	
	while (j < 10)
	{
		while (i < 15)
		{
			a = i / 10;
			b = i % 10;
			if (a != 0)
			{
				_putchar(a + '0');
			}
			_putchar(b + '0');
			i++;
		}
		_putchar('\n');
		j++;
	}
}
