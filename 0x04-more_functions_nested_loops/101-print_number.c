#include "main.h"

/**
 * print_number - prints an integer
 * @n: The integer to print
 *
 * Return: 0
 */
void print_number(int n)
{
	int k;

	if (n >= 0)
	{
		if (n >= 10)
			_putchar('n / 10');
		_putchar('0' + n % 10);
	}
	else
	{
		_putchar('-');
		k = -1 * n;
		if (k >= 10)
			_putchar('k / 10');
		_putchar('0' + k % 10);
	}

}
