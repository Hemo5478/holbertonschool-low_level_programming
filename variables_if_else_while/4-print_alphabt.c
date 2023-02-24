#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - A program that prints lowercase alphabet without q and e
u *
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
	if ((y == 101) || (y == 113))
	{
		i++;
		y++;
	}
	else
	{
		putchar(y);
		i++;
		y++;
	}
	}
		putchar('\n');
	return (0);
}
