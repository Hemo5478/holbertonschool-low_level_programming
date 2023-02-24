#include "main.h"

/**
 * print_alphabet - prints alphabets in lowercase
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void print_alphabet(void)
{
	int i;
	int y;

	i = 1;
	y = 97;

	while (i < 27)
	{
		_putchar(y);
		i++;
		y++;
	}
		_putchar('\n');
}
