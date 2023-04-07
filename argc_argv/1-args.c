#include <stdio.h>

/**
 * *main - A program that prints the number of arguments passed into it
 * *@argc: a number
 * *@argv: a string
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d", (argc - 1));
	return (0);
}
