#include "main.h"
#include <stdio.h>

/**
 * main - prints multiple of two numbers
 * @argc: number of arguments
 * @argv: array pointer
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int input1 = 0, input2 = 0;

	if (argc == 3)
	{
		input1 = atoi(argv[1]);
		input2 = atoi(argv[2]);
		printf("%d\n", input1 * input2);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
