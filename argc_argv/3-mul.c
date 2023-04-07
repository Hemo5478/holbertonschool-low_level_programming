#include <stdio.h>
#include <stdlib.h>

/**
 * *main - A program that prints the number of arguments passed into it
 * *@argc: a number
 * *@argv: a string
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int main(int argc, char *argv[])
{
	int mult;

	if ((argc > 3) || (argc < 2))
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		mult = (atoi(argv[1])) * (atoi(argv[2]));
		return (mult);
	}
}
