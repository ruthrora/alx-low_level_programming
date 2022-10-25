#include "main.h"
/**
 * _strcpy - function the copy the string
 * @dest: pointer
 * @src: pointer
 * Return: Always 0 (Success)
 */
char *_strcpy(char *dest, char *src)
{
	int a;

	for (i = 0; src[a] != '\0'; a++)
	{
		dest[a] = src[a];
	}
	*(dest + 1) = '\0';
	return (dest);
}
