#include "main.h"

/**
 * print_last_digit - A function that prints the last digit of a number
 * @n: A number
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int print_last_digit(int n)
{
	if (n > 0)
	{
		n = n % 10;
		_putchar('0' + n);
		return (n);
	}
	else if (n < 0)
	{
		n = -n;
		n = n % 10;
		_putchar('0' + n);
		return (n);
	}
	else
	{
		_putchar('0' + 0);
		return (n);
	}
}
