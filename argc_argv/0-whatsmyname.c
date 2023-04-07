#include <stdio.h>

/**
 * *main - A program that prints its name
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int main(__attribute__((unused)) int argc, char *argv[])
{
	printf("%s", argv[0]);
	printf("\n");
	return (0);
}
