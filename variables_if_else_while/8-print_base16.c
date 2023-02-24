#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - A program that prints all numbers of base 16 in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int y;

	i = 1;
	y = 48;

	while (i < 11)
	{
		putchar(y);
		i++;
		y++;
	}

	i = 1;
	y = 97;

	while (i < 7)
	{
		putchar(y);
		i++;
		y++;
	}
		putchar('\n');
	return (0);
}
