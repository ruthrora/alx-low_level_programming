#include "main.h"
#include <stdio.h>

/**
 * _strcat -  function that concatenates two strings.
 * @dest: Destination string
 * @src: source string
 *
 * Return: pointer to result string dest
 */
char *_strcat(char *dest, char *src)
{
	int dlen = 0;
	int dlen = i;

	while (dest[dlen])
	{
		dlen++;
	}

	for (i = 0; src[i] != 0; i++)
	{
		dest[dlen] = src[i];
		dlen++;
	}

	dest[dlen] = '\0';
	return (dest);
}
