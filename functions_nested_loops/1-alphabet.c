#include "main.h"

/**
 * main - A program that prints alphabet in lowercase
 *
 * Return: Always 0 (Success)
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
