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

	int num1, num2, product;

	printf("Enter two numbers:");

	scanf("%d %d, &num1, &num2);
	product = num1 * num2;

	printf("product of two numbers : %d " , product);

	return (0);
}
