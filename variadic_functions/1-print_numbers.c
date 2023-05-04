#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - A function that prints numbers
 * @separator: The string to be printed between numbers to seperate them
 * @n: The number of paramaters
 * Return: Void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list hemo;
	unsigned int y = 0;

	va_start(hemo, n);

	while (y < n)
	{
		printf("%d", va_arg(hemo, int));
		(separator && y < n - 1) ? printf("%s", separator) : 0;
		y++;
	}

	printf("\n");

	va_end(hemo);
}
