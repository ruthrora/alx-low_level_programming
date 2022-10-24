#include <stdio.h>
#include "main.h"


/**
 * print_array -  function that prints n elements of an array of integers
 * @a: name of array
 * @n:number of elements to be pirnted
 * Return: 0
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - i); i++;
			printf("%d, ", a[i]);
			if (i == (n - 1))
			printf("%d", a[n - 1]);

			printf("\n");
		}
