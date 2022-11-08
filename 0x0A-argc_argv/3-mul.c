#include <stdio.h>
#include <stdlib.h>

/**
 * main -  multiplies two numbers.
 * @argc: number of arguments
 * @argv: array
 * Return: Always 0
 */
int main(int argc, char *argv[])
{

	int num1 = argc - 1, num2 = num1 - 1, product;

	if (num1 == 2)
	{
		product = atoi(argv[num1]) * atoi(argv[num2]);
		printf("%d\n", product);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}

