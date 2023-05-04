#include "main.h"

/**
 * is_prime_number - A function that check if a number is prime
 * @n: A number
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	if (n == 2)
	{
		return (1);
	}
	return (prime_checker(n, 2));
}

/**
 * prime_checker - Checks if the number is prime
 * @n: A number
 * @c: A guesser
*  Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int prime_checker(int n, int c)
{
	if (c == n)
	{
		return (1);
	}
	if (n % c == 0)
	{
		return (0);
	}
	c++;
	return (prime_checker(n, c));
}
