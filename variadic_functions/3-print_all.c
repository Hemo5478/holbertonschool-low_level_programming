#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_char - prints char
 * @hemo: valist
 */

void print_char(va_list hemo)
{
	printf("%c", va_arg(hemo, int));
}

/**
 * print_int - prints int
 * @hemo: valist
 */
void print_int(va_list hemo)
{
	printf("%d", va_arg(hemo, int));
}

/**
 * print_float - prints float
 * @hemo: valist
 */
void print_float(va_list hemo)
{
	printf("%f", va_arg(hemo, double));
}

/**
 * print_string - prints string
 * @hemo: valist
 */
void print_string(va_list hemo)
{
	char *s;

	s = va_arg(hemo, char *);

	if (s == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}

/**
 * print_all - print varying input of ints, chars, floats, and strings
 * @format: an array of chars signifying which data type to print
 */
void print_all(const char * const format, ...)
{
	char *separator = "";
	int x, y;
	va_list hemo;
	
	y = 0;
	datatype choice[] = { {'c', print_char},
			      {'i', print_int},
			      {'f', print_float},
			      {'s', print_string},
			      {'\0', NULL} };

	va_start(hemo, format);
	while (format != NULL && format[y] != '\0')
	{
		x = 0;
		while (choice[x].letter != '\0')
		{
			if (choice[x].letter == format[y])
			{
				printf("%s", separator);
				choice[x].func(hemo);
				separator = ", ";
			}
			x++;
		}
		y++;
	}
	va_end(hemo);
	printf("\n");
}
