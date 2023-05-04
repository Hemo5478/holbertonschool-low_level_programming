#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct dt - structure defined to hold a single character
 * @letter: A letter for data type
 * @func: A function pointer
 */

typedef struct dt
{
	char letter;
	void (*func)(va_list);
} datatype;

#endif
