#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_s -print string
 * @hemo: va_list
 * Return: none
 */

void print_s(va_list hemo)
{
	char *s;

	s = va_arg(hemo, char *);
	if (!s)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}
/**
 * print_c -print character
 * @hemo: va_list
 * Return: none
 */
void print_c(va_list hemo)
{
	char c;

	c = va_arg(hemo, int);
	printf("%c", c);
}
/**
 * print_d -print integer
 * @hemo: va_list
 * Return: none
 */
void print_d(va_list hemo)
{
	int d;

	d = va_arg(hemo, int);
	printf("%d", d);
}
/**
 * print_f -print float
 * @hemo: va_list
 * Return: none
 */
void print_f(va_list hemo)
{
	float f;

	f = va_arg(hemo, double);
	printf("%f", f);
}

/**
 * print_all - print many tyme of arguments
 * @format: string tha give us the types of the arguments
 * Return:none
 */
void print_all(const char * const format, ...)
{
	int x, y;
	char *sep = "";
	va_list hemo;

	print_t tpt[] = {
		{"s", print_s},
		{"c", print_c},
		{"i", print_d},
		{"f", print_f}
	};
	
	x = 0;
	va_start(hemo, format);
	while (format && (*(format + x)))
	{
		y = 0;
		while (y < 4 && (*(format + x) != *(tpt[y].c)))
		{
			y++;
		}
		if (y < 4)
		{
			printf("%s", sep);
			tpt[y].print_func(hemo);
			sep = ", ";
		}
		x++;
	}
	printf("\n");
	va_end(hemo);
}
