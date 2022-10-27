#include "main.h"

/**
 * revere_array - reverses the content of an array of integers.
 * @a: array of integers
 * @n: Numbers of elements
 * Return: Always 0
 */
void reverse_array(int *a, int n)
{
	int temp, i;

	for (i = 0; i < n; i++)
	{
		n--;
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
	}
}
