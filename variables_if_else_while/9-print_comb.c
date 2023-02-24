#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - A program that prints all possible combination of single digit num
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

	if (y != 57)
	{
		putchar(44);
		putchar(32);
	}
	}
		putchar('\n');
	return (0);
}
