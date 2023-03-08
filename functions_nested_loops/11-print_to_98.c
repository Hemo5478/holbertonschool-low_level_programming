#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * print_to_98 - A function that prints all natural numbers from n to 98
 * @n: A number
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void print_to_98(int n)
{
	if (n == 98)
	{
		printf("%d", n);
		printf("\n");
	}
	if (n < 98)
	{
		while (n <98)
		{
			printf("%d, ",n);
			n++;
		}
		printf("98\n");
	}
	if (n > 98)
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
		printf("98\n");
	}
}
