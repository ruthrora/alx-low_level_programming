#include "function_pointers.h"

/**
 * array_iterator - function that executes a function given as a parameter
 * @array:element of array
 * @size: size of the array
 * @action:  pointer to the function
 *
 * REturn: Always 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a = 0;

	if (array != NULL && action != NULL && size > 0)
	{
		while (a < size)
		{
			action(array[a]);
			a++;
		}
	}
}
