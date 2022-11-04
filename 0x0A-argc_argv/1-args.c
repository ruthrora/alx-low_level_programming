#include "main.h"
#include <stdio.h>

/**
 * main -  prints the number of arguments passed into it.
 * @argc: number of arguments
 * @argv: array
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;

	printf("%d\n", argc);

	for (i = 0; i < argc; i++)
	{
		printf("%s", argc[i]);
	}
	return (0);
}
