#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - A function that prints strings
 * @separator: The string to be printed to seperate the strings
 * @n: The number of paramaters
 * Return: Nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list hemo;
	char *str;
	unsigned int y;

	va_start(hemo, n);

	y = 0;
	while (y < n)
	{
		str = va_arg(hemo, char *);

		if (!str)
			printf("(nil)");
		else
			printf("%s", str);

		(separator != NULL && y < n - 1) ? printf("%s", separator) : 0;
		y++;
	}

	printf("\n");

	va_end(hemo);
}
