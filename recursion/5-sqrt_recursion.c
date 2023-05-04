#include "main.h"

/**
 * _sqrt_recursion - A function that returns the natural square root
 * @n: A number
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (n);
	}
	return (_sqrt_repeater(n, 1));
}

/**
 * _sqrt_repeater - Finds the natural square root
 * @n: A number
 * @i: A guesser
*  Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _sqrt_repeater(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	i++;
	return (_sqrt_repeater(n, i));
}
