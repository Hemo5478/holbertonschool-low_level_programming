#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - The addition of two integers
 * @a: integer
 * @b: integer
 * Return: The Summary
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Subtraction of a and b
 * @a: integer
 * @b: integer
 * Return: The difference
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiply a and b
 * @a: integer
 * @b: integer
 * Return: Product
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - The division of a by b
 * @a: integer
 * @b: integer
 * Return: a div b, or NULL if b is zero
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - The rest of the division of a by b
 * @a: integer
 * @b: integer
 * Return: a % b, or NULL if b is zero
 */

int op_mod(int a, int b)
{
	return (a % b);
}
