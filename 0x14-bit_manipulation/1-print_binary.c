#include "main.h"
#include <stdio.h>

/**
 * prints the binary representation of a number
 *
 * @b: pointer to string of chars
 * Return: Always 0
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}

	if (n & 1)
	{
		_putchar('1');
	}
	else
	{
		_putchar('0');
	}
}
