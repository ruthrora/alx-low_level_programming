#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse.
 * @s: string to be printed
 *
 * Return: Always 0 (Success)
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	s++;
	_print_rev_recursion(s);
	s--;
	_putchar(*s);

