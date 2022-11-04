#include "main.h"

/**
 * main - prints number of arguments
 * @argc: num. of command line arguments
 * @argv: array
 * Return: Always 0 (Success )
 */
int main(int argc, char *argv[])
{

	int a;

	if (argc == 1)
		printf("%d\n", argc - 1);
	else
	{
		for (a = 0; *argv; a++, argv++)
			;

		printf("%d\n", a - 1);
	}

	return (0);
}
