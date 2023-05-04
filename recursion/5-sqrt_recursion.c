#include "main.h"

/**
 * _sqrt_recursion - A function that returns the natural square root
 * @n: A number
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _sqrt_recursion(int n)
{
	int a;
	if (n == 0 || n == 1)
		return (n);
	a = 1;
	while (a * a <= n)
	{
		a++;
	}
	a = a - 1;
	if (a * a == n)
	{
		return (a);
	}
	else
	{
		return (-1);
	}
}
