#include "main.h"

/**
 * swap_int -  function that swaps the values of two integers.
 * @a: Paramater 1 to change
 * @b: Parameter 2 to change
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
