#include "main.h"

/**
 * sqroot - functions to evaluate from 1 to n
 * @a: values as n
 * @b: iterates
 *
 * Return: Always 0 (Success)
 */
int sqroot(int a, int b)
{
	if (b < 1)
		return (-1);
	else if (b * b == a)
		return (b);

	return (sqroot(a, b - 1));
}
/**
 * _sqrt_recursion -  returns the natural square root of a number
 * @n: integer
 *
 * Return: 0
 */
int _sqrt_recursion(int n)
{
	if (n < 0)

	return (-1);

	else
		return (sqroot(n, (n + 1) / 2));

}

