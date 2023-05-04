#include "main.h"

/**
 * flip_bits - A function returns the number of bits
 * @n: A number
 * @m: A number
 * Return: counter
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int d;
	unsigned int counter = 0;

	d = n ^ m;
	do {
		counter += d & 1;
		d >>= 1;
	} while (d != 0);

	return (counter);
}
