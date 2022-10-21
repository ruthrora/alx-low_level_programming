#include "main.h"

/**
 * print_triangle -  prints a triangle, followed by a new line.
 * @size: size of the triangles
 *
 * Return: Always 0
 */
void print_triangle(int size)
{
	int a;
	int b;

	for (a = 1; a <= size; a++)
	{
		for (b = size; b > a; --b)
			_putchar(' ');
		for ( ; b > 0; --b)
			_putchar('#');
		_putchar('\n');
	}

	if (size <= 0)
		_putchar('\n');
}
