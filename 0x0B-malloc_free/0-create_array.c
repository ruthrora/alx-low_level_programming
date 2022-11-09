#include "main.h"
#include <stdlib.h>

/**
 * create_array -  function that creates an array of chars
 * @size: size of array to be created
 * @c: character to be intialized
 *
 * Return: pointer to array, NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *pointer;
	int i = 0;

	if (size == 0)
		return (NULL);

	pointer = malloc(sizeof(char) * size);

	if (pointer == NULL)
		return (NULL);
	while (size--)
	{
		pointer[i++] = c;
	}

	return (pointer);
}
