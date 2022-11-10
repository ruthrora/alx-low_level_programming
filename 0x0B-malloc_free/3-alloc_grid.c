#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid -  returns a pointer to a 2 dimensional array of integers.
 * @width: of 2 dimentional array
 * @height: of 2 dimentional array
 *
 * Return: Always 0 (Success)
 */
int **alloc_grid(int width, int height)
{
	int w;
	int h;
	int **ar;

	if (width == 0 || height == 0)
		return (NULL);

	ar = malloc(height * sizeof(int *));

	if (ar == NULL)
		return (NULL);
	for (w = 0; w < height; w++)
	{
		ar[w] = malloc(width * sizeof(int));
		if (ar[w] == NULL)
		{
			for (w = w - 1; w >= 0; w--)
				free(ar[w]);

			free(ar);
			return (NULL);
		}
	}

	for (w = 0; w < height; w++)
	{
		for (h = 0; h < width; h++)
			ar[w][h] = 0;
	}

	return (ar);
}
