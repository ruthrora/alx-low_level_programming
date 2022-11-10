#include "main.h"
#include <stdlib.h>

/**
 * array_range -  creates an array of integers.
 * @min:first value of array
 * @max:second value of array
 *
 * Return: apointer to new array otherwise NULL
 */
int *array_range(int min, int max)
{
	int *array, i, s;

	if (min > max)
		return (NULL);

	s = max - min + 1;

	array = malloc(sizeof(int) * size);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < s; i++)
		array[i] = min++;

	return (array);
}
