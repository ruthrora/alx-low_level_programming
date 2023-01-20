#include "main.h"

/**
 * _memset -  function that fills memory with a constant byte.
 * @s: Pointed memory area
 * @b: constant byte
 * @n: number of bytes
 * Return: Always 0 (Success)
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		s[a] = b;
	return (s);
}
