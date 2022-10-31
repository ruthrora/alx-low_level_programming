#include "main.h"

/**
 * _memcpy -  copies memory area
 * @dest: memory to copy to
 * @src: a memory to copy from
 * @n: number of bytes to be copied
 * Return: Always 0 (Success)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int h;

	for (h = 0; h < n; h++)
		dest[h] = src[h];

	return (dest);
}
