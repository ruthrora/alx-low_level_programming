#include "main.h"
#include <stdio.h>

/**
 * main -  multiplies two numbers.
 * @argc: number of arguments
 * @argv: array
 * Return: Always 0
 */
int main(int argc, char *argv[])
{

	int a, b;

	if (argc == 1 || argc == 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		b = 1;
		for (a = 1; a < 3; a++)
			b *= atoi(argv[a]);

		printf("%d\n", b);
	}

	return (0);
}
