#include "main.h"

/**
 * print_last_digit - A function that prints the last digit of a number
 * @n: A number
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int print_last_digit(int n)
{
	int ld = n % 10;

	if (n >= 0)
	{
		_putchar(ld + '0');
		return (ld);
	}
	else
	{
		_putchar(-ld + '0');
		return (-ld);
	}
}
