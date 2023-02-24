#include "main.h"

/**
 * print_alphabet_x10 - prints alphabets in lowercase 10 times
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void print_alphabet_x10(void)
{
	int i;
	int y;
	int z;

	i = 1;
	y = 97;
	z = 1;

	while (z < 11)
	{
		while (i < 27)
		{
			_putchar(y);
			i++;
			y++;
		}
	z++;
		_putchar('\n');
	}
}
