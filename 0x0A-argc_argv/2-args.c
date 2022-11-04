#include "main.h"
#include <stdio.h>

/**
 * main -  prints all arguments it receives.
 * @argc: Arguments to be printed
 * @argv: array pointing to arguments
 * Return: Always 0 (Sucess)
 */
int main(int argc, char *argv[])
{

	int k = 0;

	while (k < argc)
	{
		printf("%s\n", argv[k]);
		k++;
	}
	return (0);
}
