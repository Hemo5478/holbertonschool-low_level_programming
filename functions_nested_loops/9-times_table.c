#include "main.h"
/**
 * times_table - A function that prints the 9 times table, starting with 0
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void times_table(void)
{
	int a, b, c, y, j, z, m;

	y = 1;
	a = 0;
	while (y < 11)
	{
		_putchar(48);
		j = 1;
		z = 1;
		m = a;
		while (j < 10)
		{
			m = a * z;
			if (m < 10)
			{
				b = m + 48;
				c = 32;
			}
			if (m > 9)
			{
				b = (m % 10) + 48;
				c = (m / 10) + 48;
			}
			_putchar(',');
			_putchar(32);
			_putchar(c);
			_putchar(b);
			j++;
			z++;
		}
	_putchar('\n');
	a++;
	y++;
	}
}
