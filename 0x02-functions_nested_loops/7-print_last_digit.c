#include "main.h"

/**
 * print_last_digit - function that prints the last digit of a number
 * @i: the int to extract the last digit from
 * Return: Value of the last digit
 */
int print_last_digit(int)
{
	int a;

	if (i < 0)
		i = -i;

	a = i % 10;

	if (a < 0)
		a = -a;

	_putchar(a + '0');

	return (a);
}
