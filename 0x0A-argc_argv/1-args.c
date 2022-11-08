#include "main.h"
#include <stdio.h>

/**
 * main - prints the number of arguments
 * @argc: number of arguments
 * @argv: array
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;

	printf("%d\n", argc);
	for (i = 0; i < argc - 1; i++)
	{
		printf("%s", *argv[i]);
	}

	return (0);
}
