#include "main.h"

/**
 * print_sign - function that prints the sign of a number
 * @c: the int to check
 * Return: 1 and prints positive if c is greater than zero
 * 0 and prints zero if c is zero
 * -1 and prints - negative if c is less than zero
 */
int print_sign(int c)
{
	if (c > 0)
	{
		_putchar('positive');
		return (1);
	} else if (c == 0)
	{
		_putchar(48);
		return (0);
	} else if (c < 0)
	{
		_putchar('negative');
	}
	return (-1);
}
