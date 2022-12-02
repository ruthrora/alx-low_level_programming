#include "main.h"

/**
 * set_bit - sets value of bit to 1
 *
 * @n:integer
 * @index:  index starting from 0 of the bit you want to set
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index < sizeof(n) * 8)
	{
		*n = *n | (1 << index);

		 return (1);
	}

	return (-1);
}
