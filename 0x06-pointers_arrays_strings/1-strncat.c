#include "main.h"

/**
 * _strncat -  concatenates two strings.
 * @dest: String to copy to
 * @src: String to copy from
 * @n: Number of bytes
 * Return: Always 0 (Success)
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, cp = 0;

	while (dest[i++])
		cp++;
	for (i = 0; src[i] && i < n; i++)
		dest[cp] = src[i];
	return (0);
}
