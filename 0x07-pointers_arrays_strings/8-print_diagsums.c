#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square
 * @a: first input
 * @size: second input
 * Return: o (Success)
 */
void print_diagsums(int *a, int size)
{
	int i, n, add1 = 0, add2 = 0;

	for (i = 0; i <= (size * size); i = i + size + 1)
		add1 = add1 + a[i];

	for (n = size - 1; n <= (size * size) - size; n = n + size - 1)
		add2 = add2 + a[n];
	printf("%d, %d\n", add1, add2);
}
