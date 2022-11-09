#include "main.h"
#include <stdlib.h>

/**
 * str_concat -  concatenates two strings.
 * @s1: first string
 * @s2: second string
 *
 * Return: A pointer to allocated memory else NULL
 */
char *str_concat(char *s1, char *s2)
{
	int i;
	char *pointer = NULL;
	char *input1 = s1;
	char *input2 = s2;

	if (input1 == NULL)
		input1 = "";

	if (input2 == NULL)
		input2 = "";

	pointer = input1;
	while (*pointer++)
		i++;

	pointer = input2;
	while (*pointer++)
		i++;

	i++;
	pointer = malloc(i * sizeof(char));

	if (pointer == NULL)
		return (NULL);

	i = 0;
	while (*input1)
	{
		pointer[i++] = *input1++;
	}

	while (*input2)
	{
		pointer[i++] = *input2++;
	}
	pointer[i] = *input2;

	return (pointer);
}
