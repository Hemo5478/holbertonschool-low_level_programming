#include <stdarg.h>
#include "variadic_functions.h"

/**
 * *sum_them_all - A function that returns the sum of all its parameters.
 * * @n: The number of paramaters that the function will receive
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list hemo;
	int summary;
	unsigned int y;

	if (!n)
		return (0);

	va_start(hemo, n);

	summary = 0;
	y = 0;
	while (y < n)
	{
		summary += va_arg(hemo, int);
		y++;
	}

	va_end(hemo);

	return (summary);
}
