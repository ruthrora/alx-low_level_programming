#include "main.h"

/**
 * print_square -  prints a square, followed by a new line
 * @S: Number of square of times
 *
 * Return: Always 0
 */
void print_square(int S)
{
	int a, b;

	if (S <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 0; a < S; a++)
		{
			for (b = 0; b < S; b++)
			{
				_putchar(55);
			}
			_putchar('\n');
		}
	}
}
