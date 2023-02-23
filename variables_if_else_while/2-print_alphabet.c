#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - A program that prints alphabet letters
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
		putchar(y);
		i++;
		y++;
	}
		putchar('\n');
	return (0);
}
