#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - A program that prints the alphabet in lowercase then uppercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int y;
	int a;
	int b;

	i = 1;
	y = 1;
	a = 97;
	b = 65;

	while (i < 27)
	{
		putchar(a);
		i++;
		a++;
	}
	while (y < 27)
	{
		putchar(b);
		y++;
		b++;
	}
		putchar('\n');
	return (0);
}

