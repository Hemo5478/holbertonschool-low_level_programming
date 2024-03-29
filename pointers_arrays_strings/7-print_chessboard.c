#include "main.h"

/**
 * print_chessboard - A function that prints the chessboard
 * @a: An array
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	i = 0;
	while (i < 8)
	{
		j = 0;
		while (j < 8)
		{
			_putchar(a[i][j]);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
