#include "main.h"

/**
 * rev_string - function that reverse a given string
 * @s: the string to reverse
 *
 * Return: Always 0
 */
void rev_string(char *s)
{
	char rev;
	char *finish;

	while (*finish)
		finish++;
	finish = finish - 1;
	while (s < finish)
	{
		rev = *s;
		*s++ = *finish;
		*end-- = rev;
	}
}
