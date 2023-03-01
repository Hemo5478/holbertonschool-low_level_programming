#include "main.h"
/**
 * add - A function that adds two integers and returns the result
 * @n: A number
 * @m: A number
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int add(int n, int m)
{
	int a, b, c, d, g;

	g = n + m;
	d = g % 10;
	c = (g % 100) / 10;
	b = (g % 1000) / 100;
	a = g / 1000;
	_putchar(a + '0');
	_putchar(b + '0');
	_putchar(c + '0');
	_putchar(d + '0');
	_putchar('\n');
	return (0);
}
