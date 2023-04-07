#include <stdio.h>
#include <stdlib.h>

/**
 * *main - A program that adds positive numbers
 * *@argc: a number
 * *@argv: a string
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int main(int argc, char *argv[])
{
	int add, i;

	add = 0;

	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]) >= 0)
		{
			add = add + atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", add);
	return (0);
}
