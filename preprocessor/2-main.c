#include <stdio.h>

/**
 * main - A program that prints the name of the file it was compiled from
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int main(void)
{
	printf("%s\n", __FILE__);

	return (0);
}
