#include <stdio.h>

/**
 * *main - A program that prints the number of arguments passed into it
 * *@argc: a number
 * *@argv: a string
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int main(int argc, char *argv[])
{
	int i;
	
	for (i = 0; i < argc; i++)
	{
		printf("%s", argv[i]);
		printf("\n");
	}
	return (0);
}
