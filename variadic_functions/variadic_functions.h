#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct print - Data structure
 * @c: A character
 * @print_func: A function pointer
 */

typedef struct print
{
	char *c;
	void (*print_func)(va_list params);
} print_t;

#endif
