#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a new string
 * @str: string to be dublicated
 *
 * Return: On success, if returns a pointer to string, else NULL
 *
 */
char *_strdup(char *str)
{

	char *pointer = str;
	int count = 0;

	if (str == NULL)
		return (NULL);

	while (*pointer++ != '\0')
		count = count + 1;

	pointer = malloc((count + 1) * sizeof(char));

	if (pointer == NULL)
		return (NULL);

	count = 0;
	while (*str)
		pointer[count++] = *str++;
	pointer[count] = *str;

	return (pointer);
}
