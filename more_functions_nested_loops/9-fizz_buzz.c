#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - A program that prints the numbers from 1 to 100
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int main(void)
{
	int i;

	i = 1;
	while (i <= 100)
	{
		if (((i % 3) == 0) && ((i % 5) != 0))
		{
			printf("Fizz ");
			i++;
		}
		else if (((i % 5) == 0) && ((i % 3) != 0))
		{
			if (i == 100)
			{
				printf("Buzz");
				i++;
			}
			else
			{
				printf("Buzz ");
				i++;
			}
		}
		else if (((i % 3) == 0) && ((i % 5) == 0))
		{
			printf("FizzBuzz ");
			i++;
		}
		else
		{
			printf("%d ", i);
			i++;
		}
	}
	printf("\n");

	return (0);
}
