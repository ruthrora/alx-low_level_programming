#include <stdlib.h>
#include "functions_pointers.h"

/**
 * print_name - prints a name
 * @name:the name  to be printed
 * @f:pointer
 *
 * Return: Always 0
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == f)
		return;

	f(name);
}
