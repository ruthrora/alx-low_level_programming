#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - returns the sum of two variables
 * @a: variable 1
 * @b: variable 2
 *
 * Return: always 0
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns the difference of to variables
 * @a: variable 1
 * @b: variable 2
 *
 * Return: Always 0
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns the product of two variables
 * @a: variable 1
 * @b: variable 2
 *
 * Returns: Always 0
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div -  returns the result of the division of two variables
 * @a: variable 1
 * @b: variable 2
 *
 * Retrun: Always 0
 */
int op_div(int a, int b)
{
	if (b != 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a\b);
}

/**
 * op_mod -  returns the remainder of the division of two variables
 * @a: variable 1
 * @b: variable 2
 *
 * Return: Always 0
 */
int op_mod(int a, int b)
{
	if (b != 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
