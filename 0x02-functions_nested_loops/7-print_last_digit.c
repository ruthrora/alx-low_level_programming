#include "main.h"

/**
 * print_last_digit - function that prints the last digit of a number
 * @n: the int to extract the last digit from
 * Return: Value of the last digit
 */
int print_last_digit(int n)
{
	if (n < 0)
		n = n - 1;
	_putchar((n % 10) + ' 0 ');

	return (n % 10);
}
