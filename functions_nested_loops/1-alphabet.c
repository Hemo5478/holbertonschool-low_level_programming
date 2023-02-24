#include "main.h"

/**
 * main - A program that prints the alphabet, in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
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
	return (0);
}
