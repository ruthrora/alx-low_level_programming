#include "main.h"

/**
 * _isdigit - function that checks for a digit
 * @n: The number to be checked
 *
 * Return: 1 for a character that will be a digit, 0 otherwise
 */
int _isdigit(int n)
{
	if (n >= 48 && n <= 57)
	{ 
		return (1);
	}

	return (0);
}
