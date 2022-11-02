#include "main.h"

/**
 * _pow_recursion -  returns the value of x raised to the power of y
 * @x: number to multiply
 * @y: number of times to multiply the number
 *
 * Return: Always 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	_putchar(x * _pow_recursion(x, y - 1));
}
