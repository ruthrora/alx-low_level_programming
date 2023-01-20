#include "main.h"
/**
 * _strcpy - copy the string from src to dest
 * @dest: pointer to destination
 * @src: pointer to source string
 * Return: Always 0
 */
char *_strcpy(char *dest, char *src)
{
	char *temp = dest;

	while (*src)
		*dest++ = *src++;
	return (0);
}
