#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * @n: long int
 * @m: unsigned int
 *
 * Return: Always 0
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int num = 0, index;

	index = n ^ m;

	while (index > o)
	{
		if (index & 1)
		{
			num++;
		}
		index >>= 1;
	}

	return (num);
}
