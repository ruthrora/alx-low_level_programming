#include <stdio.h>

/**
 * main - prints the number of arguments
 * @argc: number of arguments
 * @argv: array
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	int a, b = 0;

	for (a = argc - 1; *(argv + a) != *argv; a--)
		++b;

	printf("%d\n", b);

	return (0);
}
