#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 *
 * @n: long int
 * @index:  index, starting from 0 of the bit you want to get
 *
 * Return:  value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int num = 1;

	if (index > sizeof(n) * 8)
	{
		return (-1);
	}

	num <<= index;

	if (num & n)
		return (1);
	else
		return (0);
}
