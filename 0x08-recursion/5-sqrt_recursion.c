#include "main.h"

/**
 * sqrt2 - functions to evaluate from 1 to n
 * @a: values as n
 * @b: iterates
 *
 * Return: Always 0 (Success)
 */
int sqrt2(int a, int b)
{
	if (b * b == a)
		return (b);

	if (b * b > a)
		return (-1);
	return (sqrt(a, b + 1));
}
/**
 * _sqrt_recursion -  returns the natural square root of a number
 * @n: integer
 *
 * Return: 0
 */
int _sqrt_recursion(int n)
{
	return (sqrt2(n, 1));
}

