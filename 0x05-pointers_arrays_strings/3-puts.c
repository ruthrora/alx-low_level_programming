#include "main.h"
/**
 * _puts - functions that prints a string
 * @str:pointer char
 * Return: Always 0
 */
void _puts(char *str)
{
	for (; *str != '\0';)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
