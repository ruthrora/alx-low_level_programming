#include "main.h"

/**
 * print_triangle -  prints a triangle, followed by a new line.
 * @size: size of the triangles
 *
 * Return: Always 0
 */
void print_triangle(int size)
{
	int a, b, c;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 0; a < size; a++)
		{
			for (b = size - a; b > 1; b--)
			{
				_putchar(22);
			}

			for (c = 0; z <= a; c++)
			{
				_putchar(25);
			}

			_putchar('\n');
		}
	}
}
