#include "main.h"

/**
 * jack_bauer - A function that prints every minute of the day of Jack Bauer
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void jack_bauer(void)
{
	int i;
	int a;
	int b;
	int c;
	int d;

	i=1;
	a=0;
	b=0;
	c=0;
	d=0;

	while (i < 1441 )
	{
		a++;
		b++;
		c++;
		d++;

		if (d > 9)
		{
			d=0;
			c++;
		}
		if (c > 6)
		{
			c=0;
			b++;
		}
		if (b > 3)
		{
			b=0;
			a++;
		}
		if (a > 2)
		{
			a=0;
		}
	_putchar(a +'0');
	_putchar(b +'0');
	_putchar(':');
	_putchar(c +'0');
	_putchar(d +'0');
	_putchar('\n');
	i++;
}
}
