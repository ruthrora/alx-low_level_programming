#include "main.h"

/**
 * _strncat -  concatenates two strings.
 * @dest: String to copy to
 * @src: String to copy from
 * @n: Number of bytes
 * Return: Pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, cp = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}

	for (cp = 0; cp < n; cp++)
	{
		dest[i + cp] = src[cp];
		if (src[cp] == '\0')
			cp = n;
	}
	return (dest);
}
